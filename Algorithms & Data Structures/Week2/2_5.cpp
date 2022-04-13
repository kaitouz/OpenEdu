#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
const int MAXN = 1e5 + 5;
int n, k;
vector<vector<int>> vt;
int a[MAXN], b[MAXN];

int main() {
    freopen("input.txt","r",stdin);//
    freopen("output.txt","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i < k) {
            vector<int> ret;
            vt.push_back(ret);
        }
        vt[i%k].push_back(a[i]);
    }

    for(int i = 0; i < k; i++) {
        sort(vt[i].begin(), vt[i].end());
    }
    for(int i = 0; i < n; i++) {
        b[i] = vt[i%k][i/k];
        if(i != 0 && b[i] < b[i - 1]) {
            cout << "NO";
            return 0;
        }
    }
    //for(int i = 0; i < n; i++) cout << b[i] << " ";

    cout << "YES";
    return 0;
}
