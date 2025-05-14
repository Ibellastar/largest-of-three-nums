# Assignment: Largest of Three Numbers

## Introduction

In this assignment you will practice working with conditional statements and comparison operators in the C programming language.

## Starter Files

The starter files for this exercise are located in the `src` directory. Implement your code inside the following file:

1. `largest_num.c`

## Instructions
* In the file **largest_num.c**, complete the function **int find_max(int num1, int num2, int num3)**:
  * Begin by declaring an integer variable called **max**.
  * Use **if** and **else** statements to compare the three input values and assign the largest one to **max**.
  * Return **max** from the function.

## Run Checks
To check your work, run the following command:

```bash
$ make checker
```
This will run the tests and output the results.

### Terminal Output 
If all checks pass, you will see the following output:

```bash
1/4 Test 1 - Max of positive numbers                     OK              0.01s
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
find_max(1, 2, 3)
../.github/checker/test/test_1.c:13:test_1:PASS
find_max(3, 1, 2)
../.github/checker/test/test_1.c:20:test_2:PASS
find_max(1, 4, 14)
../.github/checker/test/test_1.c:27:test_3:PASS
find_max(1, 9, 7)
../.github/checker/test/test_1.c:34:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/4 Test 2 - Max of negative numbers                     OK              0.00s
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
find_max(-3, -4, -2)
../.github/checker/test/test_2.c:12:test_1:PASS
find_max(-1, -2, -3)
../.github/checker/test/test_2.c:19:test_2:PASS
find_max(-3, -4, -14)
../.github/checker/test/test_2.c:26:test_3:PASS
find_max(-5, -9, -7)
../.github/checker/test/test_2.c:33:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/4 Test 3 - Max of positive and negative numbers        OK              0.00s
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
find_max(3, 4, -2)
../.github/checker/test/test_3.c:12:test_1:PASS
find_max(1, -2, 3)
../.github/checker/test/test_3.c:19:test_2:PASS
find_max(3, -4, 14)
../.github/checker/test/test_3.c:26:test_3:PASS
find_max(5, -9, 7)
../.github/checker/test/test_3.c:33:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

4/4 Test 4 - Max of repeating numbers                    OK              0.00s
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
find_max(0, 0, 1)
../.github/checker/test/test_4.c:12:test_1:PASS
find_max(1, 1, 1)
../.github/checker/test/test_4.c:19:test_2:PASS
find_max(7, 7, -7)
../.github/checker/test/test_4.c:26:test_3:PASS
find_max(5, 5, 6)
../.github/checker/test/test_4.c:33:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――


Ok:                 4   
Expected Fail:      0   
Fail:               0   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0   
```
If there are failing checks you will see summary of the failing tests:
```bash
1/4 Test 1 - Max of positive numbers                     FAIL            0.01s   exit status 3
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
find_max(1, 2, 3)
../.github/checker/test/test_1.c:16:test_1:FAIL: Expected 3 Was 1
find_max(3, 1, 2)
../.github/checker/test/test_1.c:20:test_2:PASS
find_max(1, 4, 14)
../.github/checker/test/test_1.c:30:test_3:FAIL: Expected 14 Was 1
find_max(1, 9, 7)
../.github/checker/test/test_1.c:37:test_4:FAIL: Expected 9 Was 1

-----------------------
4 Tests 3 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/4 Test 2 - Max of negative numbers                     FAIL            0.00s   exit status 1
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
find_max(-3, -4, -2)
../.github/checker/test/test_2.c:15:test_1:FAIL: Expected -2 Was -3
find_max(-1, -2, -3)
../.github/checker/test/test_2.c:19:test_2:PASS
find_max(-3, -4, -14)
../.github/checker/test/test_2.c:26:test_3:PASS
find_max(-5, -9, -7)
../.github/checker/test/test_2.c:33:test_4:PASS

-----------------------
4 Tests 1 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/4 Test 3 - Max of positive and negative numbers        FAIL            0.00s   exit status 4
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
find_max(3, 4, -2)
../.github/checker/test/test_3.c:15:test_1:FAIL: Expected 4 Was 3
find_max(1, -2, 3)
../.github/checker/test/test_3.c:22:test_2:FAIL: Expected 3 Was 1
find_max(3, -4, 14)
../.github/checker/test/test_3.c:29:test_3:FAIL: Expected 14 Was 3
find_max(5, -9, 7)
../.github/checker/test/test_3.c:36:test_4:FAIL: Expected 7 Was 5

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

4/4 Test 4 - Max of repeating numbers                    FAIL            0.00s   exit status 2
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
find_max(0, 0, 1)
../.github/checker/test/test_4.c:15:test_1:FAIL: Expected 1 Was 0
find_max(1, 1, 1)
../.github/checker/test/test_4.c:19:test_2:PASS
find_max(7, 7, -7)
../.github/checker/test/test_4.c:26:test_3:PASS
find_max(5, 5, 6)
../.github/checker/test/test_4.c:36:test_4:FAIL: Expected 6 Was 5

-----------------------
4 Tests 2 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――


Summary of Failures:

1/4 Test 1 - Max of positive numbers              FAIL            0.01s   exit status 3
2/4 Test 2 - Max of negative numbers              FAIL            0.00s   exit status 1
3/4 Test 3 - Max of positive and negative numbers FAIL            0.00s   exit status 4
4/4 Test 4 - Max of repeating numbers             FAIL            0.00s   exit status 2

Ok:                 0   
Expected Fail:      0   
Fail:               4   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0 
```
### Github Output
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

In order to complete the assignment all tests must pass.

## Optional Chanllenge
Use printf and scanf to make your program interactive. 
### Starter Files
Implement your code inside the file:
1. `main.c`

### Instructions
* In **main.c**, use **printf** and **scanf** to interact with the user:
  * Prompt the user to enter three numbers.
  * Call the **find_max** function with the input values and display the result inside a **printf** message.

### Compile the Program
To compile your program, fun the following command:
```bash
$ gcc -o largest_num src/largest_num.c src/main.c
$ ./largest_num
```

### Command-Line Interface
When you run the compiled program, it should prompt the user to enter three numbers. 
```bash
Enter three numbers: 17 45 -312
The largest number is: 45
```
The user The user inputs three integers separated by spaces (e.g., 17 45 -312), and presses Enter.
The program calculates the largest number and outputs the result. 