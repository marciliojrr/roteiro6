#include "pedido.h"

void Pedido::setNumero(int n) {
    if (n < 0)
        numero = 0;
    else
        numero = n;
}
void Pedido::setQuantidade(int q) {
    if (q < 0)
        quantidade = 0;
    else
        quantidade = q;
}
void Pedido::setPreco(float p) {
    if (p < 0.0)
        preco = 0.0;
    else
        preco = p;
}
void Pedido::setDescricao(string d) {
    if (d == "")
        descricao = "Vazio";
    else
        descricao = d;
}
Pedido::Pedido(int n, string d, int q, float p) {
    setNumero(n);
    setDescricao(d);
    setQuantidade(q);
    setPreco(p);
}
Pedido::Pedido() {
    setNumero(0);
    setDescricao("vazio");
    setQuantidade(0);
    setPreco(0.0);
}
