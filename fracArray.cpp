#include <iostream>
#include "frac.h"
#include <cstdlib>
#include <time.h>

using namespace std;

Fraction::Fraction(){
        num = 0;
        denom = 1;

}

Fraction::Fraction(int n, int d){
        num = n;
        denom = d;
}

void Fraction::setNum(int n) {
        num = n;
}

void Fraction::setDenom(int d){
        denom = d;
}

int Fraction::getNum()const{
        return num;
}

int Fraction::getDenom()const{
        return denom;
}

Fraction Fraction::add(const Fraction& F) const{
        Fraction r;
                if(denom==F.denom){
                        r.num = num + F.num;
                        r.denom = denom;
                }else{
                        r.num=(num*F.denom) + (F.num*denom);
                        r.denom = denom*F.denom;
                }
                return r;
        }


ArrayOfFractions::ArrayOfFractions(){
        srand((unsigned)time(NULL));
        for(int i=0;i<=10;i++){
         A[i].setNum(rand() % 9 +1);
         A[i].setDenom(rand() %9 +1);
        }
}

void Fraction::print(){
       cout <<"("<< num <<"/"<<denom<<")";
       //cout << denom << endl;
}


void ArrayOfFractions::print(){
        for(int i =0; i <= 10;i++){
                cout << A[i].getNum()<< "/" << A[i].getDenom() <<endl;
        }
}

bool Fraction::gt(const Fraction& F) const{

    if((F.num*denom) <= (num*F.denom))
        return true;
    else
        return false;

}

void ArrayOfFractions::sortAscending(){
        int maxIndex;
        int conta= 0;

        maxIndex = conta;
        do{
                for(int i=conta+1; i<10;i++){
                        if(!A[i].gt(A[maxIndex])){
                                maxIndex= i;
                        }
                swap(A[conta], A[maxIndex]);
                }
 conta++;
        }while(conta < 10);
}

Fraction ArrayOfFractions::min(){
Fraction min;

    int maxIndex;
        int conta= 0;

        maxIndex = conta;
        do{
                for(int i=conta+1; i<10;i++){
                        if(!A[i].gt(A[maxIndex])){
                                maxIndex= i;
                        }
                swap(A[conta], A[maxIndex]);
                }
        conta++;
        }while(conta < 10);

        min = A[0];
        return min;
}

Fraction ArrayOfFractions::max(){
Fraction max;

    int maxIndex;
        int conta= 0;

        maxIndex = conta;
        do{
                for(int i=conta+1; i<10;i++){
                        if(!A[i].gt(A[maxIndex])){
                                maxIndex= i;
                        }
                swap(A[conta], A[maxIndex]);
                }
        conta++;
        }while(conta < 10);

        max=A[9];
        return max;
}

Fraction ArrayOfFractions::sum(){
Fraction r;

        for(int i=0;i<10;i++){
                r= r.add(A[i]);
        }
return r;

}
