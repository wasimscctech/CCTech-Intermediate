#include <cassert>
#include "leapYear.h"

int main()
{
    assert(!isLeapYear(2001));
    assert(isLeapYear(2016));
    assert(isLeapYear(2000));
    assert(!isLeapYear(1000));
    assert(isLeapYear(2400));
    assert(!isLeapYear(2401));
}