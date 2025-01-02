### Project: File Processing and Command Line Interface in C  

**Description:**  
For this assignment, I developed a C program that reads a file containing an arbitrary number of positive integers (one per line) and calculates the following metrics:  
- Count of integers  
- Total (sum of all integers)  
- Average of the integers  

The program writes these results to standard error (`stderr`) and employs a function to handle the aggregation logic. Command-line arguments (`argc` and `argv`) were used to pass the input file name to the program using the `-i` flag.


To extend functionality, I added support for calculating and displaying the maximum value of the integers in the file. This was implemented using the `unsigned long int` data type to handle large values effectively without relying on arbitrary precision arithmetic.

**Tools and Techniques Used:**  
- **Programming Language:** C  
- **File I/O:** Reading integers from a file  
- **Standard Streams:** Output to `stderr` and `stdout`  
- **Command-Line Arguments:** Parsing and handling input file names via `-i` flag  
- **Data Types:** Leveraged `unsigned long int` for handling large integer values  

This project provided practical experience in file processing, function usage, and command-line programming, as well as applying best practices in handling large datasets.
