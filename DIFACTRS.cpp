#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 0;
    int primeNo[n];
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            primeNo[k] = i;
            k++;
        }
    }
    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << primeNo[i] << " ";
    }

    return 0;
}