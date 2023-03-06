// Weerk_14_Task_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void Separation(int* arr, int size, int* &poz, int& countPoz, int* &neg, int& countNeg, int* &nul, int& countNul);
void InitArray(int *arr, int size);
void PrintArray(int* arr, int size);

int main()
{
    const int size = 10;

    int Array[size];

    InitArray(Array, size);
    PrintArray(Array, size);

    int *POZ=0, *NEG=0, *NUL=0;

    int sizeP, sizeN, sizeZ;

    Separation(Array, size, POZ, sizeP, NEG, sizeN, NUL, sizeZ);

    PrintArray(POZ, sizeP);
    
    std::cout << "Hello World!\n";
}

void PrintArray(int* arr, int size) {

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << "\t";
    }

}

void InitArray(int* arr, int size) {

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10 - 5;
    }


}
void Separation(int* arr, int size, int *&poz, int &countPoz, int *&neg, int &countNeg, int *&nul, int &countNul) {

    
    for (int i = 0; i < size; i++) {

        if (arr[i] > 0) {
            countPoz++;
        }
        else if (arr[i] < 0) {
            countNeg++;
        }
        else {
            countNul++;
        }
    }

    poz = new int [countPoz];
    neg = new int [countNeg];
    nul = new int [countNul];

   int  countP = 0, countN = 0, countNu = 0;

    for (int i = 0; i < size; i++) {

        if (arr[i] > 0) {
            poz[countP] = arr[i];
            countP++;
        }
        else if (arr[i] < 0) {
            neg[countN] = arr[i];
            countN++;
        }
        else {
            nul[countNu] = arr[i];
            countNu++;
        }
    }
}