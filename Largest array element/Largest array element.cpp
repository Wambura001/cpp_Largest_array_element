// Largest array element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Input elwments from user
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    //Initialize max as the first element of the array
    int max = arr[0];
    int maxIndex = 0;

    // Loop through the array to find the largest element and its position 
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }

    }

    // Print the largest element and its position 
    cout << "The largesy element in the array is: " << max << endl;
    cout << "It occurs  at position: " << maxIndex + 1 << endl;

    // free dynamically allocated memory 
    delete[] arr;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
