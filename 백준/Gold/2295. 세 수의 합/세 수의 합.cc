#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> v(N);
    for (auto& x : v) cin >> x;
    vector<int> two;
    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            two.push_back(v[i] + v[j]);
        }
    }
    int minnum = -1;
    sort(two.begin(), two.end());
    for (int i = 0; i < v.size(); i++) {
        for (int j = N - 1; j >= 0 ; j--) {
            if (binary_search(two.begin(), two.end(), v[j] - v[i])) {
                minnum = max(minnum, v[j]);
            }
        }
    }
    cout << minnum << "\n";

    return 0;
}