# Test Plan

## Testing Methodology
- **Black-box Testing** - Validate outputs without examining internal implementation details
- **Unit Testing** - Test individual functions in isolation with specific test cases

## Test Categories

### Functional Testing
- **Purpose:** Verify the solution returns correct indices for standard inputs
- **Examples:**
  - `nums = [2, 7, 11, 15], target = 9` → Expected: `[0, 1]`
  - `nums = [3, 2, 4], target = 6` → Expected: `[1, 2]`
- **Success Criteria:** Returned indices correctly identify two numbers that sum to target

### Edge Case Testing
- **Negative Numbers:** Test with arrays containing negative integers
  - `nums = [-1, -2, -3, 5], target = 2` → Expected: `[2, 3]`
- **Zeros:** Test arrays with zero values
  - `nums = [0, 0, 3, 4], target = 0` → Expected: `[0, 1]`
- **Minimum Array Size:** Test with smallest valid input (size 2)
  - `nums = [1, 2], target = 3` → Expected: `[0, 1]`

### Performance Testing
- **Purpose:** Ensure the **O(n)** hash map approach handles large datasets efficiently
- **Test Scenarios:**
  - Large arrays (thousands to millions of elements)
  - Measure execution time and memory usage
  - Verify single-pass performance compared to brute force **O(n²)**
- **Success Criteria:** Solution completes within acceptable time limits without timeout