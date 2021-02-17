#pragma once
#ifndef PREKE_H
#define PREKE_H

#include <string>;
#include <iostream>

using std::string;
class Preke
{
public:Preke() {};
       Preke(string pav, string ru, int k, int kod);
       virtual ~Preke() = 0;

    void setPavadinimas(string pav){
        pavadinimas = pav;

    }
    void setRusis(string ru){
        rusis = ru;
    }

    void setKiekis(int k){
        kiekis = k;
    }

    void setKodas(int kod){
        kodas = kod;
    }

protected:
    stringpavadinimas;
    string rusis;
    int kiekis;
    int kodas;

    virtual const string& getPavadinimas() = 0;
    virtual const string& getRusis() = 0;
    virtual const int& getKiekis() = 0;
    virtual const int& getKodas() = 0;

};

#endif // PREKE_H
