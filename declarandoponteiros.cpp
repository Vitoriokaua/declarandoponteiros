#include <iostream>

using namespace std;

int main() {
	//ent�o para declarar uma vari�vel que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da vari�vel>
	int* ptr;
	//obs: a posi��o do asterisco neste caso n�o importa
	//int* ptr; //d� no mesmo!


	int numero = { 101 };
	//Aqui vamos colocar na tela o endere�o de mem�ria
	//da vari�vel N�mero. Ou seja onde ela est� carregada na mem�ria RAM. 
	// Lembre-se que o que vai para tela � o primeiro endere�o da vari�vel n�mero
	//pois ela ocupa 4 endere�os pois tem 4 bytes de tamanho

	cout << "\nendereco de numero " << &numero;

	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endere�o de mem�ria alocado para vari�vel ponteiro
	//ou seja qual lugar da RAM ele est� alocado?
	//veja n�s ainda n�o estamos colocando na tela nada que esteja dentro das vari�veis.
	//pois para colocar o que est� dentro das vari�veis
	//n�s usamos apenas o nome da vari�vel!
	//exemplo std::cout << Numero
	//std::cout << ptr

	cout << "\nendereco de ptr " << &ptr<<"\n";


}