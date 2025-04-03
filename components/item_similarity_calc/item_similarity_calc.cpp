#include "item_similarity_calc.hpp"

#define TAG "| ITEM_SIMILARITY_CALC |"

int item_similarity_calc(Item_t item_1, Item_t item_2, int* item_similarity){
    if(item_1.item_name.empty() || item_2.item_name.empty()){
        cout << TAG << "Falha em encontrar um ou mais itens" << endl;
        return -1;

    }

    if(item_1.item_id == item_2.item_id){
        cout << TAG << "Os itens são iguais" << endl;
        return -1;
    }

    // Por convenção, a similaridade é calculada como o valor absoluto da diferença entre a raridade de cada item + 1, para evitar arestas de peso 0.
    *item_similarity = abs(item_1.item_rarity - item_2.item_rarity) + 1;

    return 0;
}
