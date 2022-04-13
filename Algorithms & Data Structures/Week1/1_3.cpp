#include<iostream>

using namespace std;
int n, a[1005];

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cout << 1 << " ";
    for(int i = 2; i <= n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j > 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
        cout << j + 1 << " ";
    }
    cout << endl;
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
}
