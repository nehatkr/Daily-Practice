// Problem Statement: Given an array of n size, rotate the array by k elements using the Block Swap Algorithm.

// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5} K=2
// Output: {3,4,5,1,2}
// Explanation: Rotate the array to right by 2 elements.

#include <iostream>
using namespace std;
void swap(int arr[], int a, int b, int k)
{
  for (int i = 0; i < k; i++)
  {
    int temp = arr[a + i];
    arr[a + i] = arr[b + i];
    arr[b + i] = temp;
  }
}
void BlockSwap(int arr[], int k, int n)
{
  if (k == 0 || k == n)
    return;
  // If first part and second part are of same size
  if (k == n - k)
  {
    swap(arr, 0, n - k, k);
    return;
  }
  // If first part of array is of smaller size
  else if (k < n - k)
  {
    swap(arr, 0, n - k, k);
    BlockSwap(arr, k, n - k); // second part of array is taken now
  }
  // If second part of array is of smaller size
  else
  {
    swap(arr, 0, k, n - k);
    BlockSwap(arr + n - k, 2 * k - n, k);
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  BlockSwap(arr, k, n);
  cout << "After Rotating the array " << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}
