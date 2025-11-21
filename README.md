# C Programming Practical Question Bank

**Complete collection of 50 beginner-friendly C programming problems**

This question bank covers fundamental to intermediate C programming concepts including loops, functions, arrays, strings, pointers, structures, and algorithms. Each solution is well-commented and uses simple logic suitable for first-time C learners.

---

## 📚 Topics Covered

- **Basic I/O & Operators** (Q1-Q9)
- **Loops & Patterns** (Q10-Q15, Q21, Q45-Q46)
- **Functions & Recursion** (Q16-Q20, Q31)
- **Arrays** (Q29, Q32, Q35-Q37, Q42, Q49)
- **Matrices** (Q30, Q33-Q34)
- **Strings** (Q24, Q38-Q41)
- **Number Theory** (Q1, Q3, Q6, Q43-Q45)
- **Sorting & Searching** (Q10, Q30, Q36, Q42)
- **Pointers** (Q48-Q49)
- **Structures** (Q50)
- **Applications** (Q11-Q13, Q17-Q20, Q22, Q27-Q28)

---

## 📝 Complete Question List

### 1. Armstrong Number Check

**What to do:** Check if a number equals the sum of cubes of its digits.

**Formula:** For a 3-digit number *abc*, check if *abc* = a³ + b³ + c³

**Example:**
- Input: 153
- Check: 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✓
- Output: "Armstrong"

**Concepts:** Functions, loops, digit extraction

**Solution:** `src/q01_armstrong.c`

---

### 2. Mean, Variance, and Standard Deviation

**What to do:** Given a set of numbers, calculate their mean (average), variance (spread), and standard deviation.

**Formulas:**
- Mean: x̄ = (sum of all values) / n
- Variance (sample): s² = Σ(xᵢ - x̄)² / (n-1)
- Standard Deviation: s = √(s²)

**Example:**
- Input: n=5, values: 2, 4, 6, 8, 10
- Mean = 6.0
- Variance = 10.0
- Std Dev = 3.162

**Concepts:** Arrays, statistical calculations, math.h

**Solution:** `src/q02_stats_mean_variance_sd.c`

---

### 3. HCF (GCD) and LCM

**What to do:** Find the Highest Common Factor and Least Common Multiple of two numbers.

**Formulas:**
- HCF using Euclid's algorithm: gcd(a, b) = gcd(b, a mod b)
- LCM relationship: a × b = HCF(a,b) × LCM(a,b)

**Example:**
- Input: 12, 18
- HCF = 6
- LCM = 36

**Concepts:** Euclid's algorithm, number theory

**Solution:** `src/q03_hcf_lcm.c`

---

### 4. Series Sum: 1 + 11 + 111 + 1111 + ...

**What to do:** Display and sum a series where each term consists of only 1's.

**Pattern:** Each term is all 1's. Build each term by: term = term × 10 + 1

**Example:**
- Input: n=4
- Series: 1 + 11 + 111 + 1111
- Sum = 1234

**Concepts:** Loops, pattern recognition

**Solution:** `src/q04_series_1_11_111.c`

---

### 5. Right-Aligned Triangle Pattern

**What to do:** Print a decreasing triangle of stars that shifts right.

**Pattern for n=5:**
```
*****
 ****
  ***
   **
    *
```

**Logic:** Line i has (i-1) spaces and (n-i+1) stars

**Concepts:** Nested loops, pattern printing

**Solution:** `src/q05_right_aligned_triangle_pattern.c`

---

### 6. Amicable Numbers

**What to do:** Check if two numbers form an amicable pair.

**Definition:** Numbers a and b are amicable if:
- Sum of proper divisors of a = b
- Sum of proper divisors of b = a

**Example:**
- 220: divisors = 1,2,4,5,10,11,20,22,44,55,110 → sum = 284
- 284: divisors = 1,2,4,71,142 → sum = 220
- Output: YES

**Concepts:** Divisors, number theory, functions

**Solution:** `src/q06_amicable_numbers.c`

---

### 7. Print Binary Representation

**What to do:** Convert a decimal number to binary and print it.

**Method:** Repeatedly divide by 2, collect remainders in reverse

**Example:**
- Input: 13
- Output: 1101

**Concepts:** Number systems, recursion or iteration

**Solution:** `src/q07_print_binary.c`

---

### 8. Triangular Number Test

**What to do:** Check if a number is triangular.

