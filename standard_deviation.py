from math import *
def compute_mean(array):
  sum = 0
  for value in array:
    sum += value
  return sum / len(array)
def compute_variance(array,mean):
    sum = 0
    for value in array:
        sum += (value - mean)**2
    return sum / len(array)
def compute_standard_deviation(variance):
    return sqrt(variance)
array = [5,3,6,7,4]
mean = compute_mean(array)
variance = compute_variance(array,mean)
print(compute_standard_deviation(variance))
