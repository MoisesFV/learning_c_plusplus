/*
Problema "validacao_de_nota" (adaptado de URI 1117)
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente.
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double nota1, nota2, media;

	cout << "Digite a primeira nota: ";
	cin >> nota1;

	while (nota1 < 0 || nota1 > 10) {
		cout << "Valor invalido! Tente novamente: ";
		cin >> nota1;
	}
	cout << "\nDigite a segunda nota: ";
	cin >> nota2;

	while (nota2 < 0 || nota2 > 10) {
		cout << "Valor invalido! Tente novamente: ";
		cin >> nota2;
	}

	media = (nota1 + nota2) / 2.0;

	cout << fixed << setprecision(2);
	cout << "MEDIA = " << media;
}
