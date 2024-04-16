#include <iostream>
using namespace std;

class Test {
private:
    int data1, data2, data3;
public:
    void get_data(int d1) {
        data1 = d1;
    }

    void get_data(int d1, int d2) {
        data1 = d1;
        data2 = d2;
    }

    void get_data(int d1, int d2, int d3) {
        data1 = d1;
        data2 = d2;
        data3 = d3;
    }

    void show_data() {
        cout << "Data1: " << data1 << endl;
        cout << "Data2: " << data2 << endl;
        cout << "Data3: " << data3 << endl;
    }
};

int main() {
    Test obj1, obj2, obj3;

    obj1.get_data(10);

    obj2.get_data(20, 30);

    obj3.get_data(40, 50, 60);

    cout << "Object 1 Data:" << endl;
    obj1.show_data();
    cout << endl;

    cout << "Object 2 Data:" << endl;
    obj2.show_data();
    cout << endl;

    cout << "Object 3 Data:" << endl;
    obj3.show_data();
    cout << endl;

    return 0;
}
