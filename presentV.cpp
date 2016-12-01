#include "bencalc.h"
#include "presentV.h"
#include "futureV.h"
#include "netpresentV.h"
#include "iostream"
#include "stdio.h"
#include "cmath"

using namespace std;

presentV::presentV()
{
    //ctor
}
void presentV::calc(double k, double t, double r)
{ ergebnis = 0;
    bencalc ben;
    ergebnis = k * (1/pow((1+r),t)); // Present Value
    ben.print_result(ergebnis);
}
presentV::~presentV()
{
    //dtor
}
