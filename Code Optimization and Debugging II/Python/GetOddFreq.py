arr = list(map(int, input().split()))
freq_dict = {}

for num in arr:
    if num not in freq_dict:
        freq_dict[num] = 1
    else:
        freq_dict[num] += 1

for num, freq in freq_dict.items():
    if freq % 2 != 0:
        print(num)
        break

"""
Output: Return the number occurring odd no. of times

1 4 7 2 4 7 1 2 7
7

"""
