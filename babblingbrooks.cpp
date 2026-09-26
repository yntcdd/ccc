#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> flow(n);

    for (int i = 0; i < n; i++) {
        cin >> flow[i];
    }

    int x;

    while (true) {
        cin >> x;
        if (x == 99) {
            int split, percentage;
            cin >> split >> percentage;

            int original = flow[split - 1];
            int left = original * percentage / 100;
            int right = original - left;

            flow[split - 1] = left;
            flow.insert(flow.begin() + split, right);
        }   else if (x == 88) {
            int a;
            cin >> a;
            if (a == flow.size()) {
                flow[a - 2] += flow[a - 1];
                flow.erase(flow.begin() + a - 1);
            } else {
                flow[a - 1] += flow[a];
                flow.erase(flow.begin() + a);
            }
        }   else if (x == 77) {
            break;
        }
    }

    for (int i = 0; i < flow.size(); i++) {
        cout << flow[i] << " ";
    }

    return 0;
}