# C Programming Practical Question Bank (Refactored)

This set lists 30 focused questions with brief context (what to implement, inputs/outputs) and links to simple, beginner-friendly C solutions that compile in Code::Blocks (GCC).

---

## Questions and Context

1. Armstrong number (with function)

- Problem: A number is Armstrong if the sum of cubes of its digits equals the number (e.g., 153 = 1^3 + 5^3 + 3^3). Ask the user for a number and report if it’s Armstrong.
- Input: Integer n
- Output: "Armstrong" or "Not Armstrong"
- Notes: Implement int isArmstrong(int n); use digit-cube sum for 3-digit case.
- Solution: `src/q01_armstrong.c`

1. Mean, variance, standard deviation

- Problem: Read a set of numbers and compute mean, variance and standard deviation.
- Input: n (count), then n numbers (double)
- Output: mean, variance (sample, denominator n-1), std dev
- Notes: Handle n < 2 by printing variance = std dev = 0.0.
- Solution: `src/q02_stats_mean_variance_sd.c`

1. HCF and LCM

- Problem: Compute Highest Common Factor and Least Common Multiple for two numbers.
- Input: a, b
- Output: HCF, LCM
- Notes: Use Euclid’s algorithm; lcm = a / gcd(a,b) * b.
- Solution: `src/q03_hcf_lcm.c`

1. Series 1 + 11 + 111 + … up to n terms

- Problem: For user-given n, display the series and its sum.
- Input: n (terms)
- Output: series printed; sum
- Notes: Build term iteratively: term = term*10 + 1 (use long long).
- Solution: `src/q04_series_1_11_111.c`

1. Right-aligned decreasing stars pattern

- Problem: For positive integer n, print n lines like: (line 1) *********  (line 2)  ******** ... until last line has one star.
- Input: n (lines)
- Output: Pattern of spaces and stars
- Notes: Print i spaces then (n-i) stars for line i starting at 0.
- Solution: `src/q05_right_aligned_triangle_pattern.c`

1. Amicable numbers

- Problem: Check if two given numbers form an amicable pair (sum of proper divisors of each equals the other).
- Input: two positive integers
- Output: YES or NO
- Notes: Implement sum_of_proper_divisors function.
- Solution: `src/q06_amicable_numbers.c`

1. Print binary representation

- Problem: Given a positive integer n, print its binary representation.
- Input: unsigned integer
- Output: binary digits without leading zeros (0 for n=0)
- Notes: Implement void printBinary(unsigned int n).
- Solution: `src/q07_print_binary.c`

1. Triangular number test

- Problem: Implement int isTriangular(int n) to test whether n is triangular.
- Input: integer n
- Output: 1 if triangular, else 0
- Notes: Use k(k+1)/2 = n check; derive k via sqrt(8n+1).
- Solution: `src/q08_is_triangular.c`

1. Reverse an integer

- Problem: Read an integer and print its reverse.
- Input: integer n
- Output: reversed integer
- Notes: Handle negative by sign separately.
- Solution: `src/q09_reverse_integer.c`

1. Bubble sort

- Problem: Read an array of integers and sort it using bubble sort.
- Input: n and n integers
- Output: sorted array
- Notes: Ascending order; simple swaps; print before and after.
- Solution: `src/q10_bubble_sort.c`

1. Larger of even-sum vs odd-sum in array

- Problem: Input n numbers; compute sum of evens and sum of odds; print larger sum.
- Input: n and array of n integers
- Output: larger sum
- Notes: If equal, print either or both (we print the value once).
- Solution: `src/q11_even_odd_sum_array.c`

1. Billing with discount slabs

- Problem: Given prices and quantities of items, compute total, discount, and final price.
- Input: m (items), then m prices and m quantities
- Output: tabular line-items + total, discount, grand total
- Notes: Discount: <1000 → 5%, 1000–5000 → 10%, >5000 → 15%.
- Solution: `src/q12_billing_discount.c`

1. Volume calculator (cube, cuboid, sphere, cylinder, cone)

- Problem: Ask shape, read relevant inputs, compute and print volume.
- Input: menu + required values
- Output: volume
- Notes: Use separate functions; use double and π ≈ 3.14159.
- Solution: `src/q13_volume_calculator.c`

1. Three consecutive 5s

- Problem: Check if a number has three consecutive 5s; print YES/NO.
- Input: integer n
- Output: YES or NO
- Notes: Count consecutive digit 5s while scanning digits.
- Solution: `src/q14_three_consecutive_5s.c`

1. Patterns (a and b)

- Problem: Print two number patterns for height n.
- Input: n
- Output: Pattern (a): rows are 1, 1 2, …; Pattern (b): rows are 1, 2 2, 3 3 3, …
- Notes: Print both patterns one after another.
- Solution: `src/q15_patterns_a_b.c`

1. Count odd, even, and negative numbers (10 inputs)

