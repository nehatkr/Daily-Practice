// Example 1:
// Input: string str = "take12% *&u ^$#forward"
// Output: takeuforward
// Explanation:
// Characters 1,2,%,*,&,^,$,# along with whitespaces are 
// removed but the order of remaining alphabets is preserved.

#include<iostream>
using namespace std;

string removeCharacter(string str , int n){
    string ans;
    for (int i = 0; i < n; i++)
    {
      int ascii = (int) str[i];
      if ((ascii >= 65 && ascii<=90) || (ascii >= 97 && ascii <= 122))
      {
        ans.push_back(str[i]);
      }
      
    }
    return ans;
}

int main(){
    string str = "take12% *&u ^$#forward";
    int n = str.length();
    cout<<"Resultant string"<<endl;
    cout<<removeCharacter(str,n);
    return 0;
}