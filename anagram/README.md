Motivation: 
we need to write a program to generate all potential anagrams of an input string.

Theory: 
Anagram is a word or phrase that is made by arranging the letters of another word or phrase in a different order.

For example, the potential anagrams of "biro" are:

biro bior brio broi boir bori
ibro ibor irbo irob iobr iorb
rbio rboi ribo riob roib robi
obir obri oibr oirb orbi orib


Roadmap: 
1. Anagram function: 
Create a function for anagram. in that we will be taking 3 arguments those will be input string, string index, and last index of the string.
In this we will set a condition for single character string and multiple character string. for multiple character string we will add a loop and inside the loop we will be calling swap functio to swap adjacent characters of the string. then we will call the anagram function and make our function recursive but we will increase the start index by 1. 
Then again we will call the swap function to swap the string character.  

2. Driver code:
In our main funcion we will ask user to give a string for the input. 
We will calculate the length of the string.
Now, we will call our anagram function and will give string, starting and ending index of the string as an argument. 

Result: 
After compiling and running the code we can get the output result. 
the result will include the characters which we have given in a string no extra character will be there in the output.