arr=[1,4,3,6,5,7,2,9]
print(arr)

for i in range(len(arr)):
    for j in range(len(arr)-1):
        if arr[j] > arr[j+1]:
            temp = arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=temp
print(arr)