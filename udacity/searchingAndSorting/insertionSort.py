def insertionSort(arr):
    i=0
    j=i+1
    while j < len(arr):
        temp = arr[j]
        while i >= 0 and temp < arr[i] :
            arr[i+1] = arr[i]
            i-=1
        arr[i+1] = temp
        j=j+1
        i=j-1





arr=[3,2,5,1,4,8,0,9]
print(arr)
insertionSort(arr)
print(arr)