#ifndef ITEM_SIMILARITY_CALC_HPP
#define ITEM_SIMILARITY_CALC_HPP

#include <list>

#include "../item/item.hpp"

/**
 * @brief Função para calcular a similaridade entre dois itens.
 * 
 * @param item_list Lista de itens para pegar os dois primeiros itens.
 * @param item_similarity Variável para armazenar a similaridade entre os dois itens.
 * @return int 
 */
int item_similarity_calc(list<Item_t> item_list, int* item_similarity);

#endif // ITEM_SIMILARITY_CALC_HPP