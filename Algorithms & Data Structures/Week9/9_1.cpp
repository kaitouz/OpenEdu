#include<iostream>
#include<string>
#include<vector>


using namespace std;
string p, t;
vector<int> ans;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> p;
    cin >> t;
    if(p.length() > t.length()) {
        printf("%d", 0);
        return 0;
    }
    for(int i = 0; i <= t.length() - p.length(); i++) {
        int check = true;
        for(int j = 0; j < p.length(); j++) {
            if(t[i + j] != p[j]) {
                check = false;
                break;
            }
        }
        if(check) ans.push_back(i);
    }
    printf("%d\n", ans.size());
    for(auto i: ans)
        printf("%d ", i + 1);
}
