#include <iostream>

using namespace std;
void Swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void SelectionSort(int *arr, int size)
{
    int minIndex;

    for(int counter = 0; counter < size - 1; counter++)
    {
        minIndex = counter;
        for(int index = counter+1; index < size; index++)
        {
            if(arr[index] < arr[minIndex])
                minIndex = index;
        }

        if(counter != minIndex)
            Swap(arr[counter], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {5, 4, 2, 3, 1};
    SelectionSort(arr, 5);
    for(int index = 0; index < 5; index++){
        cout << arr[index] << endl;
    }
    return 0;
}
