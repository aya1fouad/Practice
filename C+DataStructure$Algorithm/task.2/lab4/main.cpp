#include <iostream>

using namespace std;
int Search(int *arr, int size, int num)
{
    int min = 0, max = size -1, mid;

    while(min <= max)
    {
        mid = (min + max) / 2;

        if(num == arr[mid])
            return mid;

        if(num > arr[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {5, 4, 2, 3, 1, 6 , 8};
    int index = Search(arr,7,6);
    cout << index << endl;



    return 0;
}
