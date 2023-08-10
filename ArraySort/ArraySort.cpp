#include <iostream>
using namespace std;

int main() {
    double array[15] = {};
    cout << "Input array elements:\n";
    for (int i = 0; i < 15; i++)  {cin >> array[i];}
    for (int j = 1; j < 15; j++)
    {
        for (int i = 0; i < 14; i++)
        {
            if (array[i] > array[i + 1]) {
                double n = array[i];
                array[i] = array[i + 1];
                array[i + 1] = n;
            }
        }   
    }
    cout << "Sorted array:\n";
    for (int i = 14; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    system("pause");
}