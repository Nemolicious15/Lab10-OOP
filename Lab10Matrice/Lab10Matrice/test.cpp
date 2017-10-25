#include "test.h"
#include "pixel.h"
#include "imagine.h"
#include "pixelalb-negru.h"
#include "pixelgri.h"
#include "pixelrgb.h"
#include <assert.h>
#include <iostream>
using namespace std;
void test() {
    Imagine<Albnegru> i(10,1);
    assert(i.getrand()==10);
    assert(i.getcol()==1);
    Imagine<Rgb> i1(1,10);
    assert(i1.getrand()==1);
    assert(i1.getcol()==10);
    cout<< "teste imagine"<<endl;
}
