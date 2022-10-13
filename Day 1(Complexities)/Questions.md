# Questions of Time Complexity

### 1. 
    def fun(n,m):
    for i in range(n):
       print(i)
    for i in range(m):
        print(i)
- Answer : O(n+m)


### 2. 
    import random
    def fun(N):
    counter=0
    for i in range(N):
        counter+=random.randint(1,100)
    print(counter)
- Answer : O(N)


### 3. 
    def fun(N,M):
    arr=[]
    counter=0
    for i in range(N):
        arr.append(i)
    for i in range(M):
        counter+=1
    print(counter)
- Answer : O(n+m)


### 4. 
    def function(N,M):
    counter=0
    for i in range(N):
        for j in range(M):
            counter+=1
    print(counter)
- Answer : O(n x m)


### 5. 
    def fun(n):
    for i in range(n):
        print(pow(i,n))
- Answer : O(n x log n )
  
### 6.
    def fun(n,m):
    arr=[[0]*m for i in range(n)]
    for i in range(n):
        for j in range(m):
            k=1
            while k<n*m:
                k*=2
 - Answer : O((n x m) x (log(n x m)))
