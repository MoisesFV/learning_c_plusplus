/*
Problema "soma"
Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
números.
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y, soma;
    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "\nDigite o valor de Y: ";
    cin >> y;
    soma = x + y;
    cout << "\nSOMA = " << soma;
    return 0;
}