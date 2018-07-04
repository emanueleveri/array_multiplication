/*
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int *returnArray(int array[], int nNumbers)
{
  int value=1;
  int *arr = new int[nNumbers];
  for ( int i=0; i< nNumbers; i++)
  {
    for ( int c=0 ; c<nNumbers; c++)
    {
      if( i!=c)
      {
        value *=array[c];
      }
    }
    arr[i]=value;
    value = 1 ;
  }
  return arr;
}
int main()
{
  int nNumbers;
  cout << " How many numbers do you want to insert ? " << endl ;
  cin>>nNumbers;
  int array[nNumbers];
  for ( int i=0; i<nNumbers; i++)
  {
    cin>> array[i];
  }
  int *p = returnArray(array, nNumbers);
  for ( int i=0; i<nNumbers; i++)
    cout << p[i] << endl ;
}
