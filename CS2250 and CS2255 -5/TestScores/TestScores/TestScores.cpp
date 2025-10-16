#include <iostream>
#include <iomanip>

using namespace std;
void bubbleSort(float[], int);
void swap(float&, float&);
float getAvarage(float[], float);


int main()
{
    int arraySize = 0;
    float avarage;
    cout << "How many test scores will you enter? ";
    cin >> arraySize;

    while (arraySize <= 0) {
        cout << "List size must be greater then 0."<< endl;
        cout << "Enter another number: ";
        cin >> arraySize;
    }
    
    float *gradesList = new float(arraySize);

    for (int count = 0; count < arraySize; count++) {
        cout << "Enter test score " << count +1 << ":";
        cin >> *(gradesList + count);
         if (*(gradesList + count) < 0) {
            cout << "Test score cannot be negative." << endl;
            cout << "Enter another score: ";
            cin >> *(gradesList + count);
        }

    }
    cout << "The test scores in ascending order, and their avarage, are:" << endl<<endl;
    cout << "Score"<<endl;
    cout << "-----" << endl;

    bubbleSort(gradesList, arraySize);
    for (int count = 0; arraySize > count; count++) {
        cout<<setprecision(4) << showpoint << *(gradesList + count) << endl;
    }
    avarage = getAvarage(gradesList, arraySize);
    cout << endl;
    cout << setprecision(4) << showpoint <<"Avarage score: " << avarage;
    
}
// Definition for bubbleSort 
void bubbleSort(float array[], int size)
{
    int max;
    int count;

    for (max = size - 1; max > 0; max--) {
        for (count = 0; count < max; count++) {
            if (array[count] > array[count + 1]) {
                swap(array[count], array[count + 1]);
            }
        }
    }
}


// Definition for sawp
void swap(float&x, float&y)
{
    int temp = x;
    x = y;
    y = temp;
}


//Definition for getAvarage
float getAvarage(float array[], float size)
{
    float sum = 0;
    float max = size;
    int count;
    float avarage;

    for (count = 0; count < max; count++) {
           sum += array[count];
    }
    avarage = sum / size;
    return avarage;  
}