**Definition:** Triangular numbers: 1, 3, 6, 10, 15, 21, ...

**Formula:** Tₖ = k(k+1)/2 for positive integer k

**Test:** Given n, check if n = k(k+1)/2 for some integer k

**Derivation:** k = (√(8n+1) - 1) / 2

**Concepts:** Mathematical formulas, sqrt function

**Solution:** `src/q08_is_triangular.c`

---

### 9. Reverse an Integer

**What to do:** Reverse the digits of a number.

**Example:**
- Input: 12345
- Output: 54321

**Logic:** Extract digits from right, build new number from left

**Concepts:** Digit manipulation, modulo operator

**Solution:** `src/q09_reverse_integer.c`

---

### 10. Bubble Sort

**What to do:** Sort an array using bubble sort algorithm.

**Algorithm:** Compare adjacent elements, swap if wrong order, repeat

**Time Complexity:** O(n²)

**Example:**
- Input: [64, 34, 25, 12, 22]
- Output: [12, 22, 25, 34, 64]

**Concepts:** Sorting algorithms, nested loops

**Solution:** `src/q10_bubble_sort.c`

---

### 11. Even Sum vs Odd Sum

**What to do:** In an array, find sum of even numbers and sum of odd numbers. Print the larger sum.

**Example:**
- Input: [2, 3, 3, 5, 4, 8, 7, 11, 2]
- Even sum = 2+4+8+2 = 16
- Odd sum = 3+3+5+7+11 = 29
- Output: 29

**Concepts:** Arrays, conditionals, accumulation

**Solution:** `src/q11_even_odd_sum_array.c`

---

### 12. Billing System with Discount

**What to do:** Calculate bill with items, quantities, and discount slabs.

**Discount Rules:**
- Total < Rs.1000: 5% discount
- Rs.1000 ≤ Total < Rs.5000: 10% discount
- Total ≥ Rs.5000: 15% discount

**Output:** Item-wise table, total, discount, grand total

**Concepts:** Functions, arrays, formatted output

**Solution:** `src/q12_billing_discount.c`

---

### 13. Volume Calculator

**What to do:** Calculate volume of different 3D shapes based on user choice.

**Formulas:**
- Cube: V = a³
- Cuboid: V = l × b × h
- Sphere: V = (4/3)πr³
- Cylinder: V = πr²h
- Cone: V = (1/3)πr²h

**Concepts:** Switch-case, functions, math constants

**Solution:** `src/q13_volume_calculator.c`

---

### 14. Three Consecutive 5s

**What to do:** Check if a number contains three consecutive 5s in its digits.

**Example:**
- 345559 → YES (has 555)
- 1353554 → NO

**Logic:** Track consecutive count while extracting digits

**Concepts:** Digit extraction, state tracking

**Solution:** `src/q14_three_consecutive_5s.c`

---

### 15. Number Patterns

**What to do:** Print two different number patterns for height n.

**Pattern (a):**
```
1
1 2
1 2 3
```

**Pattern (b):**
```
1
2 2
3 3 3
```

**Concepts:** Nested loops, pattern printing

**Solution:** `src/q15_patterns_a_b.c`

---

### 16. Count Odd, Even, and Negative

**What to do:** Read exactly 10 integers, count how many are odd, even, and negative.

**Note:** A negative number can be odd or even (e.g., -3 is both negative and odd)

**Concepts:** Arrays, counters, conditionals

**Solution:** `src/q16_count_odd_even_negative.c`

---

### 17. Gross Salary Calculator

**What to do:** Calculate gross salary from basic salary using HRA and DA slabs.

**Slabs:**
| Basic Salary | HRA | DA |
|--------------|-----|-----|
| 1-4000 | 10% | 50% |
| 4001-8000 | 20% | 60% |
| 8001-12000 | 25% | 70% |
| 12001+ | 30% | 80% |

**Formula:** Gross = Basic + HRA + DA

**Concepts:** Conditional logic, percentage calculations

**Solution:** `src/q17_gross_salary.c`

---

### 18. Fahrenheit to Celsius Table

**What to do:** Create a function to convert F to C, print table from -40°F to 220°F in steps of 10.

**Formula:** C = (5/9)(F - 32)

**Important:** Use 5.0/9.0 not 5/9 (integer division gives 0)

**Concepts:** Functions, floating-point arithmetic, loops

