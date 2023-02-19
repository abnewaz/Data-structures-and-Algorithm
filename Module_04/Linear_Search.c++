#include<bits/stdc++.h>
using namespace std;
/* 
Time complexity = O(n)      cz there is only n size memory
Memory complexity = O(n)
*/
int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; 
    }
    for (int i = 0; i < n; i++)
    {
        if(v[i] == k)
        {
            //cout << "YES\n";
            cout << i << "\n";
            //return 0; //"return 0" will stop the program...
                    //...after getting the value of k, 
                    //... otherwise the code will check all
            //break;
        } 
    }
    return 0;
}
/* 
input: 
7 5
2 4 5 7 5 3 2
output: 
 */