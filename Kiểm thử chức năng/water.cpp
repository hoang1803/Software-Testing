#include <bits/stdc++.h>

using namespace std;

int a[] = {0, 10, 20, 30, INT_MAX};
int price[] = {6000, 7000, 9000, 16000};

void getAmount(int &water)
{
    cin >> water;
}

void getPrice(const int &water)
{
    if (water < 0)
    {
        cout << "Invalid Input";
        return;
    }

    int totalPrice = 0;
    // for (int i = 0; i < 4; i++) {
    //     if (water >= a[i]) {
    //         totalPrice += (min(water, a[i + 1]) - a[i]) * price[i];
    //     }
    //     else {
    //         break ;
    //     }
    // }

    if (water <= 10)
    {
        totalPrice = water * price[0];
    }
    else if (water <= 20)
    {
        totalPrice = (water - 10) * price[1] + 10 * price[0];
    }
    else if (water <= 30)
    {
        totalPrice = (water - 20) * price[2] + 10 * (price[1] + price[0]);
    }
    else
    {
        totalPrice = (water - 30) * price[3] + 10 * (price[2] + price[1] + price[0]);
    }

    cout << totalPrice;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // File chứa Input
    freopen("water.inp", "r", stdin);
    // File trả ra Output
    freopen("water.out", "w", stdout);
    int p;
    getAmount(p);
    getPrice(p);
    return 0;
}
