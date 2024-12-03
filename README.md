# Sorting Algorithms Application

This application implements and benchmarks a variety of sorting algorithms, comparing their performance under different data conditions. It allows users to understand how various algorithms behave with sorted, reversed, partially sorted, and random datasets of varying sizes.

---

## Features

### Sorting Algorithms Implemented:
1. **Insertion Sort**:
   - Simple algorithm dividing the list into sorted and unsorted parts.
   - Performs well on small or nearly sorted datasets.
   - Complexity:
     - Best case: `O(n)`
     - Average and worst case: `O(n²)`.
2. **Heap Sort**:
   - Converts the array into a heap structure to repeatedly extract the maximum/minimum.
   - Performs consistently regardless of initial data ordering.
   - Complexity: `O(n log n)`.
3. **Quick Sort**:
   - Utilizes a "divide and conquer" strategy, partitioning data around a pivot.
   - Multiple pivot strategies implemented:
     - Leftmost, rightmost, middle, and random.
   - Complexity:
     - Average case: `O(n log n)`.
     - Worst case: `O(n²)` (poor pivot selection).
4. **Shell Sort**:
   - Modified insertion sort using gaps to reduce swaps.
   - Two variations included:
     - **Classic Shell Sort**: Traditional implementation.
     - **Hibbard's Sequence**: Uses a specific sequence for gap reduction.
   - Complexity:
     - Best case: `O(n log n)`.
     - Average case: `O(n^1.25)`.
     - Worst case: `O(n²)`.

---

## Test Configurations

### Array Types:
1. **Random**: Fully randomized array elements.
2. **Ascending**: Array elements sorted in ascending order.
3. **Descending**: Array elements sorted in descending order.
4. **33% Sorted**: First third of the array is sorted, the rest is random.

### Array Sizes:
- 8,000
- 16,000
- 32,000
- 64,000
- 128,000
- 256,000
- 512,000

### Measurement Method:
- Execution time measured using high-resolution clock:
  - Start: `std::chrono::high_resolution_clock::now()`.
  - End: `std::chrono::high_resolution_clock::now()`.
  - Time difference calculated in microseconds.
- Each algorithm and dataset combination tested 100 times.
- Average execution time reported in milliseconds.

---

## Technologies Used

- **C++**: Core programming language.
- **std::chrono**: For precise time measurement.
- **std::default_random_engine**: For generating random data.

---

## How to Run

1. **Clone the Repository**:
   ```bash
   git clone <repository_url>
   cd <repository_directory>
