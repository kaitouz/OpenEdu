#include<iostream>
#include <algorithm>
using namespace std;
int n, a[5005];

void quickSort(int left, int right) {
	int i = left, j = right;
	int pivot = a[left];

	while (i <= j) {
		while (a[i] < pivot) ++i;
		while (a[j] > pivot) --j;

		if (i <= j) {
			swap(a[i], a[j]);
			if(i != j)
                printf("Swap elements at indices %d and %d.\n", i + 1, j + 1);
			++i;
			--j;
		}
	}
	if (left < j) quickSort(left, j);
	if (i < right) quickSort(i, right);
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    if(n != 1)
        quickSort(0, n - 1);


    printf("No more swaps needed.\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
