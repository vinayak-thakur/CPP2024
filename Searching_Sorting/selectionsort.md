
# Dry Run of Selection Sort for Array: `6, 2, 4, 8, 10`

We'll walk through the selection sort algorithm step-by-step with the corrected code.

### Initial Array:
```
[6, 2, 4, 8, 10]
```

---

### **Pass 1** (i = 0):

1. Set `minIndex = 0` (currently pointing to `6`).
2. Compare `arr[j]` with `arr[minIndex]` for `j = 1` to `4`:
    - `arr[1] (2)` < `arr[0] (6)`, so update `minIndex = 1`.
    - `arr[2] (4)` > `arr[1] (2)`, no change.
    - `arr[3] (8)` > `arr[1] (2)`, no change.
    - `arr[4] (10)` > `arr[1] (2)`, no change.
3. Swap `arr[0] (6)` with `arr[1] (2)`.

**Array after Pass 1:**
```
[2, 6, 4, 8, 10]
```

---

### **Pass 2** (i = 1):

1. Set `minIndex = 1` (currently pointing to `6`).
2. Compare `arr[j]` with `arr[minIndex]` for `j = 2` to `4`:
    - `arr[2] (4)` < `arr[1] (6)`, so update `minIndex = 2`.
    - `arr[3] (8)` > `arr[2] (4)`, no change.
    - `arr[4] (10)` > `arr[2] (4)`, no change.
3. Swap `arr[1] (6)` with `arr[2] (4)`.

**Array after Pass 2:**
```
[2, 4, 6, 8, 10]
```

---

### **Pass 3** (i = 2):

1. Set `minIndex = 2` (currently pointing to `6`).
2. Compare `arr[j]` with `arr[minIndex]` for `j = 3` to `4`:
    - `arr[3] (8)` > `arr[2] (6)`, no change.
    - `arr[4] (10)` > `arr[2] (6)`, no change.
3. No swap is needed as `minIndex = 2`.

**Array after Pass 3:**
```
[2, 4, 6, 8, 10]
```

---

### **Pass 4** (i = 3):

1. Set `minIndex = 3` (currently pointing to `8`).
2. Compare `arr[j]` with `arr[minIndex]` for `j = 4`:
    - `arr[4] (10)` > `arr[3] (8)`, no change.
3. No swap is needed as `minIndex = 3`.

**Array after Pass 4:**
```
[2, 4, 6, 8, 10]
```

---

### Final Sorted Array:
```
[2, 4, 6, 8, 10]
```

### Summary:
- **Pass 1**: Swapped `6` with `2`.
- **Pass 2**: Swapped `6` with `4`.
- **Pass 3 & 4**: No swaps needed, the array was already sorted.

The array is sorted after 4 passes using selection sort!
