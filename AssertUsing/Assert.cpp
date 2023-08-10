#include <iostream>
#include <cassert>
using namespace std;

float travelTime (float distance, float speed) {
    assert(speed > 0);
    return distance / speed;
}

int main() {
    float distance, speed;
    cout << "Input a distance and speed: ";
    cin >> distance >> speed;
    cout << "Time: " << travelTime (distance, speed) << "\n";
    system("pause");
}