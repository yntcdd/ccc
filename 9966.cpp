#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n;
    cin >> m >> n;

    int a = max(n, m);
    int b = min(n, m);
    int working = 0;
    string x = to_string(min(n, m));
    string y = to_string(max(n, m));

    for (int i = b; i <= a; i++) {
        bool ok = true;
        string z = to_string(i);
        for (int j = 0; j < z.size(); j++) {
            if (
                (z[j] == '1' && z[z.size() - 1 - j] == '1') ||
                (z[j] == '8' && z[z.size() - 1 - j] == '8') ||
                (z[j] == '6' && z[z.size() - 1 - j] == '9') ||
                (z[j] == '0' && z[z.size() - 1 - j] == '0') ||
                (z[j] == '9' && z[z.size() - 1 - j] == '6')
            ) {
                continue;
            } else {
                ok = false;
                break;
            }
        }
        if (ok) {
            working++;
        }
    }

    cout << working;

    return 0;
}