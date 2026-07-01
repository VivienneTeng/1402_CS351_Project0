# Software Design Description

## Algorithm: One-pass Hash Map

This design implements an efficient single-pass solution using a hash map to achieve **O(n)** time complexity.

## Logic

1. **Iterate through the array once**
   - Loop through each element in the `nums` array sequentially

2. **Calculate the complement**
   - For each element `x`, compute: `complement = target - x`
   - This represents the value needed to reach the target sum

3. **Check if complement exists in Hash Map**
   - Look up the complement in the hash map
   - If found, we've located our pair

4. **Return indices if match found**
   - If the complement exists, return:
     - The current element's index
     - The complement's stored index from the hash map

5. **Store current element if no match**
   - If the complement is not found, store the current element and its index in the hash map
   - This allows future iterations to find this element as a complement

## Advantages

- **Time Complexity:** **O(n)** - single pass through the array
- **Space Complexity:** **O(n)** - hash map stores up to n elements
- **Efficiency:** Eliminates nested loops compared to brute force approach
- **Early termination:** Returns immediately upon finding the solution