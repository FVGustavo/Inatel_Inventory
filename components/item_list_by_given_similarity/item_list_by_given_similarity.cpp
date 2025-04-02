#include "item_list_by_given_similarity.hpp"

#define TAG "| ITEM_LIST_BY_GIVEN_SIMILARITY |"

int item_list_by_given_similarity(list<Item_t> item_list, string owner_name, int item_id, int minimum_similarity) {
    if(item_list.empty()){
        cout << "\n" << TAG << " A lista de itens está vazia!" << endl;
        return -1;
    }

    Item_t* target_item = nullptr;
    for(auto& item : item_list){
        if(item.item_id == item_id){
            target_item = &item;
            break;
        }
    }

    if(target_item == nullptr){
        cout << "\n" << TAG << " O item com o código " << item_id << " não foi encontrado na lista!" << endl;
        return -1;
    }

    cout << "\nListando os itens que NÃO são de " << owner_name << " e que tenham uma similaridade mínima entre eles e o item de código " << item_id << "!" << endl;

    cout << "\nItens com similaridade mínima de " << minimum_similarity << " com o item de código " << item_id << ":" << endl;

    for(const auto& item : item_list){
        if(item.item_id != item_id && item.item_owner_name != owner_name){
            int similarity;
            item_similarity_calc(*target_item, item, &similarity);
            if(similarity >= minimum_similarity){
                cout << "- Item ID: " << item.item_id
                     << ", Nome: " << item.item_name
                     << ", Raridade: " << item.item_rarity
                     << ", Propriedade Mágica: " << item.item_magical_property << endl;
            }
        }
    }

    return 0;
}