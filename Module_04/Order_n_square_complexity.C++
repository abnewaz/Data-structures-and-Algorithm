#include<bits/stdc++.h>
using namespace std;
/*  
   // ORDER-OF-N-SQUARE COMPLEXITY::
    Time complexity: O(n + n^2) = O(n^2)
    Memory complexity: O(n)         cz of array
    n= num of operation by user;
    1= O(1); 
    variable num of operation dominates constant num of operation. so
    will take just variable num of operation.
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
    // i=0 --> n
    // i=1 --> n........
    // n * n = n^2
    for(int i=0; i<n; i++)     //n
    {
        string ans = "NO\n";    //m: O(1) cz it will free its memory every time 
        for(int j=0; j<n; j++)  // n-->n = n^2
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
6 4 7 2: check if any of this number occure any other place of this array
2 4 6 2  
i= 0, yes
i= 1, no
i= 2, no
i= 3, yes
*/