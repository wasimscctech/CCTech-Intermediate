#include <stdlib.h>
#include <cassert>
#include "FileNameRange.h"
#include <iostream>

int main()
{
    fileNameRange obj1, obj2, obj3, obj4, obj5;
    
    assert(obj1.removeSlashAndDots("src/Hiker_spec.re")=="[4,9]");
    assert(obj2.removeSlashAndDots("wibble/test/hiker_spec.rb")=="[12,17]");
    assert(obj3.removeSlashAndDots("hiker_steps.rb")=="[0,5]");
    assert(obj4.removeSlashAndDots("hiker_spec.rb")=="[0,5]");
    assert(obj5.removeSlashAndDots("tests_hiker.sh")=="[6,11]");

    return EXIT_SUCCESS;
}