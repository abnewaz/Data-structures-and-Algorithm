#include <bits/stdc++.h>
using namespace std;
/*
Time complexity: nlogn  -> 1,2,4,8,16,32,..., 1e6
Memory complexity: O(n)
*/
//----------------Dynamic Array insertion--------------
class Array
{
private:
    int *arr; // m = O(n)
    int cap;  // m = O(1)
    int sz;   // m = O(1)
    void Increase_size()
    { // double the current cap and take a new array with double size
        cap = cap * 2;
        int *tmp = new int[cap];
        for (int i = 0; i < sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete[] arr; // delete current arr data
        arr = tmp;    // point arr to the memory of new arr location
    }
public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }
    void Push_back(int x)
    {
        if (cap == sz)
        {
            Increase_size();
        }
        arr[sz] = x; // t = O(1)
        sz++;        // t = O(1)
    }
    // ------------insert data in any position-------------
    void Insert(int pos, int x) // t = O(sz)
    {
        if (cap == sz)
        {
            Increase_size();
        }
        for (int i = sz - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    void Print() // t = O(n)
    {
        for (int i = 0; i < sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    // ------------get current size of array-------------
    int getSize() // t = O(1)
    {
        return sz;
    }
    // ------------get index number for any element-------------
    int getElement(int idx) // t = O(1)
    {
        if (idx >= sz)
        {
            cout << " Error " << idx << " is out of bound!\n";
            return -1;
        }
        return arr[idx];
    }
    // ------------delete data from last position-------------
    // Do:   if(sz = cap/2), then cap = cap/2;...
    //...write "Decrease_array()"" function
    void Pop_back() // t = O(1)
    {
        if (sz == 0)
        {
            cout << "Current size is )\n";
            return;
        }
        sz--;
    }
    // ------------delete data from any position-------------
    void Erase(int pos) // t = O(sz)
    {
        if (pos >= sz)
        {
            cout << "Position doesn't exist.\n";
            return;
        }
        for (int i = pos + 1; i < sz; i++)
        {
            arr[i - 1] = arr[i]; // way-1
            // swap(arr[i-1], arr[i]);   //way-2
        }
        sz--;
    }
};
int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Insert(1, 5);
    a.Print();
    cout << a.getSize() << "\n";
    for (int i = 0; i < a.getSize(); i++)
    {
        cout << a.getElement(i) << "\n";
    }
    a.Print();
    a.Pop_back();
    a.Print();
    a.Pop_back();
    a.Print();
    a.Erase(1);
    a.Print();
    return 0;
}