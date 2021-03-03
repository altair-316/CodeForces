#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tC = 0;

    cin >> tC;

    for (int j = 0; j < tC; j++)
    {
        int n = 0, u = 0, r = 0, d = 0, l = 0;
        bool ans = 0;
        int sides[4] = {0};

        cin >> n;
        for (int i = 0; i < 4; i++)
            cin >> sides[i];

        for (int i = 0; i < 4; i++)
        {
            ans = 0;
            u = sides[0];
            r = sides[1];
            d = sides[2];
            l = sides[3];

            int t = sides[3];
            sides[3] = sides[2];
            sides[2] = sides[1];
            sides[1] = sides[0];
            sides[0] = t;

            if (u > 0 && r > 0)
            {
                u = u - 1;
                r = r - 1;
            }
            if (r > 0 && d > 0)
            {
                r = r - 1;
                d = d - 1;
            }
            if (d > 0 && l > 0)
            {
                d = d - 1;
                l = l - 1;
            }
            if (l > 0 && u > 0)
            {
                l = l - 1;
                u = u - 1;
            }

            if (u <= (n - 2) && r <= (n - 2) && d <= (n - 2) && l <= (n - 2)){
                ans = 1;
                break;
            }
        
        }

        if (ans == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return (0);
}