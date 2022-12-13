#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void anagram(char* str, int start, int end) {
    int i;
    if(start == end) {
        printf("%s\n", str);
    }
    else {
        for(i = start; i <= end; i++) {
            swap((str+start), (str+i));
            anagram(str, start+1, end);
            swap((str+start), (str+i));
        }
    }
}

int main() {
    char string[] = "abc";
    // cout<<"Enter a string to get the anagram: "<<endl;
    // cin>>string;
    // cout<<string;
    int n = strlen(string);
    anagram(string, 0, n - 1);
    return EXIT_SUCCESS;
}