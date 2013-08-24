#include <iostream>
#include "frac.h"

using namespace std;

int main(){
        ArrayOfFractions L;

        cout << "Contenido de L: "<< endl;
        L.print();
        cout << endl;


        cout << "Max: ";
        L.max().print();
        cout << " Min: ";
        L.min().print();
        cout << " Sum: ";
        L.sum().print();
        cout << endl << endl;

        L.sortAscending();
        cout << "Contenido de L, luego de ordenado" << endl;
        L.print();


 return 0;
}
