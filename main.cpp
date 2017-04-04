#include "restaurante.h"

int main() {
    Restaurante restaurante;
    cout << "teste" << endl << endl;
    restaurante.adicionaPedido(Pedido(1, "Batata-Frita", 5, 3.00), 1);
    cout << "teste" << endl << endl;
    //restaurante.adicionaPedido(Pedido(2, "Coca-Cola", 3, 1.00), 0);
    cout << restaurante.calculaTotalRestaurante() << endl;
}

// g++ main.cpp mesa.cpp pedido.cpp restaurante.cpp -o Atividade3
