<h1>Program for measuring the efficiency of sorting algorithms</h1>

<p>This is a program that measures the efficiency of different sorting algorithms: bubble sort, quick sort, insertion sort</p>

<h2>Prerequisites</h2>

<p>The program is written in C++ and uses the following libraries:</p>

<ul>
  <li>iostream</li>
  <li>time.h</li>
  <li>chrono</li>
</ul>

<h2>Usage</h2>

<ol>
  <li>Clone the repository or download the source code</li>
  <li>Compile the program using a C++ compiler of your choice</li>
  <li>Run the program and it will automatically generate an array of 900 random integers between 1 and 1000</li>
  <li>The program will then sort the array using bubble sort, quick sort, and insertion sort algorithms and display the time taken by each algorithm to sort the array.</li>
</ol>

<h2>Implementation</h2>

<p>The program uses a Sorting_expert class to define the different sorting algorithms. The class has a constructor that initializes the class with the array to be sorted. The get_Array() method is used to print the array to the console. The sorting algorithms are implemented as follows:</p>

<ul>
  <li>Bubble Sort - This is implemented in the bubble_sort() method</li>
  <li>Quick Sort - This is implemented in the quick_sort() method using the part() method to partition the array</li>
  <li>Insertion Sort - This is implemented in the insert_sort() method</li>
</ul>

<p>The program also includes a merge_sort_divide() method for the merge sort algorithm, but it is currently not implemented.</p>

<p>The program uses the chrono library to measure the time taken by each sorting algorithm to sort the array.</p>

<h2>Contributing</h2>

<p>Contributions are welcome! If you have any suggestions or improvements, please feel free to open an issue or pull request.</p>

<h2>License</h2>

<p>This program is licensed under the MIT License. See the LICENSE file for more information.</p>
