#include<iostream>
#include<queue>
#include<deque>
#include<algorithm>

using namespace std;
int n;
queue<int> q;
deque<int> d;

void push(int val) {
    q.push(val);
    while(!d.empty() && d.back() > val) {
        d.pop_back();
    }
    d.push_back(val);
}

void pop() {
    if(q.front() == d.front()) {
        d.pop_front();
    }
    q.pop();
}

int get() {
    return d.front();
}

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
            push(val);
        } else if(x == '?') {
            printf("%d\n", get());
        } else {
            pop();
        }
    }
}
