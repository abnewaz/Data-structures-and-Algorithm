#include<bits/stdc++.h>
using namespace std;
void get_input(int n, vector <int> &vec)
{
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
}
void get_output(int n, vector <int> &vec)
{
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    get_input(n,v);    
    sort(v.begin(), v.end());
    get_output(n, v);
    int low = 0, high = n-1;
    bool flag = 0;
    while (low <= high)
    {
        int mid = (low + high)/2;
        cout << "\nLow = " << low << " High = " 
            << high << " mid = " << mid << " ";
        if(v[mid] == k)
        {
            cout << "\nYES " << mid << "\n";
            flag = 1;
            break;
        }
        if(v[mid] > k)
        {
            high = mid -1;
        }
        else //if(a[mid] < k)
        {
            low = mid +1;
        }
    }
    if(flag == 0)
    {
        cout << "\nNO \n";
    }
    return 0;
}
/* 
input:
n = length of array
k = search element 
7 9
1 3 5 6 8 9 10
10 10
2 4 6 7 8 9 10 11 14 18
*/
/* 
input: 
n - length array
q - query
k - YES/NO and index
*/