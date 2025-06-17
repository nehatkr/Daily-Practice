// Write a program to find whether an array is a subset of another array or not.
// Example 1:
// Input: arr1[]= [1,3,4,5,2]
//        arr2[]= [2,4,3,1,7,5,15]
// Output: arr1[] is a subset of arr2[]

// Given arr1[] and arr2[], we need to find whether arr1[] is a subset of arr2[].
//  An array is called a subset of another if all of its elements are present in the other array.

#include <bits/stdc++.h>
using namespace std;

bool bSearch(int elem, int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        int mid= (start+end)/2;
        if(arr[mid]==elem)
            return true;
        else if(arr[mid]<elem)
            start = mid+1;
        else end= mid-1;
    }
    return false;
}

bool isSubset(int arr1[], int m, int arr2[], int n){
    
    sort(arr2,arr2+n); // library function to sort the array
    
    if(m>n) return false;
    for(int i=0; i<m; i++){
        
	    bool present= bSearch(arr1[i],arr2,n);
	    if(present==false) return false;
	}
	return true;
}


int main() {
	// your code goes here
	int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans= isSubset(arr1,m,arr2,n);
	
	if(ans==true)
	    cout<<"arr1[] is a subset of arr2[]";
	else cout<<"arr1[] is not a subset of arr2[]";
	
	return 0;
}

