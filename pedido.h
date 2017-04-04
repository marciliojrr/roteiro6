#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Pedido {
private:
    int numero, quantidade;
    string descricao;
    float preco;

public:
    void setNumero (int);
    void setQuantidade (int);
    void setPreco (float);
    void setDescricao (string);
    int getNumero() {return numero;}
    int getQuantidade() {return quantidade;}
    float getPreco() {return preco;}
    string getDescricao() {return descricao;}
    Pedido (int, string, int, float);
    Pedido();
};




#endif // PEDIDO_H_INCLUDED
