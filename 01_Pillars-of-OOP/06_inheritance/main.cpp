#include <iostream>
#include <string>
using namespace std;

// Inheritance
//      - create derived classes that inherite properties from
//      parent class


// Employee is a parent class
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

// Cognizant is a derived class
// For Cognizant constructor, inherit the Employee constructor
class Cognizant : public Employee {
    private:
        string job;

    public:
        Cognizant(string name, int age, string job) : Employee(name, age) {
            this->job = job;
        }

        string get_cognizant_job(void)      { return this->job; }
};

int main()
{
    Employee Employee_1("Ronald", 26);
    cout << "Name: " << Employee_1.get_emply_name() << endl;
    cout << "Age: " << Employee_1.get_emply_age() << endl;

    Employee Employee_2("Rosete", 27);
    cout << "Name: " << Employee_1.get_emply_name() << endl;
    cout << "Age: " << Employee_1.get_emply_age() << endl;

    Cognizant cognizant_1("Ron", 28, "Software Engineer");
    cout << "Name: " << cognizant_1.get_emply_name() << endl;
    cout << "Job: " << cognizant_1.get_cognizant_job() << endl;
    return 0;
}
