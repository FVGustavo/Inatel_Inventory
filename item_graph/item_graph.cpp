#include "item_graph.hpp"

#define TAG "| ITEM_GRAPH |"

int item_graph(list<Item_t> *item_list, int item_similarity){
    cout << "\nVamos criar o grafo com os itens similares!" << endl;

    int vertexes;
    bool oriented;

    vertexes = item_list->size();
    if((vertexes & 1) != vertexes){
        cout << "\n" << TAG << " A quantidade de itens na lista é ímpar" << endl;
        return -1;
    }

    cout << "A quantidade de vértices que o grafo terá é: " << vertexes << endl;
    
    cout << "O grafo é orientado? (1 - sim, 0 - não): ";
    cin >> oriented;

    list<Node_t> list_adj[vertexes];

    Item_t item_1, item_2;
    
    for(list<Item_t>::iterator item_list_it = item_list->begin(); item_list_it != item_list->end(); ++item_list_it){
        item_1 = *item_list_it;
        item_list_it++;

        item_2 = *item_list_it;
        item_list_it--;
        
        item_graph_edge(list_adj, item_1, item_2, item_similarity, oriented);

        cout << "\nGrafo atual: " << endl;
        for(int i = 0; i < vertexes; i++){
            for(list<Node_t>::iterator list_adj_it = list_adj[i].begin(); list_adj_it != list_adj[i].end(); ++list_adj_it){
                cout << i << " " << list_adj_it->vertex << " " << list_adj_it->weight << endl;
            }
        }
    }
    return 0;
}

void item_graph_edge(list<Node_t> adj[], Item_t item_1, Item_t item_2, int item_similarity, bool oriented){
    Node_t new_node;
    new_node.vertex = item_2.item_id;
    new_node.weight = item_similarity;
    adj[item_1.item_id].push_back(new_node);

    if(!oriented){
        new_node.vertex = item_1.item_id;
        adj[item_2.item_id].push_back(new_node);
    }
}