def binarySearch(arr,start,end,key):
    if start < end:
        mid=(start+end)/2
        if arr[mid]==key:
            return mid
        elif key < arr[mid]:
            return binarySearch(arr,start,mid-1,key)
        elif key > arr[mid]:
            return binarySearch(arr,mid+1,end,key)
    else:
        return -1

arr=[1,2,3,4,5,6,7,8,9]

print(binarySearch(arr,0,len(arr)-1,8))
print(binarySearch(arr,0,len(arr)-1,18))
print(binarySearch(arr,0,len(arr)-1,0))