**Solution:** `src/q18_fahrenheit_to_celsius_table.c`

---

### 19. Electricity Bill Calculator

**What to do:** Calculate electricity bill based on units consumed.

**Rate Slabs:**
- First 200 units: Rs.1 per unit
- Next 100 units (201-300): Rs.1.5 per unit
- Beyond 300 units: Rs.2 per unit

**Example:**
- 350 units = (200×1) + (100×1.5) + (50×2) = 200 + 150 + 100 = Rs.450

**Concepts:** Progressive/slab-based calculations

**Solution:** `src/q19_electricity_bill.c`

---

### 20. Two-Digit Numbers with Digit Sum Multiple of 7

**What to do:** Print all two-digit numbers where sum of digits is divisible by 7.

**Example:** 16 (1+6=7), 25 (2+5=7), 34 (3+4=7), ...

**Range:** 10 to 99

**Concepts:** Loops, digit extraction, divisibility

**Solution:** `src/q20_two_digit_sum_digits_multiple_of_7.c`

---

### 21. Sum of Products of Consecutive Elements

**What to do:** Given array, calculate sum of products of adjacent pairs.

**Formula:** Σ(a[i] × a[i+1]) for i from 0 to n-2

**Example:**
- Input: [4, 5, 2, 5, 6, 4, 7]
- Calculation: 4×5 + 5×2 + 2×5 + 5×6 + 6×4 + 4×7
- Output: 122

**Concepts:** Arrays, adjacent element processing

**Solution:** `src/q21_sum_of_products_of_consecutive.c`

---

### 22. Set Operations

**What to do:** Implement union, intersection, and set differences (A-B, B-A).

**Operations:**
- Union: All unique elements from both sets
- Intersection: Elements present in both sets
- A-B: Elements in A but not in B
- B-A: Elements in B but not in A

**Concepts:** Sets, arrays, searching, uniqueness

**Solution:** `src/q22_set_operations.c`

---

### 23. Reverse a List

**What to do:** Reverse an array in-place.

**Method:** Use two pointers from start and end, swap elements

**Example:**
- Input: [1, 2, 3, 4, 5]
- Output: [5, 4, 3, 2, 1]

**Concepts:** Two-pointer technique, in-place modification

**Solution:** `src/q23_reverse_list.c`

---

### 24. String Palindrome

**What to do:** Check if a string reads the same forwards and backwards.

**Example:**
- "madam" → YES
- "hello" → NO

**Method:** Compare characters from both ends moving inward

**Concepts:** Strings, two-pointer technique

**Solution:** `src/q24_string_palindrome.c`

---

### 25. Triangle Area and Perimeter

**What to do:** Calculate area and perimeter of a triangle given three sides.

