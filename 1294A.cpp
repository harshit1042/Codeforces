#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t, n;
    cin >> t;

    while (t--)
    {
        ll arr[3];
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        sort(arr, arr + 3);
        ll dif = arr[2] - arr[0];
        dif += arr[2] - arr[1];

        if (n >= dif)
        {
            n -= dif;
            if (n % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}