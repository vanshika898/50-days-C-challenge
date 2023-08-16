#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll_no;

public:
    Student(string n, int r) : name(n), roll_no(r) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

class SubjectMarks : public Student {
protected:
    string subject;
    int marks1;
    int marks2;

public:
    SubjectMarks(string n, int r, string s, int m1, int m2) : Student(n, r), subject(s), marks1(m1), marks2(m2) {}

    void display() {
        Student::display();
        cout << "Subject: " << subject << endl;
        cout << "Marks in 1st subject: " << marks1 << endl;
        cout << "Marks in 2nd subject: " << marks2 << endl;
    }
};

int main() {
    string name, subject;
    int roll_no, marks1, marks2;

    cout << "Enter student's name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll_no;
    cout << "Enter subject name: ";
    cin >> subject;
    cout << "Enter marks in 1st subject: ";
    cin >> marks1;
    cout << "Enter marks in 2nd subject: ";
    cin >> marks2;

    SubjectMarks student(name, roll_no, subject, marks1, marks2);

    cout << "\nStudent Details:\n";
    student.display();

    return 0;
}