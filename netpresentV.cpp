#include "bencalc.h"
#include "presentV.h"
#include "futureV.h"
#include "netpresentV.h"
#include "iostream"
#include "stdio.h"
#include "cmath"


using namespace std;

netpresentV::netpresentV()
{

    //ctor
}
void netpresentV::calc(int cashflows, double arry_cashflows[], double k, double t, double r)
{ ergebnis = 0;
  bencalc ben;

    for(int a = 0; a < cashflows; a++)
    {

        ergebnis  =  arry_cashflows[a]/pow((1+r),a+1);
        cout << ergebnis << endl;
    }
    cout << "PV of Expected Cash flows: " << ergebnis;
    ergebnis -= k;
    ben.print_result(ergebnis);
}
netpresentV::~netpresentV()
{
    //dtor
}
