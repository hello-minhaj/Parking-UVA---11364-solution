#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pos, lift, temp,time, T;

    cin >> T;
    if (T <= 25)
    {
        for (int i = 1; i <= T; i++)
        {
            cin >> pos >> lift;
            if(pos <= lift)
                temp = lift - pos;
            else
                temp = pos - lift;
            time = temp*4 + pos*4 + 19;
            cout << "Case "<< i <<": "<< time << endl;
        }
    }

    return 0;
}
