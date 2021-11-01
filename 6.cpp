#include <iostream>

using namespace std;

class Rectangle {
    public:
        float length, breadth;
    public:
        Rectangle() {
            cout << "\n\n*** Inside the Constructor **** \n\n";
            length = 2;
            breadth = 4;
        }
    public:
        ~Rectangle() {
            cout << "\n\n*** Inside the Destructor **** \n\n";
        }
};

int main() {

    cout << "\nCalling the default Constructor of the Rectangle class to initialize the object.\n\n";

    Rectangle rect;

    cout << "\nThe Length of the Rectangle set by the Constructor is = " << rect.length << "\n\n";

    cout << "\nThe Breadth of the Rectangle set by the Constructor is = " << rect.breadth << "\n\n";

    return 0;
}
