#pragma once
#include "ABB.h"
#include <iostream>
using namespace std;

//private
void ABB::emOrdem(No* r) {
	if (r->getEsq())
		emOrdem(r->getEsq());
	cout << r->getChave()<<endl;
	if (r->getDir())
		emOrdem(r->getDir());
}
void ABB::preOrdem(No* r) {
	cout << r->getChave()<<endl;
	if (r->getEsq())
		preOrdem(r->getEsq());
	if (r->getDir())
		preOrdem(r->getDir());
}
void ABB::posOrdem(No* r) {
	if (r->getEsq())
		posOrdem(r->getEsq());
	if (r->getDir())
		posOrdem(r->getDir());
	cout << r->getChave()<<endl;
}
void ABB::apagaArvore(No* r) {
	if (r->getEsq())
		apagaArvore(r->getEsq());
	if (r->getDir())
		apagaArvore(r->getDir());
	delete r;
}
//public
ABB::ABB() { raiz = NULL; }
bool ABB::vazia() { return raiz == NULL; }
bool ABB::busca(int x) {
	No* aux = raiz;
	bool achou = false;
	while (aux && !achou) {
		if (x == aux->getChave())
			achou = true;
		else if (x < aux->getChave())
			aux = aux->getEsq();
		else aux = aux->getDir();
	}
	return achou;
}
void ABB::insere(int x) {
	No* novoNo = new No(x);
	if (vazia()) {
		raiz = novoNo;
	}
	else {
		No* aux = raiz;
		bool inseriu = false;
		
		while (!inseriu) {
			if (aux->getChave() > novoNo->getChave())
				if (!aux->getEsq()) {
					aux->setEsq(novoNo);
					inseriu = true;
				}
				else
					aux = aux->getEsq();
			else if (!aux->getDir()) {
				aux->setDir(novoNo);
				inseriu = true;
			}
			else
				aux = aux->getDir();
		}
	}
}
void ABB::emOrdem() {
	if (!vazia()) {
		if (raiz->getEsq())
			emOrdem(raiz->getEsq());
		cout << raiz->getChave() << endl;
		if (raiz->getDir())
			emOrdem(raiz->getDir());
	}
}
void ABB::preOrdem() {
	if (!vazia()) {
		cout << raiz->getChave()<<endl;
		if (raiz->getEsq())
			preOrdem(raiz->getEsq());
		if (raiz->getDir())
			preOrdem(raiz->getDir());
	}
}
void ABB::posOrdem() {
	if (!vazia()) {
		if (raiz->getEsq())
			posOrdem(raiz->getEsq());
		if (raiz->getDir())
			posOrdem(raiz->getDir());
		cout << raiz->getChave()<<endl;
	}
}
ABB::~ABB() {
	if (raiz->getEsq())
		apagaArvore(raiz->getEsq());
	if (raiz->getDir())
		apagaArvore(raiz->getDir());
	delete raiz;
}
