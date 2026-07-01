# Traceability Matrix

## Requirement Traceability

| Requirement | Description | Verification Method | Evidence |
|:---|:---|:---|:---|
| **R1 - Accuracy** | Solution returns correct indices for two numbers that sum to target | Acceptance Testing | `05_acceptance_tests.md` (TC01-TC03) |
| **R2 - Efficiency** | Achieve O(n) time complexity using hash map approach | Design Review | `03_SDS.md` - One-pass Hash Map algorithm |
| **R3 - No Duplicate Use** | Same element (at specific index) cannot be used twice | Code Implementation | Source code loop structure ensures distinct indices |

## Mapping Details

**R1 - Accuracy:**
- All three acceptance test cases (TC01, TC02, TC03) verify that the function returns correct indices
- Confirms the solution works for standard inputs, different arrays, and duplicate values

**R2 - Efficiency:**
- Documented in the Software Design Description (`03_SDS.md`)
- Hash map implementation achieves **O(n)** single-pass time complexity
- Eliminates nested loops of the brute force **O(n²)** approach

**R3 - No Duplicate Use:**
- Implemented in the algorithm's loop structure
- Hash map stores each element with its index as it's encountered
- Ensures indices are always distinct and no element is reused