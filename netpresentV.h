#ifndef NETPRESENTV_H
#define NETPRESENTV_H


class netpresentV
{
    public:
        netpresentV();
        virtual ~netpresentV();
        void calc(int cashflows, double arry_cashflows[], double k, double t, double r);
    protected:

    private:
        double k,r ,t , ergebnis ;
        int cashflows;
};

#endif // NETPRESENTV_H
