# Project2-CPSC535
ChoosingHashFct

## Group members:

Aditya Bhavikatti adityabhavikatti@csu.fullerton.edu

Manikanta Reddy Nayini manikantareddy@csu.fullerton.edu

Shouri Reddy Tumma tumma@csu.fullerton.edu

## Project2 Java Update:
As we cound not program the project in C++, we completed the project in Java using Eclipse environment.

Please do take a look at the ItemCollection.cpp file for the changes we tried in the program for the addItem function and the bestHashing function.

## Execution Instructions:
 The project file is named AlgoProject2.java.

 To compile the project execute command:
 ```
 javac AlgoProject2.java
 ```
 
 To execute the project execute command:
 ```
 java AlgoProject2.java in1.txt
 ```

## Psuedocode

- The file path is taken as command line argument.
- BufferedReader is used to read the content of the files.
- The barcodes are extracted from the file and stored in 2-D array.
- The 2-D array is passed as an argument to the fun() function.
- Seven Hash Tables are created and initialized.
- Based on the digits in the barcode, they are stored in the respective Hash Tables.
- A new 2-D array is created to count the frequencies of the barcode in the Hash Table.
- Then maximum and minimum values of each Hash Table are created and the value of the best Hash Table is stored in the bestsofar variable.

- Time complexity: The time complexity of this project is O(n^2).



## Screenshots

### Topological Sort

    in1.txt and in2.txt
    
   <img src="/Screenshot.jpeg?raw=true">