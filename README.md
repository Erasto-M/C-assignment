# C Program: C fork() function

This C program demonstrates the use of the `fork()` function to create a parent and child process. It calculates the sum of even and odd numbers in an array using parallel processes.

# Program Description

The program performs the following steps:

1. Initializes an array of integers containing the numbers 1 to 10.

2. Uses `fork()` to create a child process.

3. In the parent process, it iterates over the array and calculates the sum of even numbers.

4. In the child process, it iterates over the array and calculates the sum of odd numbers.

5. The parent process outputs the sum of even numbers, while the child process outputs the sum of odd numbers.

# How to Run

To run the program, follow these steps:

1. Make sure you have a C compiler installed on your system (e.g., GCC).

2. Clone or download the program's source code from the repository.

3. Open a terminal or command prompt and navigate to the directory containing the program files.

4. Compile the program using the following command:
 ## gcc -o program_name program_name.c

Replace `program_name` with the desired name for the compiled program.

5. After successful compilation, run the program using the following command:
 ## ./program_name
   
6. The output will be displayed in the terminal, showing the sum of even numbers in the parent process and the sum of odd numbers in the child process.

## Example Output

Parent process
Sum of even no. is 30
Child process
Sum of odd no. is 25
## License

This program is licensed under the [MIT License](LICENSE).

Feel free to use, modify, and distribute this code as per the terms of the license.




