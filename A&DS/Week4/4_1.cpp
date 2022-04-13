#include<iostream>
#include <stack>
#include <algorithm>
#include <functional>

using namespace std;
int n;


int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d", &n);
    int fr = 0;
    int ba = 0;
    for(int i = 1; i <= n; i++) {
        char x;
        cin >> x;
        if(x == '-') {
            printf("%d\n",s[fr]);
            fr++;
        } else {
            int k;
            scanf("%d", &k);
            top++;
            s[top] = k;
        }
    }
}
