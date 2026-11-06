
#include <iostream>
using namespace std;

//Завдання 1
//void InitArray(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        *(arr + i) = rand() % 50;
//    }
//}
//
//void ShowArray(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << *(arr + i) << " ";
//    }
//    cout << endl;
//}
//
//void ChangeMinMax(int* arr, int size)
//{
//    int* max = &arr[0];
//    int* min = &arr[0];
//
//    for (int i = 0; i < size; i++)
//    {
//        if (*(arr + i) > *max)
//            max = arr + i;
//
//        if (*(arr + i) < *min)
//            min = arr + i;
//    }
//
//    int temp = *max;
//    *max = *min;
//    *min = temp;
//}
//
//int main()
//{
//    srand(time(0));
//
//    const int size = 10;
//    int arr[size];
//
//    InitArray(arr, size);
//
//    cout << "Original array: " << endl;
//    ShowArray(arr, size);
//
//    ChangeMinMax(arr, size);
//
//    cout << "Changed array: " << endl;
//    ShowArray(arr, size);
//}
//Завдання 2

void InitArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 50;
    }
}

void ShowArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void ChangeArray(int* arr, int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = temp;
    }
}

int main()
{
    srand(time(0));

    const int size = 10;
    int arr[size];

    InitArray(arr, size);

    cout << "Original array: " << endl;
    ShowArray(arr, size);

    ChangeArray(arr, size);

    cout << "Changed array: " << endl;
    ShowArray(arr, size);
}