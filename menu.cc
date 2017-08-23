#include <iostream>
#include "sis.h"
using namespace std;

int menu(){
	cab();
	int n;
	cout<<"\n\t\tMENU PRINCIPAL\n\n";
	cout<<"\t[1] ADD PIZZA AO CARDAPIO\n";
	cout<<"\t[2] REMOVER PIZZA DO CARDAPIO\n";
	cout<<"\t[3] MOSTRAR O CARDAPIO\n";
	cout<<"\t[4] PESQUISAR PIZZA\n";
	cout<<"\t[0] SAIR";
	cin>>n;
	return n;
}

void menuExibir(){
	cab();
	int n;
	cout<<"\n\t\tMENU EXIBIR\n\n";
	cout<<"\t[1] EXIBIR PIZZAS EM ORDEM ALFABETICA a-z";
	cout<<"\t[2] EXIBIR PIZZAS ORDENADAS PELO VALOR $";
	cout<<"\t[3] EXIBIR PIZZAS ORDENADAS PELO CÓDIGO //";
	cout<<"\t[0] VOLTAR";
	cin>>n;
	//exibir(n);
}

void menuPesquisar(){
	cab();
	int n;
	cout<<"\n\t\tMENU PESQUISAR\n\n";
	cout<<"\t[1] PESQUISAR POR NOME a-z";
	cout<<"\t[2] PESQUISAR PELO CÓDIGO //";
	cout<<"\t[3] PESQUISAR POR VALOR $";
	cout<<"\t[0] VOLTAR";
	cin>>n;
	//pesquisar(n);
}
