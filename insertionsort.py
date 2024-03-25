def insertionSort(array):
    for i in range(1,len(array)):
        key = array[i]
        j = i - 1
        while j >= 0 and key < array[j]:
            array[j+1] = array[j]
            j -= 1
        array[j + 1] = key
    return array
# Main Function
arr = [34, 83, 46, 13, 42, 4, 97]
print("Before Sort : ", arr)
print("After Sort : ", insertionSort(arr))