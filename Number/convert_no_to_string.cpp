// Example 1:
// Input: 7824
// Output: seven thousand eight hundred twenty four
// Explanation: 7824 in words can be written as seven thousand eight hundred twenty four.

#include <bits/stdc++.h>
using namespace std;

void convertnumintoword(string str)
{
  string singledigit[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  string twodigits[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen", "twelve"};
  string tensmultiple[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
  string tenspower[] = {"hundred", "thousand"};
  if (str.length() == 0)
  {
    cout << "" << endl;
    return;
  }
  else if (str.length() == 1)
  {
    cout << singledigit[str[0] - '0'] << endl;
    return;
  }
  int len = str.length();
  for (int i = 0; i < str.length(); i++)
  {
    if (len > 2)
    {
      if (str[i] - '0' != 0)
      {
        cout << singledigit[str[i] - '0'] << " ";
        cout << tenspower[len - 3] << " ";
      }
      len--;
    }
    else
    {
      if (str[i] - '0' == 1)
      {
        cout << twodigits[str[i + 1] - '0'] << " ";
        return;
      }
      else if (str[i] - '0' != 0)
      {
        cout << tensmultiple[str[i] - '0'] << " ";
        if (str[i + 1] - '0' != 0)
          cout << singledigit[str[i + 1] - '0'] << " ";
        return;
      }
    }
  }
}

int main()
{
  string str = "9090";
  convertnumintoword(str);
  return 0;
}
