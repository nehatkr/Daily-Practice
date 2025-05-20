// counting frequency of each element of an array
// Example 1:
// Input: arr[] = {10,5,10,15,10,5};
// Output: 10  3
// 	     5  2
//         15  1

#include <iostream>
#include <vector>
using namespace std;

void freqCounter(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; i++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    freqCounter(arr, n);
    return 0;
    
}
