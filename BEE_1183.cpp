#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    int i, j;
    cin >> x;
    double m[12][12], sum = 0.0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
            if (j > i)
            {
                sum += m[i][j];
            }
        }
    }

    if (x == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (x == 'M')
    {
        cout << fixed << setprecision(1) << sum / 66.0 << endl; 
    }
    return 0;
}
