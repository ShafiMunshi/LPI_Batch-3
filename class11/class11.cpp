#include <bits/stdc++.h>
using namespace std;

int gun(int x) // 50 * 2 and this function return 100
{
    int ans = x * 2;
    return ans;
}

void check_even_odd(int ans) // ans = 100 check if even or odd function
{
    if (ans % 2 == 0)
    {
        cout << ans << " is Even number" << endl;
    }
    else
    {
        cout << ans << " is Odd number" << endl;
    }
}
int main()
{
    int ans = gun(50); // function call and and ans store return value

    check_even_odd(ans); // function call

    int ans = mysum(20, 30); // function call
    cout << ans;

    return 0;
}

int mysum(int a, int b)
{
    int ans = a + b;
    return ans; // return ans to main function = 50
}