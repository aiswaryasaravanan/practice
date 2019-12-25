def bubbleSort(arr: list):
    for i in range(len(arr)-1):
        flag=0
        for j in range(len(arr)-1-i):
            if arr[j] > arr[j+1]:
                flag=1
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1]=temp
        if flag == 0:
            break
        print(arr)

# arr = [4, 3, 6, 1, 2, 8, 0]
arr = [-1, 9, 0, 7, -20, 25, 0, -1, 25]
# arr = [-20, -1, -1, 0, 0, 7, 24, 25, 5]
bubbleSort(arr)
print("res")
print(arr)