
This C++ program allows the user to input two 2x2 matrices, displays both matrices, and then shows their sum.

Features
Takes input for two matrices (matrix1 and matrix2).

Displays both matrices.

Adds corresponding elements to form a new matrix (matrix3).

Displays the resulting sum matrix.

How to Run
Save the code in a file, for example: matrix_addition.cpp.

Open a terminal or command prompt.

Compile the code:
g++ matrix_addition.cpp -o matrix_addition
Run the program:

bash
./matrix_addition
Example Output
yaml

Enter the value of 11: 1
Enter the value of 12: 2
Enter the value of 21: 3
Enter the value of 22: 4
1 2 
3 4 
Enter the value of 11: 5
Enter the value of 12: 6
Enter the value of 21: 7
Enter the value of 22: 8
5 6 
7 8 
Sum:
6 8 
10 12 
Notes
The program uses nested loops for handling matrix input, display, and addition.

Constants row and col are used for easy matrix size adjustments.

Neat separation of logic: input → display → addition → final display.

Author
Ibad Ali
