#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int l;
    cin >> l;

    for (int j = 0; j < l; j++) {
        int n, m;
        cin >> n >> m;
        int total = 0;

        if (n > m) {
            swap(n, m);
        }

        for (int i = n; i <= m; i++) {
            total += i;
        }

        cout << total << endl;
    }

    return 0;
}
