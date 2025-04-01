#include "item_similarity_calc.hpp"

#define TAG "| ITEM_SIMILARITY_CALC |"

int item_similarity_calc(list<Item_t> item_list, int* item_similarity){
    if(item_list.size() < 2){
        cout << TAG << " Lista tem menos de 2 elementos" << endl;
        return -1;
    }

    Item_t item_1, item_2;
    
    item_1 = item_list.front();
    int item_new_position = 1;

    list<Item_t>::iterator item_list_it = item_list.begin();
    
    for(int i = 0; i < item_new_position; ++i){
        ++item_list_it;
    }
    
    item_2 = *item_list_it;
    
    // Gustavo: Por convenção, quanto mais próximo de 0, mais similares os itens são
    *item_similarity = abs(item_1.item_rarity - item_2.item_rarity);
    cout << "A similaridade entre o item " << item_1.item_name << " e o item " << item_2.item_name << " é: " << *item_similarity << endl;
    
    return 0;
}