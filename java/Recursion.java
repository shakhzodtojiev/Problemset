// RECURSION
// Demonstrates recursive functions and backtracking

import java.util.ArrayList;
import java.util.List;

public class Recursion {
    
    // Simple recursion - factorial
    static int factorial(int n) {
        if (n <= 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
    
    // Fibonacci sequence
    static int fibonacci(int n) {
        if (n <= 1) {
            return n;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    
    // Binary search with recursion
    static int binarySearch(int[] arr, int left, int right, int target) {
        if (left > right) {
            return -1;  // Not found
        }
        
        int mid = (left + right) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            return binarySearch(arr, left, mid - 1, target);
        } else {
            return binarySearch(arr, mid + 1, right, target);
        }
    }
    
    // Backtracking - Generate all permutations
    static void permuteHelper(char[] s, int l, int r, List<String> result) {
        if (l == r) {
            result.add(new String(s));
        } else {
            for (int i = l; i <= r; i++) {
                char temp = s[l];
                s[l] = s[i];
                s[i] = temp;
                
                permuteHelper(s, l + 1, r, result);
                
                temp = s[l];
                s[l] = s[i];
                s[i] = temp;  // Backtrack
            }
        }
    }
    
    static List<String> permute(String str) {
        List<String> result = new ArrayList<>();
        permuteHelper(str.toCharArray(), 0, str.length() - 1, result);
        return result;
    }
    
    // Tree node class
    static class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        
        TreeNode(int val) {
            this.val = val;
        }
    }
    
    // Sum all values in a binary tree
    static int treeSum(TreeNode root) {
        if (root == null) {
            return 0;
        }
        return root.val + treeSum(root.left) + treeSum(root.right);
    }
    
    // Count nodes in a tree
    static int countNodes(TreeNode root) {
        if (root == null) {
            return 0;
        }
        return 1 + countNodes(root.left) + countNodes(root.right);
    }
    
    public static void main(String[] args) {
        // Factorial
        System.out.println("Factorial of 5: " + factorial(5));
        System.out.println("Factorial of 10: " + factorial(10));
        
        // Fibonacci
        System.out.println("Fibonacci(6): " + fibonacci(6));
        System.out.println("Fibonacci(10): " + fibonacci(10));
        
        // Binary search
        int[] numbers = {1, 3, 5, 7, 9, 11, 13, 15};
        int found = binarySearch(numbers, 0, numbers.length - 1, 7);
        System.out.println("Found 7 at index: " + found);
        
        // Permutations
        List<String> perms = permute("ABC");
        System.out.println("Permutations of 'ABC': " + perms);
        
        // Tree operations
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(2);
        root.left.left = new TreeNode(4);
        root.right = new TreeNode(3);
        root.right.right = new TreeNode(5);
        
        System.out.println("Tree sum: " + treeSum(root));
        System.out.println("Tree node count: " + countNodes(root));
    }
}
