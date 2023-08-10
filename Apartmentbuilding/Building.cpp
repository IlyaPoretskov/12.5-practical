#include <iostream>
#include <string>
using namespace std;

int main() {
    int numbers[3] = {};
    string people[10] = {};
    for (int i = 0; i < 10; i++)
    {
        cout << "← ";
        cin >> people[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "←";
        cin >> numbers[i];
        if (numbers[i] > 0 && numbers[i] < 11) {
        cout << "→" << people[numbers[i] - 1] << endl;
        } else {
            cout << "Incorrect!";
            system("pause");
            return 0;
        }
    }
    cout << "\n";
    system("pause");
}