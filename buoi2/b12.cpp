#include <bits/stdc++.h>

using namespace std;

int cmp( pair<int, int>v1, pair<int, int> v2 ) {
    if (v1.second != v2.second) return v1.second > v2.second;
    else return v1.first > v2.first;
}

int main() {
    vector<pair<int, int>> v;
    int key, value;
    while (cin >> key >> value) v.push_back({key, value});
    sort(v.begin(), v.end(), cmp);
    for (int i=0; i<v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

}