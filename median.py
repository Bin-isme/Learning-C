def compute_median(array):
    n = len(array)
    if n % 2 == 0:
        m = (array[n//2-1] + array[n//2+1-1]) / 2
    else:
        m = array[((n+1)//2)-1]
    return m
array = [2,8,5,4,1,8]
array.sort()
print(compute_median(array))