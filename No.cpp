#include "No.h"
#include <iostream>
using namespace std;

No::No(int x){
	chave = x;
	esq = NULL;
	dir = NULL;
}
int No::getChave() { return chave; }
void No::setChave(int x) { chave = x; }
No* No::getEsq() { return esq; }
No* No::getDir() { return dir; }
void No::setEsq(No* _esq) { esq = _esq; }
void No::setDir(No* _dir) { dir = _dir; }