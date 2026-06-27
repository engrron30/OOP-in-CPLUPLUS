#include <iostream>
#include <string>
using namespace std;

// Encapsulation
//      - granting access to private data only through 
//      controlled public interfaces
class Employee {
    private:
        string name;
        int age;

    public:

        void print_emply_dtls(void) {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

        /* mutators */
        void set_emply_name(string name)   { this->name = name; }
        void set_emply_age(int age)        { this->age = age; }
};

int main()
{
    Employee Employee_1;
    Employee_1.set_emply_name("Ronald");
    Employee_1.set_emply_age(26);
    Employee_1.print_emply_dtls();

    Employee Employee_2;
    Employee_2.set_emply_name("Rosete");
    Employee_2.set_emply_age(27);
    Employee_2.print_emply_dtls();

    return 0;
}
