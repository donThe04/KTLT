#include <bits/stdc++.h>

using namespace std;

int counteven(int* arr, int size){
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) count++;
    }
    return count;
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << counteven(a, n) << endl;
    return 0;
}