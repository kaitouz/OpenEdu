#include<iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
int n;
typedef pair<double, int> di;
vector<di> v;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        double x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    cout << v[0].second << " " << v[v.size()/2].second << " " << v[v.size() - 1].second;
}
