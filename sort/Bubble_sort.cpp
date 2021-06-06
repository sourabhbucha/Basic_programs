#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[50];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i];
    system("pause");
    return 0;
}
