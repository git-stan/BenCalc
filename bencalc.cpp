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
     cout << "Do you want to calculate Present Value[1] or Future Value[2] or Net Present Value[3] ? ";
     cin  >> method;

            cout << "Value(in Euro): ";
            cin >> k;

            cout << "\nNumber of Periods: ";
            cin >> t;

            cout << "\nInterest rate(% per period): ";
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

    switch(method) //switch for the methode
    {
        case 1:  pV.calc(k,t,r); // call present value calc function
                 break;

        case 2:  fV.calc(k,t,r); //call future value calc function
                 break;

        case 3: cout << "Number of cashflows: "; //ask for the cashflows 
                cin >> cashflows;                   //size of the array
                cout << "Your Cashflows.\n"; 
                for (int a = 0; a < cashflows;a++) {

                    cout << "cashflow :"; //type in yor cashflows
                    cin  >> arry_cashflows[a];

                }
                nPV.calc(cashflows, arry_cashflows,k,t,r); //call net present value calc function
    }
}
void bencalc::print_result(double ergebnis)
{
    const char * format = "%.2f";
    cout.precision(15);
            cout << "\nYour Value is: ";
            printf(format, ergebnis);
            cout << " Euro\n";
}
bencalc::~bencalc()
{
    //dtor
}
