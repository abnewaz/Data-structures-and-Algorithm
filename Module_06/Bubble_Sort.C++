#include <bits/stdc++.h>
using namespace std;
    // Time Complexity: O(n^2)
    // Memory Complexity: O(n)
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // n ta pass
    for (int pass = 0; pass < n; pass++)
    {
        int last = n - 1 - pass;
        bool sorted = true;
        for (int j = 0; j <= last - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                sorted = false;
            }
        }
        if(sorted)          // true
            break;
        cout << "After pass " << pass << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}
/* 
pass = 0, cnt = n-1
pass = 1, cnt = n-2
..
pass = n-1, cnt = 0

sum = ((n-1)*n)/2
O(n^2)

((n-1)*n)/2
n*n
 */