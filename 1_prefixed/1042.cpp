#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[3], main_array[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> array[i];
        main_array[i] = array[i];
    }
    sort(array, array + 3);
    for (int i : array)
    {
        cout << i << endl;
    }
    cout << endl;
    for (int i : main_array)
    {
        cout << i << endl;
    }
    return 0;
}