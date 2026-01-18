# SORTING AND SEARCHING
# Demonstrates common sorting and searching algorithms

# Bubble sort - O(n²)
def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr

# Quick sort - O(n log n) average
def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    
    return quick_sort(left) + middle + quick_sort(right)

# Merge sort - O(n log n)
def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    
    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])
    
    return merge(left, right)

def merge(left, right):
    result = []
    i = j = 0
    
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    
    result.extend(left[i:])
    result.extend(right[j:])
    return result

# Selection sort - O(n²)
def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr

# Linear search - O(n)
def linear_search(arr, target):
    for i, num in enumerate(arr):
        if num == target:
            return i
    return -1

# Binary search - O(log n), requires sorted array
def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    return -1

# Interpolation search - O(log log n) for uniformly distributed data
def interpolation_search(arr, target):
    left, right = 0, len(arr) - 1
    
    while left <= right and target >= arr[left] and target <= arr[right]:
        pos = left + int((target - arr[left]) / (arr[right] - arr[left]) * (right - left))
        
        if arr[pos] == target:
            return pos
        elif arr[pos] < target:
            left = pos + 1
        else:
            right = pos - 1
    
    return -1

if __name__ == "__main__":
    numbers = [64, 34, 25, 12, 22, 11, 90, 88]
    
    print(f"Original array: {numbers}")
    
    # Bubble sort
    print(f"Bubble sort: {bubble_sort(numbers.copy())}")
    
    # Quick sort
    print(f"Quick sort: {quick_sort(numbers)}")
    
    # Merge sort
    print(f"Merge sort: {merge_sort(numbers)}")
    
    # Selection sort
    print(f"Selection sort: {selection_sort(numbers.copy())}")
    
    # Python built-in sort
    sorted_arr = sorted(numbers)
    print(f"Built-in sort: {sorted_arr}")
    
    # Linear search
    found = linear_search(sorted_arr, 22)
    print(f"Linear search for 22: index {found}")
    
    # Binary search
    found = binary_search(sorted_arr, 25)
    print(f"Binary search for 25: index {found}")
    
    # Interpolation search
    found = interpolation_search(sorted_arr, 11)
    print(f"Interpolation search for 11: index {found}")
