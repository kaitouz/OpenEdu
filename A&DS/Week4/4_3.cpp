#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;
int n;

string solve() {
    string s;
    cin >> s;
    stack<int> st;
    if(s.size()&1) return "NO";

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            st.push('(');
        }
        if(s[i] == ')') {
            if(st.empty()) return "NO";
            if(st.top() != '(') return "NO";
            st.pop();
        }
        if(s[i] == '[') {
            st.push('[');
        }
        if(s[i] == ']') {
            if(st.empty()) return "NO";
            if(st.top() != '[') return "NO";
            st.pop();
        }
    }
    if(!st.empty()) return "NO";
    return "YES";
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d", &n);
    while(n--)
        cout << solve() << endl;;
}
