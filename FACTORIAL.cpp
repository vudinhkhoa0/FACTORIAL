#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        if (k == 1) cout << "YES";
        else if (k == 2)
        {
            int x;
            x =(int) (s[s.length() - 1]) - 48;
            if (x % 2 == 0) cout << "YES";
            else cout << "NO";
        }
        else if (k == 3)
        {
            int x;
            x =(int) (s[s.length() - 1]) - 48;
            if (x % 2 != 0) cout << "NO";
            else
            {
                int z = 0;
                for (int i = 0; i <= s.length() - 2; i++)
                {
                    z = (int) (s[i]) - 48;
                    x = x + z;
                }
                if (x % 3 == 0) cout << "YES";
                else cout << "NO";
            }
        }
        cout << endl;
    }
    return 0;
}

