#ifndef ITEM_SIMILARITY_CALC_HPP
#define ITEM_SIMILARITY_CALC_HPP

#include <list>

#include "../item/item.hpp"

/**
 * @brief Função que calcula a similaridade entre dois itens (tal valor atuará como peso da aresta do grafo).
 * 
 * @param item_1 Primeiro item a ser comparado.
 * @param item_2 Segundo item a ser comparado.
 * @param item_similarity Valor da similaridade entre os dois itens.
 * @return int 0: sucesso; int -1: erro.
 */
int item_similarity_calc(Item_t item_1, Item_t item_2, int* item_similarity);

#endif // ITEM_SIMILARITY_CALC_HPP