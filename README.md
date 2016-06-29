# Assignment 2

## Objectives

To gain a solid understanding of Operators, System Input/Output, Conditional Statements, and Relational and Boolean Operators.

### Part 1

1. Write a program to check if a user-input number is positive or negative.  Assume the user enters a valid number, but that number may not be an integer.  File name is your choice, as long as it makes sense.

2. Write a calculator program `calculator.c` that prompts the user with a menu for operations (+, -, *, /, %), takes in 2 numbers, and performs the selected operation.  The menu selection should be interpreted using a switch statement.  You may assume the user will enter any 2 valid numbers.

3. Write a random number guesser `randnum.c` that generates a random integer between 1 and 10 (inclusive), prompts the user for a guess, and tells the user if they guessed correctly, too high, or too low.  You may assume the user enters a valid integer.  The code below will generate a random integer.  Note: You will need to include the stdlib.h and time.h header files.
```c
srand(time(0));
int r = rand();
```

### Part 2
In a text file `assignment2.txt`, answer the following questions:

1. Can two or more operators be combined in a single line of program code?

2. What are logical errors and how are they different from syntax errors?

3. What is the outcome of the following conditional statement if the value of variable x is 10? 
 ```x > = 10 && x < 25 && x != 12```

4. Is the following expression valid?  Why or why not? 
```0 < x < 15 ```

5. Which of the following are valid?  What is wrong with any that are invalid?
    1.  if (a > b) then c = 0;
    2.  if a > b { c = 0; }
    3.  if (a > b) c = 0;
    4.  if (a > b) c = 0 else b = 0;

### Submission Guidelines
Please include your name and a description in a comment at the top of your code files. Please also include your name at the top of your assignment1.txt file.

All files must be submitted via GitHub by 10:00am 6/30.
```
x >= 10 && x < 25 && x != 12
```
