import sys

ans = 0

def mergeSort(arr, left, right):
    global ans
    if left == right:
        return

    mid = (left + right)//2

    mergeSort(arr, left, mid)
    mergeSort(arr, mid + 1, right)

    i = left
    j = mid + 1
    a = []
    a.clear()

    while (i <= mid) or (j <= right):
        if i > mid:
            a.append(arr[j])
            j += 1
        elif j > right:
            a.append(arr[i])
            i += 1
        elif arr[i] <= arr[j]:
            a.append(arr[i])
            i += 1
        else:
            a.append(arr[j])
            j += 1
            ans += (mid - i + 1)


    #print("{:d} {:d} {:d} {:d}".format(left, right, mid, ans))

    for i in range(0, len(a)):
        arr[left + i] = a[i]

def solve():
    n = int(input())
    arr = list([int(v) for v in input().split()])

    mergeSort(arr, 0, n - 1)

    print(ans)
    #for i in range(0, n):
    #   print(arr[i], end =" ")

if __name__ == '__main__':
    sys.stdin = open('input.txt', 'r')
    sys.stdout = open('output.txt', 'w')

    solve()

