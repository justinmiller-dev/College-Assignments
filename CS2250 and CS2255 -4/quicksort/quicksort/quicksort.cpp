// 
// Justin Miller
// 5/14/2023
// Quick Sort
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
#include <cstdlib>
#include <ctime>


using namespace std;

void partition(int array[], int low, int high) {         //picks a random element in the array and swaps it to the end of the array so that quick sort grabs it as the pivot.
    int randomIndex = low + rand() % (high - low + 1);
    int pivot = array[randomIndex];
    swap(array[randomIndex], array[high]);  
}


void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pivot = array[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; j++) {
            if (array[j] <= pivot) {
                i++;
                swap(array[i], array[j]);
            }
        }
        swap(array[i + 1], array[high]);
        int partitionIndex = i + 1;
        quickSort(array, low, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, high);
    }
}

void printArray(int array[], int size) {
    for (int i = 1; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}




int main()
{
    int count = 0;

    srand(time(NULL)); //seed for random number

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


    int* inputArray = new int[arraySize];

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

    partition(inputArray, 0, arraySize);
    quickSort(inputArray,0, size - 1);
    printArray(inputArray, size);

    auto end = chrono::high_resolution_clock::now();   // Gets the current time after sorting
    chrono::duration<double> elapsed = end - start;    //Calculates time elapsed for the sorting and prints it to consol
    cout << "Elapsed time: " << elapsed.count() << " seconds\n";

}
