#include "item_insert.hpp"

#define TAG "| ITEM_INSERT |"

void item_insert(list<Item_t> *item_list) {
    Item_t item;
    cout << "\nVamos inserir o seu item no Inventário!" << endl;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "1 - Insira o nome do item: ";
    getline(cin, item.item_name);
    
    cout << "\n2 - Insira o nome do dono: ";
    getline(cin, item.item_owner_name);
    
    cout << "\n3 - Insira a propriedade mágica do seu item: ";
    getline(cin, item.item_magical_property);
    
    cout << "\n4 - Insira o número de identificação do seu item: ";
    cin >> item.item_id;
    while(cin.fail()){
        cout << "Número de identificação inválido! Insira um número inteiro: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> item.item_id;
    }

    cout << "\n5 - Insira o nível de raridade do seu item (0 a 100): ";
    while(cin.fail()){
        cout << "Nível de raridade inválido! Insira um número inteiro: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> item.item_id;
    }

    do {
        cin >> item.item_rarity;
        if(item.item_rarity < 0 || item.item_rarity > 100){
            cout << "Nível de reridade inválido! Insira um valor entre 0 e 100: ";
        }
    } while (item.item_rarity < 0 || item.item_rarity > 100);
    cout << endl;
    
    item_list->push_back(item);
    
    cout << "Item inserido com sucesso!\n";
    cout << endl;
    
    cout << "Pressione qualquer tecla para voltar ao menu principal: ";
    cin.get();
    system("cls");
  }