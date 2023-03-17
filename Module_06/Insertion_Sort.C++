#include<bits/stdc++.h>
using namespace std;
/* 
Time complexity O(n^2)
Memory complexity O(n)
*/
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 1; i<n; i++)
    {
        int idx = i;
        while(idx >= 1)
        {
            if(v[idx-1] >= v[idx])
            {
                swap(v[idx-1], v[idx]);
                idx--;
            }
            else
                break;
        }
        cout << "Counting index num: ";
        for(int i=0; i<n; i++)
            cout << v[i] << " ";
        cout << "\n";
    }
    cout << "After sorting :\n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    } 
    return 0;
}
/* 
0 + 1 + 2 + ... + n-1
Time complexity O(n^2)
*/