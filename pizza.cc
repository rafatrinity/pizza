#include "sis.h"
#include <bits/stdc++.h>
using namespace std;

class pizza{
	string nome;
	string ingredientes;
	char tamanho;
	double preco;
	int cod;

protected:
	//setters
	void setNome(string nome){
		int tam=nome.size();
		for (int i = 0; i < tam; i++)
			nome[i]=toupper(nome[i]);
		this->nome=nome;
	}

	void setPreco(int preco){
		if(preco>0)
			this->preco=preco;
		else
			cout<<"valor inválido";
	}

	void setTamanho(char tamanho){
		tamanho=toupper(tamanho);
		if(tamanho=='P'||tamanho=='M'||tamanho=='G')
			this->tamanho=tamanho;
		else
			cout<<"valor inválido";
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

public:
	pizza(string nome, double preco, char tam, string ing){
		setNome(nome);
		setPreco(preco);
		setTamanho(tam);
		setIngredientes(ing);
	};

	//getters
	string getNome(){
		return nome;
	}
	

	double getPreco(){
		return preco;
	}
	

	char getTamanho(){
		return tamanho;
	}
	

	string getIngredientes(){
		return ingredientes;
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
	getchar();
	cout<<"INFORME O NOME DA PIZZA: ";
	getline(cin,nome);
	cout<<"INFORME O PREÇO DA PIZZA: ";
	cin>>preco;
	cout<<"INFORME O TAMANHO DA PIZZA (P-M-G): ";
	getchar();
	scanf("%c",&tamanho);
	cout<<"INFORME OS INGREDIENTES DA PIZZA: ";
	getchar();
	getline(cin,ing);
	pizza* p=new pizza(nome,preco,tamanho,ing);
	cardapio(*p);
}

vector <pizza> vp;


void cardapio(pizza p){
	int tam=vp.size();
	p.setCod(tam);
	vp.push_back(p);
}


//funcoes que serao passadas como terceiro parametro, para modificar o sort
bool ordenarPorNomeCrescente(pizza &a, pizza &b){
	return a.getNome() < b.getNome();
}

//basta inverter o sinal que fica decrescente
bool ordenarPorNomeDecrescente(pizza &a, pizza &b){
	return a.getNome() > b.getNome();
}

bool ordenarPorPrecoDecrescente(pizza &a, pizza &b){
	return a.getPreco() > b.getPreco();
}

bool ordenarPorCodDecrescente(pizza &a, pizza &b){
	return a.getCod() > b.getCod();
}


void exibir(int n){
	cab();
	switch(n){
		case 1:
		sort(vp.begin(), vp.end(), ordenarPorNomeCrescente);
		for(auto i : vp){
			cout<<"\nNOME: "<<i.getNome()<<endl;
			cout<<"PREÇO: "<<i.getPreco()<<endl;
			cout<<"CÓDIGO: "<<i.getCod()<<endl;
			cout<<"TAMANHO: "<<i.getTamanho()<<endl;
			cout<<"INGREDIENTES: "<<i.getIngredientes()<<endl;
			linha();
		}
		getchar();
		break;
		case 2:
		sort(vp.begin(), vp.end(), ordenarPorPrecoDecrescente);
		for(auto i : vp){
			cout<<"\nNOME: "<<i.getNome()<<endl;
			cout<<"PREÇO: "<<i.getPreco()<<endl;
			cout<<"CÓDIGO: "<<i.getCod()<<endl;
			cout<<"TAMANHO: "<<i.getTamanho()<<endl;
			cout<<"INGREDIENTES: "<<i.getIngredientes()<<endl;
			linha();
		}
		getchar();
		break;
		case 3:
		sort(vp.begin(), vp.end(), ordenarPorCodDecrescente);
		for(auto i : vp){
			cout<<"\nNOME: "<<i.getNome()<<endl;
			cout<<"PREÇO: "<<i.getPreco()<<endl;
			cout<<"CÓDIGO: "<<i.getCod()<<endl;
			cout<<"TAMANHO: "<<i.getTamanho()<<endl;
			cout<<"INGREDIENTES: "<<i.getIngredientes()<<endl;
			linha();
		}
		getchar();
		break;	

		default:
		cout<<"VALOR INVALIDO!\n";	
	}
	getchar();
}