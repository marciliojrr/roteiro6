#include "mesa.h"

Mesa::Mesa() {
    pedidoAtual = -1;
}
void Mesa::adicionaPedido(Pedido p) {
     if (pedidoAtual == -1)
        pedidoAtual = 0;
     pedido [pedidoAtual] = p;
     pedidoAtual++;
}
void Mesa::zeraPedidos() {
    for (int i = 0; i <= pedidoAtual; i++) {
        pedido [i] = Pedido(0,"vazio", 0, 0.0);
    }
    pedidoAtual = -1;
}
float Mesa::calculaTotal() {
    float valorTotal = 0;
    for (int i = 0; i <= pedidoAtual; i++) {
        float aux = pedido[i].getPreco()*pedido[i].getQuantidade();
        valorTotal = valorTotal + aux;
    }
    return valorTotal;
}
