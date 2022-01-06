def sum_of(array):
    res = 0
    for num in array:
        res += num
        
    return res
    
array = [int(x) for x in input().split()]
print(sum_of(array))
