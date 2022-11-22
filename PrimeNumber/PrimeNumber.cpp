#include <assert.h>
#include "PrimeNumber.h"

int main() {
    assert(!isPrimeNumber(-7));
    assert(!isPrimeNumber(0));
    assert(!isPrimeNumber(1));
    assert(isPrimeNumber(2));
    assert(isPrimeNumber(3));
    assert(!isPrimeNumber(9));
    assert(!isPrimeNumber(15));
    assert(!isPrimeNumber(51));
    assert(isPrimeNumber(53));
    assert(isPrimeNumber(97));
    assert(isPrimeNumber(99));
}