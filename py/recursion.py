# RECURSION
# Demonstrates recursive functions and backtracking

# Simple recursion - factorial
def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n - 1)

# Fibonacci sequence
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

# Binary search with recursion
def binary_search(arr, left, right, target):
    if left > right:
        return -1  # Not found
    
    mid = (left + right) // 2
    
    if arr[mid] == target:
        return mid
    elif arr[mid] > target:
        return binary_search(arr, left, mid - 1, target)
    else:
        return binary_search(arr, mid + 1, right, target)

# Backtracking - Generate all permutations
def permute(s, l, r, result):
    if l == r:
        result.append(''.join(s))
    else:
        for i in range(l, r + 1):
            s[l], s[i] = s[i], s[l]
            permute(s, l + 1, r, result)
            s[l], s[i] = s[i], s[l]  # Backtrack

# N-Queens problem (backtracking example)
def is_safe(board, row, col, n):
    # Check row
    for j in range(col):
        if board[row][j] == 1:
            return False
    
    # Check upper left diagonal
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    
    # Check lower left diagonal
    for i, j in zip(range(row, n, 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    
    return True

def solve_nqueens(board, col, n):
    if col >= n:
        return True
    
    for row in range(n):
        if is_safe(board, row, col, n):
            board[row][col] = 1
            if solve_nqueens(board, col + 1, n):
                return True
            board[row][col] = 0
    
    return False

if __name__ == "__main__":
    # Factorial
    print(f"Factorial of 5: {factorial(5)}")
    print(f"Factorial of 10: {factorial(10)}")
    
    # Fibonacci
    print(f"Fibonacci(6): {fibonacci(6)}")
    print(f"Fibonacci(10): {fibonacci(10)}")
    
    # Binary search
    numbers = [1, 3, 5, 7, 9, 11, 13, 15]
    found = binary_search(numbers, 0, len(numbers) - 1, 7)
    print(f"Found 7 at index: {found}")
    
    # Permutations
    result = []
    permute(list("ABC"), 0, 2, result)
    print(f"Permutations of 'ABC': {result}")
    
    # N-Queens (4 queens)
    n = 4
    board = [[0 for _ in range(n)] for _ in range(n)]
    if solve_nqueens(board, 0, n):
        print(f"Solution for {n}-Queens problem:")
        for row in board:
            print(row)
