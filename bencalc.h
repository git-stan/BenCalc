#ifndef BENCALC_H
#define BENCALC_H


class bencalc
{
    public:
        bencalc();
        virtual ~bencalc();
        void menu();
        void calc_res();
        void print_result(double ergebnis);
    protected:

    private:
        int method, a, cashflows;
    double arry_cashflows[], ergebnis;
};

#endif // BENCALC_H
