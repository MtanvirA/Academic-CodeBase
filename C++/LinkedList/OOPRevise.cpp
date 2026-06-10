#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    float cgpa;
    Student(string name, int roll, float cgpa)
    {
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};

void change(Student* s1)
{
    s1 -> cgpa = 3.6;
}

int main()
{
    // Student s1("Tanvir", 68, 3.77);
    // cout << s1.name << endl;
    // change(&s1);
    // cout << s1.name << endl;
    Student* s1 = new Student("Tanvir", 68, 3.77);
    cout << s1->cgpa << endl;
    change(s1);
    cout << s1->cgpa << endl;

}