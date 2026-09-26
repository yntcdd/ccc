#include <bits/stdc++.h>

using namespace std;

int main() {

    int money, a, b, c;
    cin >> money >> a >> b >> c;

    int played = 0;

    while (money > 0) {
        played++;
        money -= 1;
        if (played % 3 == 0) {
            c++;
            if (c % 10 == 0) {
                money += 9;
            }
        } else if (played % 2 == 0) {
            b++;
            if (b % 100 == 0) {
                money += 60;
            }
        } else {
            a++;
            if (a % 35 == 0) {
                money += 30;
            }
        }
    }

    cout << "Martha plays " << played << " times before going broke.";

    return 0;
}