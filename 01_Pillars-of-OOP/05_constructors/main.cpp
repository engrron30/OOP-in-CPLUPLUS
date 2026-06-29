#include <iostream>
#include <string>
using namespace std;

// Constructor
//      - special methods that are invoked when an object is created
class Employee {
    private:
        string name;
        int age;

    public:

        Employee(string name, int age) {
            cout << "EMPLOYEE CONSTRUCTOR CALLED" << endl;
            this->name = name;
            this->age = age;
        }

        ~Employee() {
            cout << "EMPLOYEE DESTRUCTOR CALLED" << endl;
        }

        void print_emply_dtls(void) {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

        /* accessor */
        string  get_emply_name(void)        { return this->name; }
        int     get_emply_age(void)         { return this->age; }

        /* mutators */
        void set_emply_name(string name)   { this->name = name; }
        void set_emply_age(int age)        { this->age = age; }
};

int main()
{
    Employee Employee_1("Ronald", 26);
    cout << "Name: " << Employee_1.get_emply_name() << endl;
    cout << "Age: " << Employee_1.get_emply_age() << endl;

    Employee Employee_2("Rosete", 27);
    cout << "Name: " << Employee_1.get_emply_name() << endl;
    cout << "Age: " << Employee_1.get_emply_age() << endl;

    return 0;
}
