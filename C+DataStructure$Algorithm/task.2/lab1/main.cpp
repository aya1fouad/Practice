#include <iostream>

using namespace std;
void Swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void BubbleSort(int *arr, int size)
{
    int sorted = 0;

    for(int counter = 0; counter < size - 1 && !sorted; counter ++)
    {
        sorted = 1;
        for(int index = 0; index < size - 1 - counter; index++)
        {
            if(arr[index] > arr[index + 1])
            {
                Swap(arr[index], arr[index + 1]);
                sorted = 0;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 4, 2, 3, 1};
    BubbleSort(arr, 5);
    for(int index = 0; index < 5; index++){
        cout << arr[index] << endl;
    }

    return 0;
}
