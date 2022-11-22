#include <assert.h>
#include "test.h"

int main() {
    assert(!isPrimeNumber(-1));
    assert(!isPrimeNumber(0));
    assert(!isPrimeNumber(1));
    assert(isPrimeNumber(2));
    assert(isPrimeNumber(3));
    assert(!isPrimeNumber(9));
    assert(!isPrimeNumber(15));
    assert(isPrimeNumber(17));
    assert(isPrimeNumber(19));
    assert(!isPrimeNumber(21));


}