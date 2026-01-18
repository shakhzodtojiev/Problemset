// SORTING AND SEARCHING
// Demonstrates common sorting and searching algorithms

// Bubble sort - O(n²)
fn bubble_sort(arr: &mut [i32]) {
    let n = arr.len();
    for i in 0..n - 1 {
        for j in 0..n - i - 1 {
            if arr[j] > arr[j + 1] {
                arr.swap(j, j + 1);
            }
        }
    }
}

// Quick sort - O(n log n) average
fn quick_sort(arr: &mut [i32], low: i32, high: i32) {
    if low < high {
        let pivot_index = partition(arr, low, high) as i32;
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
    }
}

fn partition(arr: &mut [i32], low: i32, high: i32) -> usize {
    let pivot = arr[high as usize];
    let mut i = low - 1;
    
    for j in low..high {
        if arr[j as usize] < pivot {
            i += 1;
            arr.swap(i as usize, j as usize);
        }
    }
    
    arr.swap((i + 1) as usize, high as usize);
    (i + 1) as usize
}

// Merge sort - O(n log n)
fn merge_sort(arr: &mut [i32]) {
    if arr.len() <= 1 {
        return;
    }
    
    let mid = arr.len() / 2;
    merge_sort(&mut arr[..mid]);
    merge_sort(&mut arr[mid..]);
    
    let mut temp = Vec::new();
    let mut i = 0;
    let mut j = mid;
    
    while i < mid && j < arr.len() {
        if arr[i] <= arr[j] {
            temp.push(arr[i]);
            i += 1;
        } else {
            temp.push(arr[j]);
            j += 1;
        }
    }
    
    temp.extend_from_slice(&arr[i..mid]);
    temp.extend_from_slice(&arr[j..]);
    
    arr.copy_from_slice(&temp);
}

// Linear search - O(n)
fn linear_search(arr: &[i32], target: i32) -> i32 {
    for (i, &num) in arr.iter().enumerate() {
        if num == target {
            return i as i32;
        }
    }
    -1
}

// Binary search - O(log n), requires sorted array
fn binary_search(arr: &[i32], target: i32) -> i32 {
    let mut left = 0;
    let mut right = arr.len() as i32 - 1;
    
    while left <= right {
        let mid = (left + right) / 2;
        match arr[mid as usize].cmp(&target) {
            std::cmp::Ordering::Equal => return mid,
            std::cmp::Ordering::Less => left = mid + 1,
            std::cmp::Ordering::Greater => right = mid - 1,
        }
    }
    
    -1
}

// Print slice
fn print_slice(arr: &[i32]) {
    println!("{:?}", arr);
}

fn main() {
    let mut numbers = vec![64, 34, 25, 12, 22, 11, 90, 88];
    
    print!("Original array: ");
    print_slice(&numbers);
    
    // Bubble sort
    let mut arr1 = numbers.clone();
    bubble_sort(&mut arr1);
    print!("Bubble sort: ");
    print_slice(&arr1);
    
    // Quick sort
    let mut arr2 = numbers.clone();
    quick_sort(&mut arr2, 0, arr2.len() as i32 - 1);
    print!("Quick sort: ");
    print_slice(&arr2);
    
    // Merge sort
    let mut arr3 = numbers.clone();
    merge_sort(&mut arr3);
    print!("Merge sort: ");
    print_slice(&arr3);
    
    // Using Rust built-in sort
    let mut arr4 = numbers.clone();
    arr4.sort();
    print!("Built-in sort: ");
    print_slice(&arr4);
    
    // Linear search
    let found = linear_search(&arr4, 22);
    println!("Linear search for 22: index {}", found);
    
    // Binary search
    let found = binary_search(&arr4, 25);
    println!("Binary search for 25: index {}", found);
    
    // Using Rust's binary_search method
    match arr4.binary_search(&11) {
        Ok(index) => println!("Binary search for 11 (using method): index {}", index),
        Err(_) => println!("Binary search for 11: not found"),
    }
}
