#ifndef ITEM_LIST_BY_GIVEN_SIMILARITY_HPP
#define ITEM_LIST_BY_GIVEN_SIMILARITY_HPP

#include "../item/item.hpp"
#include "../item_similarity_calc/item_similarity_calc.hpp"

/**
 * @brief Função que lista os itens que NÃO são de um dado jogador e que tenham uma similaridade mínima entre eles e um item de código dado pelo usuário.
 * 
 * @param item_list Lista de itens.
 * @param owner_name Nome do dono do item.
 * @param item_id Código do item.
 * @param minimum_similarity Valor mínimo da similaridade entre o item dado e os itens listados.
 * @return int 0: sucesso; int -1: erro.
 */
int item_list_by_given_similarity(list<Item_t> item_list, string owner_name, int item_id, int minimum_similarity);

#endif // ITEM_LIST_BY_GIVEN_SIMILARITY_HPP