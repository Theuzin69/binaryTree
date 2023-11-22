#pragma once

class No
{
private:
    int chave;
    No* esq;
    No* dir;
public:
    No(int x);
    int getChave();
    void setChave(int x);
    No* getEsq();
    No* getDir();
    void setEsq(No* _esq);
    void setDir(No* _dir);
};