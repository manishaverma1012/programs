n = int(input())
arr = list(map(int, input().split()))
    largest = max(arr)
    for x in range(len(arr)-1,-1,-1):
            if arr[x] == largest:
                    arr.remove(arr[x])


print(max(arr))