#include "bencalc.h"
#include "presentV.h"
#include "futureV.h"
#include "netpresentV.h"
#include "iostream"
#include "stdio.h"
#include "cmath"


using namespace std;

int method = 1;
double k = 0, t=0,r=0;

bencalc::bencalc()
{
    //ctor
}
void bencalc::menu()
{

     cout << "Hey Benny!\n";
     cout << "Willst du Present Value[1] oder Future Value[2] oder Net Present Value[3] berechnen ? ";
     cin  >> method;
    // if(method != 1 && method != 2 && method != 3){throw 1;}

            cout << "Gib hier deinen Betrag ein(in Euro): ";
            cin >> k;

            cout << "\nDanke und jetzt die Laufzeit(Number of Periods): ";
            cin >> t;

            cout << "\nUnd zu letzt den Zinssatz(Interest rate(% per period)): ";
            cin >> r;
}
void bencalc::calc_res()
{
    int cashflows = 1;
    double arry_cashflows[cashflows], ergebnis;
    presentV pV;
    futureV fV;
    netpresentV nPV;

            r /= 100;

    switch(method)
    {
        case 1:  pV.calc(k,t,r);
                 break;

        case 2:  fV.calc(k,t,r);
                 break;

        case 3: cout << "Number of cashflows?: ";
                cin >> cashflows;
                cout << "Gib hier deine Cashflows ein.\n";
                for(int a = 0; a < cashflows;a++){

                    cout << "cashflow :";
                    cin  >> arry_cashflows[a];

                }
                nPV.calc(cashflows, arry_cashflows,k,t,r);
    }
}
void bencalc::print_result(double ergebnis)
{
    const char * format = "%.2f";
    cout.precision(15);
            cout << "\nDer Barwert betraegt: ";
            printf(format, ergebnis);
            cout << " Euro\n";
}
bencalc::~bencalc()
{
    //dtor
}
