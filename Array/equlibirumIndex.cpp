//  Finding Equilibrium index in an array
// Example 1:
// Input: nums = [2,3,-1,8,4]
// Output: 3
// Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
// The sum of the numbers after index 3 is: 4 = 4

#include <iostream>
using namespace std;
int findEquilibriumIdx(int nums[], int n) {
  int leftSum, rightSum;
 
  for (int i = 0; i < n; i++) {
    leftSum = 0;
    for (int j = 0; j < i; j++) {
      leftSum += nums[j];
    }
    rightSum = 0;
    for (int j = i + 1; j < n; j++) {
      rightSum += nums[j];
    }
    if (leftSum == rightSum) {
      return i;
    }
  }
  return -1;
}
int main() {
  int n = 5;
  int arr[] = { 2, 3, -1, 8, 4 };
  int equilibriumidx = findEquilibriumIdx(arr, n);
  cout << equilibriumidx << endl;
  return 0;
}
