#include "ABB.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	ABB* abb = new ABB();
	
	abb->insere(50);
	abb->insere(30);
	abb->insere(70);
	abb->insere(20);
	abb->insere(60);
	abb->insere(90);
	abb->insere(25);
	abb->insere(55);
	abb->insere(68);
	abb->posOrdem();

	delete abb;
	
	return 0;
}