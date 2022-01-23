/*
Problema "acima_diagonal"
Ler um inteiro N (m�ximo = 10) e uma matriz quadrada de ordem N
contendo n�meros inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de n�meros acima da diagonal
principal � mostrado ao lado (no caso as c�lulas com fundo cinza).
*/
#include <iostream>

using namespace std;
int main()
{
    int ordem;
    int soma = 0;
    cout << "Qual a ordem da matriz? ";
    cin >> ordem;

    int** mat = new int* [ordem];
    for (int i = 0; i < ordem;i++) {
        mat[i] = new int[ordem];
    }
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem;j++) {
            cout << "\nElemento["<<i<<","<<j<<"]:";
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (j > i) {
                soma += mat[i][j];
            }
        }
    }
    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma;
}

