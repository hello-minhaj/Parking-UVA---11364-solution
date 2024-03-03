#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, speed;
    
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int max=1;
        cin >> N;
        while(N--)
        {
            cin >> speed;
            if(max <= speed)
                max = speed;
        }
        cout << "Case " << i <<": " << max << endl;
    }
return 0;
}
