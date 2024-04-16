#include <iostream>
using namespace std;

class BCA_OOPS {
private:
    int variable1;
    int variable2;
public:
    BCA_OOPS() {
        variable1 = 0;
        variable2 = 0;
    }

    BCA_OOPS(int v1, int v2) {
        this->variable1 = v1;
        this->variable2 = v2;
    }

    void display() {
        cout << "Variable 1: " << variable1 << endl;
        cout << "Variable 2: " << variable2 << endl;
    }

    int getVariable1() const {
        return variable1;
    }

    int getVariable2() const {
        return variable2;
    }

    void copyData(const BCA_OOPS& obj) {
        this->variable1 = obj.variable1;
        this->variable2 = obj.variable2;
    }

    void decrementValues() {
        if (variable1 >= 0 && variable1 <= 10)
            variable1 -= 2;
        else if (variable1 > 10)
            variable1 -= 5;

        if (variable2 >= 0 && variable2 <= 10)
            variable2 -= 2;
        else if (variable2 > 10)
            variable2 -= 5;
    }
};

int main() {
    BCA_OOPS obj1;
    BCA_OOPS obj2(15, 8);

    cout << "Values of obj1:" << endl;
    cout << "Variable 1: " << obj1.getVariable1() << endl;
    cout << "Variable 2: " << obj1.getVariable2() << endl;
    cout << endl;

    cout << "Values of obj2:" << endl;
    cout << "Variable 1: " << obj2.getVariable1() << endl;
    cout << "Variable 2: " << obj2.getVariable2() << endl;
    cout << endl;

    obj1.copyData(obj2);

    obj1.decrementValues();

    cout << "Values of obj1 after decrementing:" << endl;
    cout << "Variable 1: " << obj1.getVariable1() << endl;
    cout << "Variable 2: " << obj1.getVariable2() << endl;
    cout << endl;

    return 0;
}
