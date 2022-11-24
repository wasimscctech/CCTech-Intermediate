#include <assert.h>
#include "simpleInterest.h"

int main(){
    interest i;
    assert(i.simpleInterest(1000, 5, 1)!=5);
    assert(i.simpleInterest(1000, 5, 1)==50);
    assert(i.simpleInterest(1000, 5, 2)!=10);
    assert(i.simpleInterest(1000, 5, 2)==100);
    assert(i.simpleInterest(1500000, 9, 5)!=10000);
    assert(i.simpleInterest(1500000, 9, 5)==675000);
}