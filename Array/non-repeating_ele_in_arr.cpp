// Problem Statement: Find all the non-repeating elements for a given array. Outputs can be in any order.

// Example 1:
// Input:
//  Nums = [1,2,-1,1,3,1]
// Output:
//  2,-1,3

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void findNonRepeatingElement(vector<int>& nums){
  bool check;
  for (int i = 0; i < nums.size(); i++)
  {
    check = false;
    for (int j = 0; j < nums.size(); j++)
    {
       if(i != j && nums[i] == nums[j]){
        check = true;
        break;
       }
    }
    if(!check) cout<<nums[i]<<" ";
  }
  
}
 int main(){
    vector<int> nums = {1,2,-1,1,3,1};
    cout<<"Non repeating element in the given array:"<<endl;
    findNonRepeatingElement(nums);
    return 0;
 }