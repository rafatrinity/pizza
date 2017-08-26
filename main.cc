#include "sis.h"
#include "menu.cc"
#include "busca.h"
#include <iostream>
//0.0.1
using namespace std;
int main(int argc, char const *argv[])
{
	apresenta();
	while(1>0){
		switch(menu()){
			case 1:
			add();
			break;
			case 2:
			break;
			case 3:
			menuExibir();
			break;
			case 4:
			menuPesquisar();
			break;
			case 0:
			fim();
			return 0;
			break;
		}
	}
}
