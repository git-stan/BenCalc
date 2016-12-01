#ifndef FUTUREV_H
#define FUTUREV_H


class futureV
{
    public:
        futureV();
        virtual ~futureV();
        void calc(double k, double t, double r);
    protected:

    private:
        double ergebnis, k, r, t;
};

#endif // FUTUREV_H
