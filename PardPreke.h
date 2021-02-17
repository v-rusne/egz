#pragma once
#ifndef PARDPREKE_H
#define PARDPREKE_H

#include "Preke.h"

class PardPreke : public Preke
{
private:
    int kaina;

public:
    PardPreke(){};
    PardPreke(string pav, string ru, int k, int kod, int kain);
    ~PardPreke();
    PardPreke(const PardPreke& pp);
    PardPreke(PardPreke&& pp) : Preke(pp), kaina{ pp.kaina }{};
    PardPreke& operator=(const PardPreke& pp);
    PardPreke& operator=(PardPreke&& pp);

    const string& getPavadinimas(){
        return pavadinimas;
    }
    const string& getRusis(){
        return rusis;
    }
    const int& getKiekis(){
        return kiekis;
    }
    const int& getKodas() {
        return kodas;
    }
    const int& getKaina(){
        return kaina;
    }
    void setKaina(int kain){
        kaina = kain;
    }

};

#endif // PARDPREKE_H

