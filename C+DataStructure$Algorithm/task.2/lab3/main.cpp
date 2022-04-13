#include <iostream>

using namespace std;
void Swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void InsertionSort(int *arr, int size)
{
    int key, index;
    for(int counter = 1; counter < size; counter++)
    {
        key = arr[counter];
        index = counter - 1;

        while(index >=0 && arr[index] > key)
        {
            arr[index + 1] = arr[index];
            index--;
        }
        arr[index + 1] = key;
    }
}

int main()
{
    int arr[] = {5, 4, 2, 3, 1};

    InsertionSort(arr, 5);

    for(int index = 0; index < 5; index++){
        cout << arr[index] << endl;
    }

    return 0;
}
