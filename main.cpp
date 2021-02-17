#include <iostream>
#include <iomanip>

#include "PardPreke.h"

using namespace std;
using std::endl;


int main()
{
    PardPreke P1("Plastikas", "Sintetinė", 12, 1001, 2);
    PardPreke P2("Medis", "Natūrali", 3, 2001, 5);
    PardPreke P3("Metalas", "Natūrali", 20, 2002, 4);
    PardPreke P4("Betonas", "Natūrali", 4, 2003, 1);
    PardPreke P5("Stiklas", "Sintetinė", 10, 1002, 6);

    cout<<"Pavadinimas"<<"  "<<"Rūšis"<<"  "<<"Kiekis"<<"Kodas"<<"Kaina"<< endl;
    cout<<P1.getPavadinimas()<<"  " <<P1.getRusis()<<"  "<<P1.getKiekis()<<"  " <<P1.getKodas()<<"  " <<P1.getKaina()<<endl;
    cout << P2.getPavadinimas() << "  " << P2.getRusis() << "  " << P2.getKiekis() << "  " << P2.getKodas() << "  " << P2.getKaina() << endl;
    cout << P3.getPavadinimas() << "  " << P3.getRusis() << "  " << P3.getKiekis() << "  " << P3.getKodas() << "  " << P3.getKaina() << endl;
    cout << P4.getPavadinimas() << "  " << P4.getRusis() << "  " << P4.getKiekis() << "  " << P4.getKodas() << "  " << P4.getKaina() << endl;
    cout << P5.getPavadinimas() << "  " << P5.getRusis() << "  " << P5.getKiekis() << "  " << P5.getKodas() << "  " << P5.getKaina() << endl;
}
