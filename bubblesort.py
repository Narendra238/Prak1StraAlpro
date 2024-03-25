def bubblesort(array):
    n =  len(array)
    for i in range(n):
        swapped = False
        for j in range(0,n-i-1,1):
            if array[j] > array[j+1]:
                temp =  array[j]
                array[j] = array[j+1]
                array[j+1] = temp
    return array

# Main function
arr = [34, 83, 46, 13, 42, 4, 97]
print("Before Sort : ", arr)
print("After Sort : ", bubblesort(arr))