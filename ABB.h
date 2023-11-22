#pragma once
#include "No.h"

class ABB {
private:
	No* raiz;
	void emOrdem(No* r);
	void preOrdem(No* r);
	void posOrdem(No* r);
	void apagaArvore(No* r);
public:
	ABB();
	bool vazia();
	bool busca(int x);
	void insere(int x);
	void emOrdem();
	void preOrdem();
	void posOrdem();
	~ABB();
};
