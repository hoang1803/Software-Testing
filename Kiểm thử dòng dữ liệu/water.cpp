#include <bits/stdc++.h>

using namespace std;

int a[] = {0, 10, 20, 30, INT_MAX};
int price[] = {6000, 7000, 9000, 16000};

void getPrice(const int &water) {
    if (water < 0) {
        cout << "Invalid Input";
        return;
    }

    // Tổng giá tiền
    int totalPrice = 0;

    // Số nước theo từng bậc mà gia đình do sử dụng
    int deg1 = 0, deg2 = 0, deg3 = 0, deg4 = 0;

    if (water <= 10) {
        deg1 = water * price[0];
    } else if (water <= 20) {
        deg1 = 10 * price[0];
        deg2 = (water - 10) * price[1];
    } else if (water <= 30) {
        deg1 = 10 * price[0], deg2 = 10 * price[1];
        deg3 = (water - 20) * price[2];
    } else {
        deg1 = 10 * price[0], deg2 = 10 * price[1], deg3 = 10 * price[2];
        deg4 = (water - 30) * price[3];
    }

    totalPrice = deg1 + deg2 + deg3 + deg4;
    cout << totalPrice;
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // File chứa Input
    freopen("water.inp", "r", stdin);
    // File trả ra Output
    freopen("water.out", "w", stdout);
    int water;
    cin >> water;
    getPrice(water);
    return 0;
}