- Problem: Read exactly 10 integers; count odd, even, negative.
- Input: 10 integers
- Output: counts
- Notes: 0 is even; negatives counted regardless of parity.
- Solution: `src/q16_count_odd_even_negative.c`

1. Gross salary by slabs

- Problem: Read basic salary; compute gross with HRA and DA by slabs.
- Input: basic (double)
- Output: HRA, DA, gross
- Notes: Slabs: 1–4000: 10%,50%; 4001–8000: 20%,60%; 8001–12000: 25%,70%; ≥12000: 30%,80%.
- Solution: `src/q17_gross_salary.c`

1. Fahrenheit→Celsius table using celsius()

- Problem: Implement celsius(f) and print table from -40 to 220 step 10.
- Input: none (range fixed)
- Output: table of F and C
- Notes: Use floating-point, 5.0/9.0 to avoid integer division.
- Solution: `src/q18_fahrenheit_to_celsius_table.c`

1. Electricity bill

- Problem: Compute charge: first 200 units @1, next 100 @1.5, beyond @2.
- Input: units (integer)
- Output: total charge
- Notes: Piecewise accumulation.
- Solution: `src/q19_electricity_bill.c`

1. Two-digit numbers with digit-sum multiple of 7

- Problem: Print all two-digit numbers whose digit-sum is a multiple of 7.
- Input/Output: none besides printing numbers
- Notes: Range 10..99; print on one line.
- Solution: `src/q20_two_digit_sum_digits_multiple_of_7.c`

1. Sum of products of consecutive numbers

- Problem: Read n and n integers; compute Σ a[i]*a[i+1].
- Input: n and array
- Output: sum as integer
- Notes: If n < 2, sum is 0.
- Solution: `src/q21_sum_of_products_of_consecutive.c`

1. Set operations (union, intersection, A-B, B-A)

- Problem: Read two sets (unique the inputs) and print results of set operations.
- Input: sizes and elements of A and B
- Output: union, intersection, A-B, B-A
- Notes: Use arrays up to 100; simple linear checks; keep unique elements.
- Solution: `src/q22_set_operations.c`

1. Reverse a list

- Problem: Read n and list of n elements; reverse in-place and print.
- Input: n and array
- Output: reversed array
- Notes: Use two-pointer swap.
- Solution: `src/q23_reverse_list.c`

1. String palindrome

- Problem: Read a string and check if it’s a palindrome.
- Input: a line of text
- Output: YES or NO
- Notes: Simple exact match (case-sensitive) for beginners.
- Solution: `src/q24_string_palindrome.c`

1. Triangle area and perimeter (functions)

- Problem: Implement functions perim(a,b,c) and area(a,b,c) and print results.
- Input: sides a, b, c
- Output: perimeter and area
- Notes: Heron’s formula: area = sqrt(s*(s-a)*(s-b)*(s-c)), s = (a+b+c)/2.
- Solution: `src/q25_triangle_area_perimeter.c`

1. Element-wise sum and product of arrays

- Problem: Given arrays A and B, compute C[i]=A[i]+B[i], D[i]=A[i]*B[i].
- Input: size (≤100) and A, B
- Output: arrays C and D
- Notes: Print results in one line each.
- Solution: `src/q26_array_sum_and_product.c`

1. Progressive income tax

- Problem: Compute tax with slabs: 0–2500:0%, 2500–5000:10%, 5000–10000:20%, 10000+:30%.
- Input: income x (double)
- Output: total tax
- Notes: Apply each slab progressively.
- Solution: `src/q27_income_tax_slabs.c`

1. Date in words (switch)

- Problem: Read d, m, y and print as “16th July, 1992”.
- Input: day, month, year
- Output: formatted date
- Notes: Use suffix rules (st, nd, rd, th) and switch for month.
- Solution: `src/q28_date_in_words.c`

1. Count “ugly” numbers up to n

- Problem: Count numbers in 1..n whose prime factors are only among {2,3,5}.
- Input: n
- Output: count (and optionally list)
- Notes: Some statements call these “ugly numbers”; examples in prompt are inconsistent—this uses the standard definition.
- Solution: `src/q29_ugly_number_count.c`

1. Bubble sort, insertion sort, binary search

- Problem: Implement both sorts and binary search; demonstrate via a simple menu.
- Input: n and array, then user chooses operation(s)
- Output: sorted arrays and/or search result index
- Notes: Keep functions small and clear; binary search on sorted array only.
- Solution: `src/q30_sorts_and_binary_search.c`

---

## Running in Code::Blocks (Linux)

- Open a new empty project or a Console application project.
- Add any `.c` file from `src/` you want to run to the project.
- Build and run. For math functions (e.g., `sqrt`), Code::Blocks usually links `-lm` automatically; if needed, add it in project build options.

If you want, I can generate a Code::Blocks project file later; for now, single-file runs are simplest for beginners.

---

Got a different definition or output format requirement? Tell me and I’ll tweak the solutions to match your exact spec.


