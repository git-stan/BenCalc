#include "bencalc.h"
#include "presentV.h"
#include "futureV.h"
#include "netpresentV.h"
#include "iostream"
#include "stdio.h"
#include "cmath"


using namespace std;

futureV::futureV()
{
    //ctor
}
void futureV::calc(double k, double t, double r)
{
    bencalc ben;
    ergebnis = k * pow((1+r),t); // Future Value
    ben.print_result(ergebnis);
}
futureV::~futureV()
{
    //dtor
}
