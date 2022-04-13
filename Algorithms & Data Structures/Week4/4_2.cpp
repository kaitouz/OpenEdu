#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;
int n;
queue<int> q;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        char x;
        cin >> x;
        if(x == '+') {
            int val;
            scanf("%d", &val);
            q.push(val);

        } else {
            cout << q.front() << endl;
            q.pop();
        }
    }
}
