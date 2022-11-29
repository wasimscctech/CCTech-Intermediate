# Objective

To perform a Golden master testing on unix 'head' command.

# Test cases

1. When no arguments provided, then it read the inputs from terminal (stdin) and print them right away, untill EOF is read by the program, then it will exit without any new line.

Single argument

When single argument is provided, then check if it Directory of fileName.

2. If an argument is directory, then print out 
head: error reading 'directory_name': Is a directory

3. If file is present, Print contents of file to terminal from top to bottom, 

4. If file is absent, then show error msg in terminal. 
head: cannot open 'wasim.cpp' for reading: No such file or directory

Multiple arguments

5. When multiple arguments are provided, then print the contents of file in a sequence. 
e.g 
==> anagram.cpp <==
#include <iostream>
#include <stdlib.h>
#include <string>

==> anagrams.cpp <==
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

Note: Here we are printing out 3 lines from each file and and the header is there with the file_name.extension and both the contents are separated by a new line. 

6. if file is missing, then throw an error for the file which is not present

7. When one of the argument is a directory, show msg "cat: DirectoryName/: Is a directory" in the sequence.