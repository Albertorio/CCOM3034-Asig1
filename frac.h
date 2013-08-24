#ifndef FRAC_H
#define FRAC_H

class Fraction{
        private:
        int num, denom;

        public:
        Fraction();
        Fraction(int num, int denom);
        Fraction add(const Fraction& f) const;
        Fraction sub(const Fraction& f) const;
        Fraction mul(const Fraction& f) const;
        Fraction div(const Fraction& f) const;

        Fraction reduce()const;

        bool gt(const Fraction& f) const;

        void setNum(int num);
        void setDenom(int denom);
        int  getNum()const;
        int  getDenom()const;
        void print();
};

//int findGCD(int x, int y);
//void selecSort(int frac[], int SIZE);

class ArrayOfFractions{
        private:
                Fraction A[10];
        public:
                ArrayOfFractions();
                void print();
                void sortAscending();
                Fraction min();
                Fraction max();
                Fraction sum();
};

#endif
