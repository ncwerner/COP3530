/*Insertion Sort algorithm implementation in C++
Author: Nick Werner, University of Florida, COP3530 Spring 2016
Compiled using: g++ InsertionSort.cpp -o InsertionSort
18 January 2016
This program assumes that all inputs will be of the primitive type 'int' and does not handle the case where the input is a floating point number
This implementation of insertion sort will sort in ascending order (0, 1, 2,..., n)
*/

#include<iostream>
using namespace std;

int main(){
  //Read in number of inputs
  int numInputs = 0;

  //Sanitize numInputs
  if(!(cin >> numInputs)){
    cout << "ERROR: Number of inputs must be an 'int'!\n";
    return -1;
  }
  if(numInputs <= 0){
    cout << "ERROR: Number must be greater than 0!\n";
    return -2;
  }

    //Create an array for numbers
  int arr[numInputs];

  //Populate and check array
  for(int i = 0; i < numInputs; i++){
    if(!(cin >> arr[i])){
      cout << "ERROR: Inputs must be of type 'int'\n";
      return -4;
    }
  }

  //Sort array
  //Iterate through entire array grabbing one element at a time
  for(int i = 1; i < numInputs; i++){
    //Compare each entry to the previous one
    //If previous entry is greater, swap the two
    for(int j = i; j > 0 && arr[j-1] > arr[j]; j--){
      //If previous entry is less than current -> swap
      int t = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = t;
    }
  }

  //Print sorted array
  for(int i = 0; i < numInputs; i++)
    cout << arr[i] << endl;
  
  return 1;
}
  

  

  
