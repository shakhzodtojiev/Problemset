// RECURSION
// Demonstrates recursive functions and backtracking

// Simple recursion - factorial
fn factorial(n: u32) -> u32 {
    if n <= 1 {
        1
    } else {
        n * factorial(n - 1)
    }
}

// Fibonacci sequence
fn fibonacci(n: u32) -> u32 {
    if n <= 1 {
        n
    } else {
        fibonacci(n - 1) + fibonacci(n - 2)
    }
}

// Binary search with recursion
fn binary_search(arr: &[i32], left: i32, right: i32, target: i32) -> i32 {
    if left > right {
        return -1;  // Not found
    }
    
    let mid = (left + right) / 2;
    let mid_usize = mid as usize;
    
    if arr[mid_usize] == target {
        mid
    } else if arr[mid_usize] > target {
        binary_search(arr, left, mid - 1, target)
    } else {
        binary_search(arr, mid + 1, right, target)
    }
}

// Backtracking - Generate all permutations
fn permute(s: &mut Vec<char>, l: usize, r: usize, result: &mut Vec<String>) {
    if l == r {
        result.push(s.iter().collect());
    } else {
        for i in l..=r {
            s.swap(l, i);
            permute(s, l + 1, r, result);
            s.swap(l, i);  // Backtrack
        }
    }
}

// Tree node structure
#[derive(Debug)]
struct TreeNode {
    val: i32,
    left: Option<Box<TreeNode>>,
    right: Option<Box<TreeNode>>,
}

impl TreeNode {
    fn new(val: i32) -> Self {
        TreeNode {
            val,
            left: None,
            right: None,
        }
    }
}

// Sum all values in a binary tree
fn tree_sum(root: &Option<Box<TreeNode>>) -> i32 {
    match root {
        None => 0,
        Some(node) => node.val + tree_sum(&node.left) + tree_sum(&node.right),
    }
}

// Count nodes in a tree
fn count_nodes(root: &Option<Box<TreeNode>>) -> i32 {
    match root {
        None => 0,
        Some(node) => 1 + count_nodes(&node.left) + count_nodes(&node.right),
    }
}

fn main() {
    // Factorial
    println!("Factorial of 5: {}", factorial(5));
    println!("Factorial of 10: {}", factorial(10));
    
    // Fibonacci
    println!("Fibonacci(6): {}", fibonacci(6));
    println!("Fibonacci(10): {}", fibonacci(10));
    
    // Binary search
    let numbers = vec![1, 3, 5, 7, 9, 11, 13, 15];
    let found = binary_search(&numbers, 0, numbers.len() as i32 - 1, 7);
    println!("Found 7 at index: {}", found);
    
    // Permutations
    let mut perms = Vec::new();
    let mut chars = vec!['A', 'B', 'C'];
    permute(&mut chars, 0, 2, &mut perms);
    println!("Permutations of 'ABC': {:?}", perms);
    
    // Tree operations
    let mut root = Box::new(TreeNode::new(1));
    root.left = Some(Box::new({
        let mut left = TreeNode::new(2);
        left.left = Some(Box::new(TreeNode::new(4)));
        Box::new(left)
    }));
    root.right = Some(Box::new({
        let mut right = TreeNode::new(3);
        right.right = Some(Box::new(TreeNode::new(5)));
        Box::new(right)
    }));
    
    let root_option = Some(root);
    println!("Tree sum: {}", tree_sum(&root_option));
    println!("Tree node count: {}", count_nodes(&root_option));
}
