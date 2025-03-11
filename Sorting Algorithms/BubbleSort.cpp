#include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int> &ar)
{ 
    int n = ar.size();
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)   // Time Complexity N*N
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
                ans = true;
            }
        }
        if (ans == false)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}
int main()
{
    vector<int> ar = {10, 5, 15, 14, 9, 2, 31, 13, 6, 11, 8, 7};

    bubblesort(ar);
    return 0;
}
