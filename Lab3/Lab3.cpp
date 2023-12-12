#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << ' ';
        }
        for (int j = n - 2 * i; j <= n; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}