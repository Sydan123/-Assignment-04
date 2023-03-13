#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee(string n, int i, string d, string p) {
        name = n;
        idNumber = i;
        department = d;
        position = p;
    }
    Employee(string n, int i) {
        name = n;
        idNumber = i;
        department = "";
        position = "";
    }
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }
    void setName(string n) {
        name = n;
    }
    void setIdNumber(int i) {
        idNumber = i;
    }
    void setDepartment(string d) {
        department = d;
    }
    void setPosition(string p) {
        position = p;
    }
    string getName() const {
        return name;
    }
    int getIdNumber() const {
        return idNumber;
    }
    string getDepartment() const {
        return department;
    }
    string getPosition() const {
        return position;
    }
};

int main() {
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout << "Name\t\tID Number\tDepartment\tPosition\n";
    cout << "--------------------------------------------------------------\n";
    cout << employee1.getName() << "\t" << employee1.getIdNumber() << "\t\t" << employee1.getDepartment() << "\t\t" << employee1.getPosition() << endl;
    cout << employee2.getName() << "\t" << employee2.getIdNumber() << "\t\t" << employee2.getDepartment() << "\t\t\t" << employee2.getPosition() << endl;
    cout << employee3.getName() << "\t\t" << employee3.getIdNumber() << "\t\t" << employee3.getDepartment() << "\t" << employee3.getPosition() << endl;

    return 0;
}
