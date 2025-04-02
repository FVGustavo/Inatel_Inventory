#include <iostream>
#include <list>
#include <cstdlib>
#include <cstring>
#include <limits>

#include "components/menu/menu.hpp"
#include "components/item/item.hpp"
#include "components/item_check/item_check.hpp"
#include "components/item_count_by_same_magical_property/item_count_by_same_magical_property.hpp"
#include "components/item_graph/item_graph.hpp"
#include "components/item_insert/item_insert.hpp"
#include "components/item_list_by_given_similarity/item_list_by_given_similarity.hpp"
#include "components/item_list_by_name/item_list_by_name.hpp"
#include "components/item_list_by_rarity/item_list_by_rarity.hpp"
#include "components/item_remove_by_rarity/item_remove_by_rarity.hpp"
#include "components/item_search/item_search.hpp"
#include "components/item_similarity_calc/item_similarity_calc.hpp"

using namespace std;

list<Item_t> item_list;

int main() {
    int option = 0;
    
    while(option != 9){
        menu();
        cout << "Qual opção você deseja? ";
        cin >> option;
        while(cin.fail()){
            cout << "\nOpção inválida. Tente novamente.\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> option;
        }

        switch(option){
            case 1:
                item_insert(&item_list);
                break;
    
            case 2:
                item_graph(&item_list);
                // item_list_by_given_similarity(item_list, owner_name, item_id, minimum_similarity);
                break;
    
            case 3:
                item_search();
                break;
    
            case 4:
                item_check();
                break;
    
            case 5:
                item_list_by_name();
                break;
    
            case 6:
                item_list_by_rarity();
                break;
    
            case 7:
                item_count_by_same_magical_property();
                break;
    
            case 8:
                item_remove_by_rarity();
                break;
    
            case 9:
                cout << "Saindo do programa..." << endl;
                break;
    
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
  }
  
  return 0;
}