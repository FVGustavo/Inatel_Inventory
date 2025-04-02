#include "item_graph.hpp"

#define TAG "| ITEM_GRAPH |"

list<Node_t>* list_adj = nullptr;
int item_quant = 0;

int item_graph(list<Item_t> *item_list){
    if(item_list == nullptr || item_list->size() < 2){
        cout << TAG << " A lista de itens deve conter pelo menos 2 elementos para criar o grafo." << endl;
        return -1;
    }

    cout << "\nVamos criar o grafo com os itens similares!" << endl;

    bool oriented;
    cout << "O grafo é orientado? (1 -> Sim; 0 -> Não): ";
    cin >> oriented;

    item_quant = 0;
    if(list_adj){
        delete[] list_adj;
        list_adj = nullptr;
    }

    item_quant = item_list->size();

    list_adj = new list<Node_t>[item_quant + 1];

    for(list<Item_t>::iterator it1 = item_list->begin(); it1 != item_list->end(); ++it1){
        for(list<Item_t>::iterator it2 = next(it1); it2 != item_list->end(); ++it2){
            int similarity;
            item_similarity_calc(*it1, *it2, &similarity);
            item_graph_edge(list_adj, *it1, *it2, similarity, oriented);
        }
    }

    cout << "\n" << TAG << " Grafo atual:\n" << endl;
    for(int i = 0; i <= item_quant; i++){
        for(list<Node_t>::iterator list_adj_it = list_adj[i].begin(); list_adj_it != list_adj[i].end(); ++list_adj_it){
            cout << i << " -> " << list_adj_it->vertex << " (Peso: " << list_adj_it->weight << ")" << endl;
        }
    }

    cout << "\n" << TAG << " Grafo criado com sucesso!\n" << endl;

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