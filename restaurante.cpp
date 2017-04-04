#include "restaurante.h"

void Restaurante::adicionaPedido(Pedido p, int n) {
    mesa[n].adicionaPedido(p);
}
float Restaurante::calculaTotalRestaurante() {
    float valorTotal = 0;

    for (int i = 0; i < TAM; i++) {
        if (mesa[i].getPedidoAtual() !=  -1) {
            float aux = 0;
            aux + mesa[i].calculaTotal();
            valorTotal = valorTotal + aux;
        }
    }
    return valorTotal;
}

