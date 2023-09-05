#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> in(n);
    vector<int> out(n);
    for (int i = 0; i < n; i++) {
        cin >> in[i];
        cin >> out[i];
    }
    sort(in.begin(), in.end());
    sort(out.begin(), out.end());

    int i = 0;
    int j = 0;
    int max = 0;
    int count = 0;
    while (true) {
        if (i == n) break;
        if (in[i] <= out[j]) {
            count++;
            if (max < count) max = count;
            i++;
        }
        else {
            count--;
            j++;
        }
    }
    cout << max << endl;
}