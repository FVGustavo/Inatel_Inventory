#ifndef ITEM_GRAPH_HPP
#define ITEM_GRAPH_HPP

#include <iostream>
#include <list>

#include "../item/item.hpp"
#include "../item_similarity_calc/item_similarity_calc.hpp"

using namespace std;

/**
 * @brief Função para criar um grafo com a similaridade entre os itens.
 * 
 * @param item_list Ponteiro para ista de itens.
 * @return int 0: sucesso; int -1: erro.
 */
int item_graph(list<Item_t> *item_list);

/**
 * @brief Função para criar as arestas do grafo.
 * 
 * @param adj Lista de adjacência.
 * @param item_1 Primeiro item (atuará como primeiro vértice).
 * @param item_2 Segundo item (atuará como segundo vértice).
 * @param item_similarity Similaridade entre os itens (atuará como peso da aresta).
 * @param oriented Variável para checar se o grafo será orientado ou não.
 */
void item_graph_edge(list<Node_t> adj[], Item_t item_1, Item_t item_2, int item_similarity, bool oriented);

#endif ITEM_GRAPH_HPP