**Formulas:**
- Perimeter: P = a + b + c
- Semi-perimeter: s = (a+b+c)/2
- Area (Heron's formula): A = √(s(s-a)(s-b)(s-c))

**Concepts:** Functions, mathematical formulas, sqrt

**Solution:** `src/q25_triangle_area_perimeter.c`

---

### 26. Element-wise Array Operations

**What to do:** Given two arrays A and B, create arrays C and D where:
- C[i] = A[i] + B[i]
- D[i] = A[i] × B[i]

**Example:**
- A = [1, 2, 3]
- B = [4, 5, 6]
- C = [5, 7, 9]
- D = [4, 10, 18]

**Concepts:** Arrays, element-wise operations

**Solution:** `src/q26_array_sum_and_product.c`

---

### 27. Progressive Income Tax

**What to do:** Calculate tax using progressive tax slabs.

**Tax Slabs:**
| Income Range | Tax Rate |
|--------------|----------|
| 0-2500 | 0% |
| 2501-5000 | 10% |
| 5001-10000 | 20% |
| 10001+ | 30% |

**Example:**
- Income = Rs.5200
- Tax = 0% of 2500 + 10% of 2500 + 20% of 200 = 0 + 250 + 40 = Rs.290

**Concepts:** Progressive calculations, slab-based logic

**Solution:** `src/q27_income_tax_slabs.c`

---

### 28. Date in Words

**What to do:** Convert numeric date to word format (e.g., 16th July, 1992).

**Requirements:**
- Use switch-case for month names
- Add appropriate suffix (st, nd, rd, th) to day

**Suffix Rules:**
- 1, 21, 31 → st
- 2, 22 → nd
- 3, 23 → rd
- All others → th
- Exception: 11, 12, 13 → th

**Concepts:** Switch-case, string formatting

**Solution:** `src/q28_date_in_words.c`

---

### 29. Count Ugly Numbers

**What to do:** Count numbers from 1 to n whose only prime factors are 2, 3, or 5.

**Definition:** Ugly numbers have only 2, 3, 5 as prime factors

**Example:** 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 16, 18, 20, ...

**Method:** Divide by 2, 3, 5 repeatedly; if result is 1, it's ugly

**Concepts:** Prime factorization, number theory

**Solution:** `src/q29_ugly_number_count.c`

---

### 30. Sorting and Binary Search Menu

**What to do:** Implement bubble sort, insertion sort, and binary search with a menu.

**Algorithms:**
1. Bubble Sort: O(n²) - Compare adjacent, swap if wrong order
2. Insertion Sort: O(n²) - Insert each element into sorted portion
3. Binary Search: O(log n) - Divide and conquer on sorted array

**Concepts:** Multiple algorithms, menu-driven program

**Solution:** `src/q30_sorts_and_binary_search.c`

---

### 31. Power Calculation (Iterative)

**What to do:** Calculate x^n using loops (not recursion).

**Formula:** x^n = x × x × ... × x (n times)

**Example:**
- Input: base=2, exp=5
- Output: 32

**Concepts:** Loops, accumulation

**Solution:** `src/q31_power_iterative.c`

---

### 32. Second Largest Element

**What to do:** Find second largest element in an array in one pass.

**Logic:** Track both largest and second largest simultaneously

**Example:**
- Input: [12, 35, 1, 10, 34, 1]
- Output: 34

**Concepts:** Single-pass algorithms, tracking multiple values

**Solution:** `src/q32_second_largest.c`

---

### 33. Matrix Diagonal Sum

**What to do:** Calculate sum of primary and secondary diagonals of a square matrix.

**Definitions:**
- Primary diagonal: elements where i = j (top-left to bottom-right)
- Secondary diagonal: elements where i + j = n - 1 (top-right to bottom-left)

**Concepts:** 2D arrays, matrix operations

**Solution:** `src/q33_matrix_diagonal_sum.c`

---

### 34. Symmetric Matrix Check

**What to do:** Check if a matrix is symmetric.

**Definition:** Matrix is symmetric if A[i][j] = A[j][i] for all i, j

**Note:** Only square matrices can be symmetric

**Concepts:** 2D arrays, matrix properties

**Solution:** `src/q34_symmetric_matrix.c`

---

### 35. Frequency Count

**What to do:** Count how many times each unique element appears in an array.

**Example:**
- Input: [1, 2, 2, 3, 3, 3, 4]
- Output:
  - 1: 1 time
  - 2: 2 times
  - 3: 3 times
  - 4: 1 time

**Concepts:** Counting, visited array technique

**Solution:** `src/q35_frequency_count.c`

---

### 36. Merge Two Sorted Arrays

**What to do:** Merge two sorted arrays into a third sorted array.

**Algorithm:** Two-pointer technique
- Compare elements from both arrays
- Add smaller to result
- Move corresponding pointer

**Time Complexity:** O(n + m)

**Concepts:** Merging, two-pointer technique

**Solution:** `src/q36_merge_sorted_arrays.c`

---

### 37. Remove Duplicates

**What to do:** Remove duplicate elements from an array, keep first occurrence.

**Example:**
- Input: [1, 2, 2, 3, 4, 4, 4, 5]
- Output: [1, 2, 3, 4, 5]

**Concepts:** Uniqueness checking, array manipulation

**Solution:** `src/q37_remove_duplicates.c`

---

### 38. String Reverse (Manual)

**What to do:** Reverse a string without using library functions.

**Method:** Two-pointer swap from both ends

**Example:**
- Input: "hello"
- Output: "olleh"

**Concepts:** Strings, two-pointer technique, character swapping

**Solution:** `src/q38_string_reverse.c`

---

### 39. Anagram Check

**What to do:** Check if two strings are anagrams.

**Definition:** Anagrams have same letters in different order

**Examples:**
- "listen" and "silent" → YES
- "hello" and "world" → NO

**Method:** Sort both strings and compare

**Concepts:** Strings, sorting, comparison

**Solution:** `src/q39_anagram_check.c`

---

### 40. Case Conversion

**What to do:** Convert string to uppercase and lowercase.

**ASCII Values:**
- 'A' = 65, 'Z' = 90
- 'a' = 97, 'z' = 122
- Difference = 32

**Conversion:**
- To uppercase: subtract 32 from lowercase
- To lowercase: add 32 to uppercase

**Concepts:** ASCII manipulation, character operations

**Solution:** `src/q40_case_conversion.c`

---

### 41. Count Words in String

**What to do:** Count number of words in a string.

**Definition:** Word = sequence of non-space characters

**Example:**
- Input: "Hello World from C"
- Output: 4 words

**Concepts:** String parsing, state tracking

**Solution:** `src/q41_count_words.c`

---

### 42. Linear Search (All Occurrences)

**What to do:** Find and print all positions where target element appears.

**Example:**
- Array: [1, 3, 5, 3, 7, 3, 9]
- Target: 3
- Output: Positions 1, 3, 5

**Concepts:** Linear search variant, multiple results

**Solution:** `src/q42_linear_search_all.c`

---

### 43. Perfect Number

**What to do:** Check if a number is perfect.

**Definition:** Perfect number equals sum of its proper divisors (excluding itself)

**Examples:**
- 6 = 1 + 2 + 3 ✓
- 28 = 1 + 2 + 4 + 7 + 14 ✓

**Concepts:** Divisors, number theory

**Solution:** `src/q43_perfect_number.c`

---

### 44. Strong Number

**What to do:** Check if a number equals sum of factorials of its digits.

**Formula:** For number with digits d₁, d₂, ..., dₖ, check if n = d₁! + d₂! + ... + dₖ!

**Example:**
- 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 ✓

**Concepts:** Factorial, digit processing

**Solution:** `src/q44_strong_number.c`

---

### 45. Prime Numbers in Range

**What to do:** Print all prime numbers between two given numbers.

**Prime:** Number > 1 divisible only by 1 and itself

**Optimization:** Check divisibility up to √n only

**Concepts:** Prime checking, range operations

**Solution:** `src/q45_prime_range.c`

---

### 46. Decimal to Binary Conversion

**What to do:** Convert decimal number to binary (manual algorithm).

**Algorithm:** Repeatedly divide by 2, collect remainders in reverse

**Example:**
- Input: 13
- 13÷2 = 6 remainder 1
- 6÷2 = 3 remainder 0
- 3÷2 = 1 remainder 1
- 1÷2 = 0 remainder 1
- Output: 1101

**Concepts:** Number systems, base conversion

**Solution:** `src/q46_decimal_to_binary.c`

---

### 47. Binary to Decimal Conversion

**What to do:** Convert binary string to decimal number.

**Formula:** decimal = Σ(bit_i × 2^i) from right to left

**Example:**
- Input: "1011"
- Calculation: 1×8 + 0×4 + 1×2 + 1×1 = 11
- Output: 11

**Concepts:** Number systems, base conversion, powers of 2

**Solution:** `src/q47_binary_to_decimal.c`

---

### 48. Swap Using Pointers

**What to do:** Demonstrate call by reference by swapping two numbers using pointers.

**Key Concept:** Pointers allow functions to modify original variables

**Syntax:**
- Pass addresses: swap(&x, &y)
- Receive pointers: void swap(int *a, int *b)
- Dereference: *a to access value

**Concepts:** Pointers, call by reference, function parameters

**Solution:** `src/q48_swap_pointers.c`

---

### 49. Array Sum Using Pointers

**What to do:** Calculate sum of array elements using pointer arithmetic.

**Pointer Arithmetic:**
- ptr++ moves to next element
- *ptr gets value at current position

**Concepts:** Pointers, array traversal, pointer arithmetic

**Solution:** `src/q49_array_sum_pointers.c`

---

### 50. Book Structure

**What to do:** Create a structure to store book information (title, author, pages, price) and display it.

**Structure Definition:**
```c
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};
```

**Concepts:** Structures, user-defined data types

**Solution:** `src/q50_book_structure.c`

---

## 🔧 How to Use

### In Code::Blocks (Windows/Linux)

1. Open Code::Blocks
2. File → New → Empty file
3. Paste code from any `src/q##_name.c` file
4. Save with `.c` extension
5. Build and Run (F9)

---

## 📝 License

Educational use only. Perfect for lab practice, assignments, and self-study.

---

**Happy Coding! 🚀**

*Last updated: 2025*
