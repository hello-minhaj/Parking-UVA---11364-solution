#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    int remainder;
    int i=1;

    cin >> T;
    while(T--)
    {
        int reversed = 0;
        cin >> n;
        int original = n;
        while(n != 0)
        {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n = n/10;
        }
        if(original == reversed)
        {
            cout <<"Case " << i << ": Yes" <<endl;
        }
        else
        {
            cout <<"Case " << i << ": No" <<endl;
        }
        i++;
    }
    
return 0;
}
