#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string Name;
    int Age;
public:
    void get() {
        cout << "Enter name: ";
        cin >> Name;
        cout << "Enter age: ";
        cin >> Age;
    }
    void display() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
};

class Transport : public Student {
private:
    string City;
    int academic_fee;
    int route;
public:
    Transport() {
        cout << "Enter city: ";
        cin >> City;
        cout << "Enter academic fee: ";
        cin >> academic_fee;
        cout << "Enter route: ";
        cin >> route;
    }
    int bus_fee() {
        return academic_fee * route;
    }
    void show() {
        display(); 
        cout << "City: " << City << endl;
        cout << "Academic Fee: " << academic_fee << endl;
        cout << "Route: " << route << endl;
        cout << "Bus Fee: " << bus_fee() << endl;
    }
};

int main() {
    Transport student_transport;
    student_transport.get(); 
    cout << "\nStudent Details with Transport Information:" << endl;
    student_transport.show();
    return 0;
}
