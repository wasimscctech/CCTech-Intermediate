#include <stdlib.h>
#include <cassert>
#include "FileNameRange.h"
#include <iostream>

int main()
{
    fileNameRange obj1, obj2, obj3, obj4, obj5, obj6, obj7, obj8, obj9, obj10, obj11, obj12, obj13, obj14, obj15, obj16, obj17, obj18, obj19, obj20, obj21, obj22, obj23, obj24, obj25, obj26, obj27, obj28, obj29, obj30, obj31, obj32, obj33, obj34, obj35, obj36, obj37, obj38, obj39, obj40;
    
    assert(obj1.getFileNameRange("src/Hiker_spec.re")=="[4,9]");
    assert(obj2.getFileNameRange("test/hiker_test.exs")=="[5,10]");
    assert(obj3.getFileNameRange("wibble/test/hiker_spec.rb")=="[12,17]");
    assert(obj4.getFileNameRange("hiker_steps.rb")=="[0,5]");
    assert(obj5.getFileNameRange("hiker_spec.rb")=="[0,5]");
    assert(obj6.getFileNameRange("test_hiker.rb")=="[5,10]");
    assert(obj7.getFileNameRange("test_hiker.py")=="[5,10]");
    assert(obj8.getFileNameRange("test_hiker.sh")=="[5,10]");
    assert(obj9.getFileNameRange("tests_hiker.sh")=="[6,11]");
    assert(obj10.getFileNameRange("test_hiker.coffee")=="[5,10]");
    assert(obj11.getFileNameRange("hiker_spec.coffee")=="[0,5]");
    assert(obj12.getFileNameRange("hikerTest.chpl")=="[0,5]");
    assert(obj13.getFileNameRange("hiker.tests.c")=="[0,5]");
    assert(obj14.getFileNameRange("hiker_tests.c")=="[0,5]");
    assert(obj15.getFileNameRange("hiker_test.c")=="[0,5]");
    assert(obj16.getFileNameRange("hiker_Test.c")=="[0,5]");
    assert(obj17.getFileNameRange("HikerTests.cpp")=="[0,5]");
    assert(obj18.getFileNameRange("hikerTests.cpp")=="[0,5]");
    assert(obj19.getFileNameRange("HikerTest.cs")=="[0,5]");
    assert(obj20.getFileNameRange("HikerTest.java")=="[0,5]");
    assert(obj21.getFileNameRange("DiamondTest.kt")=="[0,7]");
    assert(obj22.getFileNameRange("HikerTest.php")=="[0,5]");
    assert(obj23.getFileNameRange("hikerTest.js")=="[0,5]");
    assert(obj24.getFileNameRange("hiker-test.js")=="[0,5]");
    assert(obj25.getFileNameRange("hiker-spec.js")=="[0,5]");
    assert(obj26.getFileNameRange("hiker.test.js")=="[0,5]");
    assert(obj27.getFileNameRange("hiker.tests.ts")=="[0,5]");
    assert(obj28.getFileNameRange("hiker_tests.erl")=="[0,5]");
    assert(obj29.getFileNameRange("hiker_test.clj")=="[0,5]");
    assert(obj30.getFileNameRange("fizzBuzz_test.d")=="[0,8]");
    assert(obj31.getFileNameRange("hiker_test.go")=="[0,5]");
    assert(obj32.getFileNameRange("hiker.tests.R")=="[0,5]");
    assert(obj33.getFileNameRange("hikertests.swift")=="[0,5]");
    assert(obj34.getFileNameRange("HikerSpec.groovy")=="[0,5]");
    assert(obj35.getFileNameRange("hikerSpec.feature")=="[0,5]");
    assert(obj36.getFileNameRange("hiker.feature")=="[0,5]");

    // assert(obj37.getFileNameRange("hiker.fun")=="[0,5]");
    // assert(obj38.getFileNameRange("hiker.t")=="[0,5]");
    // assert(obj39.getFileNameRange("hiker.plt")=="[0,5]");
    // assert(obj40.getFileNameRange("hiker")=="[0,5]");

    return EXIT_SUCCESS;
}