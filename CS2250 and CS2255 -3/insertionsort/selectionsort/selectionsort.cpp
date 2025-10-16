// 
// Justin Miller
// 5/14/2023
// Selection Sort
// Code is run in Visual Studio on Windows 11
// PC Specs AMD RYZEN R9 5950X | 32GB RAM | RTX3080TI
// Input files should be placed in the main program folder next to the .cpp file
//

#include <iostream>
#include<fstream>
#include<string>
#include<list>
#include<chrono>
#include<iomanip>


using namespace std;



void selectionSort(int array[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++)
            if (array[j] < array[minIndex])
                minIndex = j;
        swap(array[minIndex], array[i]);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}




int main()
{
    int count = 0;                                      

    string selectedInput;
    int selection;

    cout << "Please select input file" << '\n'
        << "1) 100 to 1" << '\n'
        << "2) 1000 to 1" << '\n'
        << "3) 10000 to 1" << '\n'
        << "4) 1 to 100" << '\n'
        << "5) 1 to 1000" << '\n'
        << "6) 1 to 10000" << '\n'
        << "7) Random 1 to 1000" << '\n'
        << "Input :";
        cin >> selection;

    switch (selection)              //A switch used for selecting the input file.  
    {
    case 1:
        selectedInput = "input1.txt";
        break;
    case 2:
        selectedInput = "input2.txt";
        break;
    case 3:
        selectedInput = "input3.txt";
        break;
    case 4:
        selectedInput = "input1-1.txt";
        break;
    case 5:
        selectedInput = "input2-2.txt";
        break;
    case 6:
        selectedInput = "input3-3.txt";
        break;
    case 7:
        selectedInput = "random_integers.txt";
        break;
    default:
        break;
    }


    ifstream inputFile(selectedInput);                  
    if (!inputFile.is_open()) {
        cout << "file not found";
        return 1;
    }
    //used to figure out how large to make the array based on input.  
    int arraySize = 0;
    int temp;
    while (inputFile >> temp) {
        arraySize++;
    }
    inputFile.close();


    int *inputArray = new int[arraySize];  

    ifstream inputFile2(selectedInput);
    if (!inputFile2.is_open()) {
        cout << "file not found";
        return 1;
    }

    for (int c = 0; c < arraySize; c++) {
        inputFile2 >> inputArray[c];
    }
    inputFile2.close();


    int size = arraySize;

    auto start = chrono::high_resolution_clock::now(); // Gets the current time before sorting

    selectionSort(inputArray,size);
    printArray(inputArray,size);

    auto end = chrono::high_resolution_clock::now();   // Gets the current time after sorting
    chrono::duration<double> elapsed = end - start;    //Calculates time elapsed for the sorting and prints it to consol
    cout << "Elapsed time: " << elapsed.count() << " seconds\n";
    
}
