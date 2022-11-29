#include <iostream>
#include <cassert>
#include <math.h>

using namespace std;

int closestToZero(int arr[], int size) {
    int closestToZero = 0;
    for(int i = 0; i < size; i ++) {
        if(abs(arr[closestToZero]) >= abs(arr[i])) {
            if(abs(arr[closestToZero]) == abs(arr[i])) {
                if(arr[closestToZero] < arr[i])
                    closestToZero = i; 
            }
            else {
                closestToZero = i;
            }
        }  
    }
    return arr[closestToZero];
}

main() {
    int arr1[2] = {-2,1};
    assert(closestToZero(arr1, 2) == 1);
    
    return EXIT_SUCCESS;
}