# Activity: Largest of Three Numbers

### Introduction

In this exercise you will practice working conditional statements and comparison operators in the C programming language.

### Starter Files

The starter files for this exercise are located in the `src` directory. Implement your code inside the following files:

1. `largest_num.c`
2. `main.c`

### Instructions
* In the file **largest_num.c**, complete the function **int find_max(int num1, int num2, int num3)**:
  * Begin by declaring an integer variable called **max**.
  * Use **if** and **else** statements to compare the three input values and assign the largest one to **max**.
  * Return **max** from the function.
    
* In **main.c**, use **printf** and **scanf** to interact with the user:
  * Prompt the user to enter three numbers.
  * Call the **find_max** function with the input values and display the result inside a **printf** message.

### Run Checks

To check your work, run the following command:

```bash
$ make checker
```

This will run the tests and output the results.

### Output

If all checks pass, you will see the following output:

```bash
✅ Test 1 - Max of positive numbers
../.github/checker/test/test_1.c:12:test_1:PASS

✅ Test 2 - Max of negative numbers
../.github/checker/test/test_2.c:12:test_2:PASS

✅ Test 3 - Max of positive and negative numbers
../.github/checker/test/test_3.c:12:test_3:PASS

✅ Test 4 - Max of repeating numbers
../.github/checker/test/test_4.c:12:test_4:PASS

Ok:                 4
Expected Fail:      0
Fail:               0
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

If there are failing checks you will see summary of the failing tests:

```
❌ Test 1 - Max of positive numbers
../.github/checker/tests/test_1.c:13:test_1:FAIL: Expected 3 Was 1

❌ Test 2 - Max of negative numbers
../.github/checker/tests/test_2.c:14:test_2:FAIL: Expected -2 Was -4

❌ Test 3 - Max of positive and negative numbers
../.github/checker/tests/test_3.c:14:test_3:FAIL: Expected 4 Was 3

❌ Test 4 - Max of repeating numbers
../.github/checker/tests/test_4.c:14:test_4:FAIL: Expected 1 Was 0

Summary of Failures:

1/4 Test 1 - Max of positive numbers                          FAIL            0.14s   exit status 2
2/4 Test 2 - Max of negative numbers                          FAIL            0.25s   exit status 2
3/4 Test 3 - Max of positive and negative numbers             FAIL            0.35s   exit status 2
4/4 Test 4 - Max of repeating numbers                         FAIL            0.46s   exit status 2

Ok:                 0
Expected Fail:      0
Fail:               4
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

In order to complete the exercise all tests must pass.