from math import *
def sum_array(x):
    sum = 0
    for i in x:
        sum += i
    return sum

def sum_x_y(x,y):
    sum = 0
    multi = [0]*len(x)
    for i in range(len(x)):
        multi[i] = x[i] * y[i]
    
    for j in range(len(x)):
        sum += multi[j]
    return sum

def sum_array2(x):
    sum = 0
    for i in range(len(x)):
        sum += pow(x[i],2);
    return sum

def cc(x,y,n):
    return (n*(sum_x_y(x,y))-(sum_array(x)*sum_array(y))) / ((sqrt(n*sum_array2(x)-sum_array(x)**2)*(sqrt(n*sum_array2(y)-sum_array(y)**2))))

x = [1,2,3,4,5,6,7,8]
y = [8,7,6,5,4,3,2,1]
n = 8
print(sum_array(x))
print(sum_array(y))
print(sum_x_y(x,y))
print(sum_array2(x))
print(sum_array2(y))
print(cc(x,y,n))
