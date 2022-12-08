#include <stdlib.h>
#include <cassert>
#include "FileNameRange.h"
#include <iostream>

int main()
{
    fileNameRange obj1, obj2, obj3, obj4, obj5, obj6, obj7, obj8, obj9, obj10, obj11, obj12, obj13, obj14, obj15, obj16, obj17, obj18, obj19, obj20, obj21, obj22, obj23, obj24, obj25, obj26, obj27, obj28, obj29, obj30, obj31, obj32, obj33, obj34, obj35, obj36, obj37, obj38, obj39, obj40;
    
    assert(obj1.removeSlashAndDots("src/Hiker_spec.re")=="[4,9]");
    assert(obj2.removeSlashAndDots("test/hiker_test.exs")=="[5,10]");
    assert(obj3.removeSlashAndDots("wibble/test/hiker_spec.rb")=="[12,17]");
    assert(obj4.removeSlashAndDots("hiker_steps.rb")=="[0,5]");
    assert(obj5.removeSlashAndDots("hiker_spec.rb")=="[0,5]");
    assert(obj6.removeSlashAndDots("test_hiker.rb")=="[5,10]");
    assert(obj7.removeSlashAndDots("test_hiker.py")=="[5,10]");
    assert(obj8.removeSlashAndDots("test_hiker.sh")=="[5,10]");
    assert(obj9.removeSlashAndDots("tests_hiker.sh")=="[6,11]");
    assert(obj10.removeSlashAndDots("test_hiker.coffee")=="[5,10]");
    assert(obj11.removeSlashAndDots("hiker_spec.coffee")=="[0,5]");
    assert(obj12.removeSlashAndDots("hikerTest.chpl")=="[0,5]");
    assert(obj13.removeSlashAndDots("hiker.tests.c")=="[0,5]");
    assert(obj14.removeSlashAndDots("hiker_tests.c")=="[0,5]");
    assert(obj15.removeSlashAndDots("hiker_test.c")=="[0,5]");
    assert(obj16.removeSlashAndDots("hiker_Test.c")=="[0,5]");
    assert(obj17.removeSlashAndDots("HikerTests.cpp")=="[0,5]");
    assert(obj18.removeSlashAndDots("hikerTests.cpp")=="[0,5]");
    assert(obj19.removeSlashAndDots("HikerTest.cs")=="[0,5]");
    assert(obj20.removeSlashAndDots("HikerTest.java")=="[0,5]");
    assert(obj21.removeSlashAndDots("DiamondTest.kt")=="[0,7]");
    assert(obj22.removeSlashAndDots("HikerTest.php")=="[0,5]");
    assert(obj23.removeSlashAndDots("hikerTest.js")=="[0,5]");
    assert(obj24.removeSlashAndDots("hiker-test.js")=="[0,5]");
    assert(obj25.removeSlashAndDots("hiker-spec.js")=="[0,5]");
    assert(obj26.removeSlashAndDots("hiker.test.js")=="[0,5]");
    assert(obj27.removeSlashAndDots("hiker.tests.ts")=="[0,5]");
    assert(obj28.removeSlashAndDots("hiker_tests.erl")=="[0,5]");
    assert(obj29.removeSlashAndDots("hiker_test.clj")=="[0,5]");
    assert(obj30.removeSlashAndDots("fizzBuzz_test.d")=="[0,8]");
    assert(obj31.removeSlashAndDots("hiker_test.go")=="[0,5]");
    assert(obj32.removeSlashAndDots("hiker.tests.R")=="[0,5]");
    assert(obj33.removeSlashAndDots("hikertests.swift")=="[0,5]");
    assert(obj34.removeSlashAndDots("HikerSpec.groovy")=="[0,5]");
    assert(obj35.removeSlashAndDots("hikerSpec.feature")=="[0,5]");
    assert(obj36.removeSlashAndDots("hiker.feature")=="[0,5]");

    // assert(obj37.removeSlashAndDots("hiker.fun")=="[0,5]");
    // assert(obj38.removeSlashAndDots("hiker.t")=="[0,5]");
    // assert(obj39.removeSlashAndDots("hiker.plt")=="[0,5]");
    // assert(obj40.removeSlashAndDots("hiker")=="[0,5]");

    return EXIT_SUCCESS;
}