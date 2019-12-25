def partition(arr, start, end):
    if start < end:
        pivot = arr[start]
        i = start + 1
        j = end
        while i < j:
            while i < end and arr[i] <= pivot :
                i+=1
            while j > start and arr[j] >= pivot :
                j-=1
            if i < j:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
        arr[start] = arr[j]
        arr[j] = pivot

        return j

def quickSort(arr, start, end):
    if start < end:
        pos = partition(arr, start, end)
        quickSort(arr, start, pos-1)
        quickSort(arr, pos+1, end)

arr = [9, 4, 3, 5, 2, 1, 6, 8, 0]
print(arr)
quickSort(arr, 0, len(arr)-1)
print(arr)