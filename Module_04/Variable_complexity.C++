#include<bits/stdc++.h>
using namespace std;
// ----------------ORDERN - N/ VARIABLE COMPLEXITY-------------
/*  
    //VARIABLE number of operation
    Time complexity: O(n+1+n+1) = O(2*n + 1) = O(2*n) =O(c*n) = O(n)
    Memory complexity: O(n+1) = O(n)
    n= num of operation by user;
    1= O(1); 
    variable num of operation dominates constant num of operation. so
    will take just variable num of operation.
*/
int main()
{
    int n;  //m: O(1)
    cin >> n;
    /* vector <int> a;  //m: O(n)
    a.resize(n); */
    vector <int> a(n); // == vector <int> a; a.resize(n);
    for(int i=0; i<n; i++)      // loop with user input + n
    {
        cin >> a[i];
    }
    int maxi = a[0];            //O(1) + 1
    int mini = a[0];            //O(1) + 1
    int sum = 0;                //O(1) + 1
    for(int i=0; i<n; i++)      // loop with user input + n
    {
        maxi = max(maxi, a[i]); //O(1)
        mini = min(mini, a[i]); //O(1)
        sum = sum + a[i];       //O(1)
    }
    cout << "Max = " << maxi << "\nMin = " <<  mini << "\nSum = " << sum; //O(1) +1
    return 0;
}
/*
n
max
min
sum
*/