#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    cout << "Sun Mon Tue Wed Thr Fri Sat\n";

    for (int i = 0; i < x - 1; i++) {
        cout << "    ";
    }

    for (int i = 1; i <= y; i++) {
        cout << setw(3) << i;

        if ((i + x - 1) % 7 == 0 || i == y) {
            cout << '\n';
        } else {
            cout << ' ';
        }
    }

    return 0;
}