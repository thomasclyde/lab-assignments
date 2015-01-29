#include <iostream>
#include "Array.h"
#include <assert.h>
using namespace std;

int main(){
Array testarray;
cout << "Testing array size. Expected 0." << endl;
assert(testarray.size() == 0); //If array is not size 0, program fails.
cout << "Array size is correct... **PASS**" << endl;
cout << "Testing Array.isEmpty(), expected value TRUE or 1: " << endl;
assert(testarray.isEmpty() == 1); //If array is not empty, program fails.
cout << "Array is empty.... **PASS**" << endl;
cout << "All Unit Testing Passed." << endl; //If program reaches this point,
											//all unit testing passed.
}
