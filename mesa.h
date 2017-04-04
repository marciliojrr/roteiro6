#ifndef MESA_H_INCLUDED
#define MESA_H_INCLUDED
#include "pedido.h"

#define MAX 100
class Mesa {
private:
    Pedido pedido [MAX];
    int pedidoAtual;
public:
    void adicionaPedido(Pedido);
    void zeraPedidos();
    float calculaTotal();
    int getPedidoAtual() {return pedidoAtual;}
    Mesa();
};


#endif // MESA_H_INCLUDED
