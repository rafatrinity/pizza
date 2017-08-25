#include "sis.h"
#include <bits/stdc++.h>
using namespace std;

class pizza
{
	string nome;
	string ingredientes;
	char tamanho;
	double preco;
	int cod;
public:
	string getNome(){
		return nome;
	}
	void setNome(string nome){
		int tam=nome.size();
		for (int i = 0; i < tam; i++)
			nome[i]=tolower(nome[i]);
		nome[0]=toupper(nome[0]);
		for (int i = 0; i < tam; i++){
			if (nome[i]==' ')
				nome[i+1]=toupper(nome[i+1]);
		}
		this->nome=nome;
	}

	double getPreco(){
		return preco;
	}
	void setPreco(int preco){
		if(preco>0)
			this->preco=preco;
		else
			cout<<"valor inválido";
	}

	char getTamanho(){
		return tamanho;
	}
	void setTamanho(char tamanho){
		tamanho=toupper(tamanho);
		if(tamanho=='P'||tamanho=='M'||tamanho=='G')
			this->tamanho=tamanho;
	}

	string getIngredientes(){
		return ingredientes;
	}
	void setIngredientes(string ingredientes){
		int tam=ingredientes.size();
		for (int i = 0; i < tam; i++)
			ingredientes[i]=tolower(ingredientes[i]);
		ingredientes[0]=toupper(ingredientes[0]);
		for (int i = 0; i < tam; i++){
			if (ingredientes[i]==' ')
				ingredientes[i+1]=toupper(ingredientes[i+1]);
		}
		this->ingredientes=ingredientes;
	}

	int getCod(){
		return cod;
	}
	void setCod(int cod){
		this->cod=cod+1000;
	}
};
void exibir();
void cardapio(pizza p);
void add(){
	cab();
	string nome, ing;
	double preco;
	char tamanho;
	pizza* p=new pizza;
	getchar();
	cout<<"INFORME O NOME DA PIZZA: ";
	getline(cin,nome);
	p->setNome(nome);
	cout<<"INFORME O PREÇO DA PIZZA: ";
	cin>>preco;
	p->setPreco(preco);
	cout<<"INFORME O TAMANHO DA PIZZA (P-M-G): ";
	getchar();
	scanf("%c",&tamanho);
	p->setTamanho(tamanho);
	cout<<"INFORME OS INGREDIENTES DA PIZZA: ";
	getchar();
	getline(cin,ing);
	p->setIngredientes(ing);
	cardapio(*p);
}

vector <pizza> vp;
void cardapio(pizza p){
	int tam=vp.size();
	p.setCod(tam);
	vp.push_back(p);
}

void exibir(){
	cab();
	int tam=vp.size();
	for (int i = 0; i < tam; i++)
	{
		cout<<"\nNOME: "<<vp[i].getNome()<<endl;
		cout<<"PREÇO: "<<vp[i].getPreco()<<endl;
		cout<<"TAMANHO: "<<vp[i].getTamanho()<<endl;
		cout<<"INGREDIENTES: "<<vp[i].getIngredientes()<<endl;
		linha();
	}
	getchar();
}