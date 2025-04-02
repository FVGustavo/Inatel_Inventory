#include <iostream>
#include <list>
#include <cstdlib>
#include <cstring>

#include "menu.hpp"

using namespace std;

void menu(){
    cout << "Inventário" << endl;
    cout << "\nEscolha uma dos opções a seguir: " << endl;
    cout << "\n1 - Inserir item" << endl;
    cout << "2 - Cadastrar similaridades entre itens" << endl;
    cout << "3 - Buscar itens similares" << endl;
    cout << "4 - Verificar a existência de um item" << endl;
    cout << "5 - Listar itens (ordem alfabética de nome)" << endl;
    cout << "6 - Listar itens (ordem decrescente de raridade)" << endl;
    cout << "7 - Contar itens com mesma propriedade mágica" << endl;
    cout << "8 - Remover itens menos raros" << endl;
    cout << "9 - Sair" << endl;
    cout << endl;
  }