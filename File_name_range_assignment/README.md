Motivation:

Our task is to write a function that is given a string filename
and which returns a pair of integers specifying the start and
end indexes (into the filename) of the selected range.

Test Cases: 
1. The function assumes we will want to keep the extension.
e.g
   "hiker.cpp" ==> "hiker" is selected.
   "diamond.h" ==> "diamond" is selected.

2. If the filename includes the word "tests", "test", "spec", or
"step" (case insensitive) it assumes we will want to keep those too,
together with any 'separator' characters (dot, underscore, hyphen).
e.g
   "HikerTest.js"  ==> "Hiker" is selected.
   "Diamond_Spec.feature" => "Diamond" is selected.
   "fizz.buzz-tests.js" => "fizz.buzz" is selected.

3. If the filename is in a dir/
it assumes we will also want to keep that.
e.g
   "test/FizzBuzz_test.exs" => "FizzBuzz" is selected.
   "src/test/Roman.spec.re" => "Roman" is selected.

Here is a JSON data structure we can use in your tests.
 
{
  "src/Hiker_spec.re": [4,9],
  "test/hiker_test.exs": [5,10],
  "wibble/test/hiker_spec.rb": [12,17],
  "hiker_steps.rb": [0,5],
  "hiker_spec.rb": [0,5],
  "test_hiker.rb": [5,10],
  "test_hiker.py": [5,10],
  "test_hiker.sh": [5,10],
  "tests_hiker.sh": [6,11],
  "test_hiker.coffee": [5,10],
  "hiker_spec.coffee": [0,5],
  "hikerTest.chpl": [0,5],
  "hiker.tests.c": [0,5],
  "hiker_tests.c": [0,5],
  "hiker_test.c": [0,5],
  "hiker_Test.c": [0,5],
  "HikerTests.cpp": [0,5],
  "hikerTests.cpp": [0,5],
  "HikerTest.cs": [0,5],
  "HikerTest.java": [0,5],
  "DiamondTest.kt": [0,7],
  "HikerTest.php": [0,5],
  "hikerTest.js": [0,5],
  "hiker-test.js": [0,5],
  "hiker-spec.js": [0,5],
  "hiker.test.js": [0,5],
  "hiker.tests.ts": [0,5],
  "hiker_tests.erl": [0,5],
  "hiker_test.clj": [0,5],
  "fizzBuzz_test.d": [0,8],
  "hiker_test.go": [0,5],
  "hiker.tests.R": [0,5],
  "hikertests.swift": [0,5],
  "HikerSpec.groovy": [0,5],
  "hikerSpec.feature": [0,5],
  "hiker.feature": [0,5],
  "hiker.fun": [0,5],
  "hiker.t": [0,5],
  "hiker.plt": [0,5],
  "hiker": [0,5],
};
