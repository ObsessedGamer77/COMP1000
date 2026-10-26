#include <iostream>
#include <math.h>
using namespace std;

float calculateDistance(float x1, float y1, float x2, float y2);

int main() {
    float x1, y1 = 0;
    float x2, y2;

    cout << "Enter the x coordinate of the point: ";
    cin >> x2;
    cout << "Enter the y coordinate of the point: ";
    cin >> y2;

    cout << calculateDistance(x1, y1, x2, y2);
}

float calculateDistance(float x1, float y1, float x2, float y2) {
    float dist;
    dist = sqrt(x2 * x2 + y2 * y2);
    return dist;
}