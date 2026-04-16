n,m=input('').split()
arr=[]
for k in range(int(n)):
    arr.append(k+1)

for l in range(int(m)):
    i,j=input('').split()
    temp=arr[int(i)-1]
    arr[int(i)-1]=arr[int(j)-1]
    arr[int(j)-1]=temp

for k in range(int(n)):
    print(arr[k],end=' ')
