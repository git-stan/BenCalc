#ifndef PRESENTV_H
#define PRESENTV_H


class presentV
{
    public:
        presentV();
        virtual ~presentV();
        void calc(double k,double t,double r);
    protected:

    private:
        double k, t, r, ergebnis;
};

#endif // PRESENTV_H
