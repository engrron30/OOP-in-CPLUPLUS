#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string name;
        int age;

        void print_emply_dtls(void) {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main()
{
    Employee Employee_1;
    Employee_1.name = "Ronald";
    Employee_1.age = 26;
    Employee_1.print_emply_dtls();

    Employee Employee_2;
    Employee_2.name = "Rosete";
    Employee_2.age = 27;
    Employee_2.print_emply_dtls();

    return 0;
}
