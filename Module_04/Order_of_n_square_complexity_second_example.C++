#include<bits/stdc++.h>
using namespace std;
/*  
   // N-SQUARE-COMPLEXITY ::
    Time complexity: O(n + (n^2/2) = O(n^2)
    Memory complexity: O(n)         cz of array
    n= num of operation by user;
    1= O(1); 
    variable num of operation dominates constant num 
    of operation.so will take just variable num of operation.
*/
int main()
{
    int n;  
    cin >> n;
    vector <int> a(n); //m: O(n)
    for(int i=0; i<n; i++)  //n
    {
        cin >> a[i];
    }              
    // i=0 --> 1 -- n-1 -> n-1
    // i=1 --> 2 -- n-1 -> n-2
    // i=2 --> 2 -- n-1 -> n-3
    // i=n-1 --> 0
    // n * n = n^2
    for(int i=0; i<n; i++)     //n
    {
        string ans = "NO\n";    //m: O(1) 
        for(int j=i+1; j<n; j++)  // n-->n = n^2
        {
            if(i==j)            //O(1)
            {
                continue;
            }
            if(a[i] == a[j])    //O(1)
            {
                ans = "YES\n";
            }
        } 
             cout << "i = " << i << " " << ans; // O(1)
    }      
    return 0;
}
/*
n
6 4 7 2: check if any of this number occure any other 
            index greater than i of this array;
2 4 6 2  
i= 0, i=3 yes
i= 1, no
i= 2, no
i= 3, no
index = i, any index j, where j>i and a[i] == a[j]
(n-1) + (n-2) + (n-3) + ... +2 +1 +0
((n-1)*n)/2
(n^2 - n)/2
(n^2/2) - (n/2)
*/

