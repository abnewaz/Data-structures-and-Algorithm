#include<bits/stdc++.h>
using namespace std;
//--------- CONSTANT COMPLEXITY---------
/*  Time complexity O(1). no loops and constant numbe of item(operation)
    Memory complexity O(1).
 */
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    int sum = a + b + c;
    int mult = a * b * c;
    cout << "Max = " << maxi << "\nMin = " <<  mini << "\nSum = " << sum << "\nMult = " << mult;
    return 0;
}
/*  ->will take input of 3 num;
    ->print - max, min, mult, sum

 */