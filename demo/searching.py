def binSearchUtil(arr, start, end, key):
    
    if start <= end:

        mid = int((start+end)/2)

        if type(arr[mid]) != int or type(key):
            return -2

        if arr[mid]==key:
            return mid
        elif key < arr[mid]:
            return binSearchUtil(arr,start,mid-1,key)
        elif key > arr[mid]:
            return binSearchUtil(arr,mid+1,end,key)
    else:
        return -1

def binarySearch(arr: list, value: int):
    return binSearchUtil(arr, 0, len(arr)-1, value)

arr = [1, None]
value=None

print(binarySearch(arr,value))
