#include <iostream>
#include <string>
using namespace std;

class student {
    public:
        string name;
        int age;
        string department;

        // Setter function to update private variable
        void setUgId(string ugId) {
            this->ugId = ugId;
        }

        // Getter function to retrieve private variable
        string getUgId() {
            return ugId;
        }

    private:
        string ugId;
};

int main() {
    student std;
    std.age = 21;
    std.department = "cst";
    std.name = "Trax";

    // Set and retrieve the private member using public methods
    std.setUgId("rax");

    cout << std.name << endl;
    cout << std.age << endl;
    cout << std.department << endl;
    cout << std.getUgId() << endl;

    return 0;
}