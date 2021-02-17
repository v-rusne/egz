#include "PardPreke.h"
using std::string;
PardPreke::PardPreke(string pav, string ru, int k, int kod, int kain):Preke(pav, ru, k, kod){
    kaina=kain;
}

PardPreke::~PardPreke(){}
PardPreke::PardPreke(const PardPreke& pp):Preke(pp),kaina(pp.kaina){}

PardPreke& PardPreke::operator=(const PardPreke& pp){
    Preke::operator=(pp);
    kaina=pp.kaina;
    return *this;
}

PardPreke& PardPreke::operator=(PardPreke&& pp){}
