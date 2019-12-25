def mergeSortUtil(arr, start, mid, end):
    i=start
    j=mid+1
    arr1=[]
    while i <= mid and j <= end:
        if arr[i] < arr[j]:
            arr1.append(arr[i])
            i+=1
        else:
            arr1.append(arr[j])
            j+=1
    while i <= mid :
        arr1.append(arr[i])
        i+=1
    while j <= end :
        arr1.append(arr[j])
        j+=1

    arr[start:end+1]=arr1
    return arr

def mergeSort(arr, start, end):
    if start < end:
        mid=(start+end)/2
        mergeSort(arr, start, mid)
        mergeSort(arr, mid+1, end)
        arr=mergeSortUtil(arr, start, mid, end)

arr=[1, 3, 2, 5, 4, 7, 6, 8, 0]
print(arr)

mergeSort(arr, 0, len(arr)-1)
print(arr)