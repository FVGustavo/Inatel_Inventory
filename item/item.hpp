#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

#include "../node/node.hpp"

using namespace std;

/**
 * @brief Estrutura do item.
 * 
 */
typedef struct _item_ {
    string item_name;
    string item_owner_name;
    string item_magical_property;
    int item_id;
    int item_rarity;
  } Item_t;

#endif // ITEM_HPP