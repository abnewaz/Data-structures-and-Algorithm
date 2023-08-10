#include <bits/stdc++.h>
using namespace std;
// it means it is taking a vector as an input
// and providing a vector as an output:
vector<int> merge_sort(vector<int> a)
{
    // base case
    if (a.size() <= 1)
    {
        return a;
    }
    int mid = a.size() / 2;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
    }
    for (int i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);
    // called it recursively
    vector<int> sorted_a; // to store result
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        // if first array index num is equal to it's size:
        if (idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        // if second array index num is equal to it's size
        else if (idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}
int main()
{
    vector<int> a = {5, 3, 7, 1, 8, 9};  //input
    vector<int> ans = merge_sort(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
/* 
Step-1: devides an array in two parts
Step-2: sort them
Step-3: merge or concure them
*/