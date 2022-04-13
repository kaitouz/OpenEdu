#include<iostream>
#include <algorithm>

using namespace std;
int n, k[100005], a[100005];

void mergeSort(int left, int right) {
    if(left == right) return;
	int mid = (left + right) / 2;
	mergeSort(left, mid);
	mergeSort(mid+1, right);

	int i = left, j = mid + 1;
	int cur = 0;

	while (i <= mid || j <= right) {
		if (i > mid) {
			a[cur++] = k[j++];
		} else if (j > right) {

			a[cur++] = k[i++];
		} else if (k[i] < k[j]) {
			a[cur++] = k[i++];
		} else {
			a[cur++] = k[j++];
		}
	}

	for (int i = 0; i < cur; i++)
		k[left + i] = a[i];
    cout << left << " " << right << " " << k[left] << " " << k[right] << endl;
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &k[i]);
    }

    mergeSort(1, n);

    for(int i = 1; i <= n; i++) {
        printf("%d ", k[i]);
    }
}
