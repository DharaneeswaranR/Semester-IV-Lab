def binary_search(arr, num):
    left = 0
    right = len(arr) - 1
    mid = 0

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] < num:
            left = mid + 1
        elif arr[mid] > num:
            right = mid - 1
        else:
            return mid

    return -1

arr = [int(x) for x in input().split()]
num = int(input())

print(f"{num} is found at the position {binary_search(arr, num)}")

# Input:
# 11 22 33 44 55
# 44

# Output:
# 44 is found at the position 3