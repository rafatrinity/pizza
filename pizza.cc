#include "menu.cc"
#include <iostream>
#include <clocale>
#include <cctype>
using namespace std;

class pizza
{
	string nome;
	string ingredientes;
	char tamanho;
	double preco;
	int cod;
public:
	pizza();
	/*getNome(){
		return nome;
	}
	setNome(string nome){
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
	getPreco(){
		return preco;
	}
	setPreco(int preco){
		if(preco>0)
			this->preco=preco;
		else
			cout<<"valor inválido";
	}
	getTamanho(){
		return tamanho;
	}
	setTamanho(char tamanho){
		tamanho=toupper(tamanho);
		if(tamanho=='P'||tamanho=='M'||tamanho=='G')
			this->tamanho=tamanho;
	}
	getCod(){
		return cod;
	}
	setCod(int cod){
		this->cod=cod+1000;
	}
	*/
};