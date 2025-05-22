// Problem Statement: Given an unsorted array, find the median of the given array.
// Example 1:
// Input: [2,4,1,3,5]
// Output: 3

#include <bits/stdc++.h>
using namespace std;

void getMedian(int arr[], int n)
{
    sort(arr, arr + n);
    if (n % 2 == 0)
    {
        int ind1 = (n / 2) - 1;
        int ind2 = (n / 2);
        cout << (double)(arr[ind1] + arr[ind2]) / 2;
    }
    else{
        cout<<arr[(n/2)];
    }
}

int main()
{
    int arr[] = {4,7,1,2,5,6};
    int n = 6;
    cout<<"The median of the array is: ";
    getMedian(arr,n);
    return 0;
}