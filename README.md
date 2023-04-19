A program for measuring the efficiency of sorting algorithms

This is a program that measures the efficiency of different sorting algorithms: bubble sort, quick sort, insertion sort, and merge sort.
Prerequisites

The program is written in C++ and uses the following libraries:

    iostream
    time.h
    chrono

Usage

    Clone the repository or download the source code
    Compile the program using a C++ compiler of your choice
    Run the program and it will automatically generate an array of 900 random integers between 1 and 1000
    The program will then sort the array using bubble sort, quick sort, and insertion sort algorithms and display the time taken by each algorithm to sort the array.

Implementation

The program uses a Sorting_expert class to define the different sorting algorithms. The class has a constructor that initializes the class with the array to be sorted. The get_Array() method is used to print the array to the console. The sorting algorithms are implemented as follows:

    Bubble Sort - This is implemented in the bubble_sort() method
    Quick Sort - This is implemented in the quick_sort() method using the part() method to partition the array
    Insertion Sort - This is implemented in the insert_sort() method

The program also includes a merge_sort_divide() method for the merge sort algorithm, but it is currently not implemented.

The program uses the chrono library to measure the time taken by each sorting algorithm to sort the array.
Contributing

Contributions are welcome! If you have any suggestions or improvements, please feel free to open an issue or pull request.
License

This program is licensed under the MIT License. See the LICENSE file for more information.
