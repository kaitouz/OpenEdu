#include<iostream>
#include<string>
#include<vector>


using namespace std;
typedef long long ll;
string s;
ll ans = 0;
vector<int> Count[30];

string Erase(string s) {
    string ret = "";
    for(int i = 0; i < s.length(); i++)
        if(s[i] != ' ') ret += s[i];
    return ret;
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    getline(cin, s);
    s = Erase(s);
    for(int i = 0; i < s.length(); i++)
        Count[s[i] - 'a'].push_back(i);

    for(char x = 'a'; x <= 'z'; x++) {
        int i = x - 'a';
        if(Count[i].size() > 1) {
            ans -= ll((1ll * Count[i].size() * (Count[i].size() - 1)) / 2ll);
            int cur = -(Count[i].size() - 1);
            for(int j = 0; j < Count[i].size(); j++) {
                ans += 1ll * Count[i][j] * cur;
                cur += 2;
            }

        }
    }

    cout << ans;
}
