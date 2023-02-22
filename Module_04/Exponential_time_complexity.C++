#include<bits/stdc++.h>
using namespace std;
/* 
Time complexity = O(2^n)
Memory complexity = O(n)
 --------if ans saved------------
Time complexity = O(n)
Memory complexity = O(n)
*///___________________Fibonacci number(recursion)____________________
int called =0;
int save[100]; //used to ignore repetation of same task and...
                //...100 is the number of max user input value
int func_fibonacci(int n)
{
    
    if(n == 0) 
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (save[n] != 0)
    {
        return save[n];
    }
    called +=2;
    save[n] = (func_fibonacci(n-2)  + func_fibonacci(n-1));
    return (func_fibonacci(n-2)  + func_fibonacci(n-1));
    }
int main()
{
    int n, res;
    cin >> n;

    cout << "Fib: " << func_fibonacci(n) << "\n";
    cout <<"called: " << called << "\n";    
    return 0;
}
/* 
input: n
output: n-th fibonacci number
F[0] = 0;
F[1] = 1;
F[2] = F[2-1] + F[2-2] = F[1] + F[0] = 1 + 0 = 1;
F[3] = F[3-1] + F[3-2] = F[2] + F[1] = 1 + 1 = 2;
F[4] = F[4-1] + F[4-2] = F[3] + F[2] = 2 + 1 = 3;
F[5] = F[5-1] + F[5-2] = F[4] + F[3] = 3 + 2 = 5;
.
.
.
F[i] = F[i-1] + F[i-2];
 */