#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int count = 1;
    while (count < size)
    {
        for (int i = 0; i < size - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }
    cout << "Sorted array\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}