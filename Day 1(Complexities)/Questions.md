### Questions of Time Complexity

# 1. one 
def fun(n,m):
    for i in range(n):
       print(i)
    for i in range(m):
        print(i)
- Answer : O(n+m)


# 2. two
import random
def fun(N):
    counter=0
    for i in range(N):
        counter+=random.randint(1,100)
    print(counter)
- Answer : O(N)


# 3. three
def fun(N,M):
    arr=[]
    counter=0
    for i in range(N):
        arr.append(i)
    for i in range(M):
        counter+=1
    print(counter)
- Answer : O(n+m)


# 4. four
def function(N,M):
    counter=0
    for i in range(N):
        for j in range(M):
            counter+=1
    print(counter)
- Answer : O(n x m)


# 5. five
def fun(n):
    for i in range(n):
        print(pow(i,n))
- Answer : O(n x log n )
  
