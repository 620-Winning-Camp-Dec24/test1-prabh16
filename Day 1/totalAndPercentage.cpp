// CAP that demonstrates inheritance by defining
// a. a base class student to store details like roll no. and name
// b. a derived class result to store marks for three subjects and calculate the total and percentage

#include <iostream>
using namespace std;
class Student
{
public:
    int rollNumber;
    string name;

    void studentDetails()
    {
        cout << "Enter roll number: " << endl;
        cin >> rollNumber;
        cout << "Enter name of the student: " << endl;
        cin >> name;
    }
    void displayStudentDetails()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

class Result : public Student
{
public:
    int physics;
    int chemistry;
    int mathematics;
    void marks()
    {
        cout << "Enter marks of physics: " << endl;
        cin >> physics;
        cout << "Enter marks of chemistry: " << endl;
        cin >> chemistry;
        cout << "Enter marks of mathematics: " << endl;
        cin >> mathematics;
    }

    void getMarks()
    {
        cout << "Marks of physics: " << physics << endl;
        cout << "Marks of chemistry: " << chemistry << endl;
        cout << "Marks of mathematics: " << mathematics << endl;
    }

    void totalMarksAndPercentage()
    {
        int totalMarks = physics + chemistry + mathematics;
        cout << "Total Marks of student are: " << totalMarks << endl;

        int maxMarks;
        cout << "Enter maximum Marks: " << endl;
        cin >> maxMarks;

        float per = ((float)totalMarks / maxMarks) * 100;

        cout << "Percentage is: " << per << endl;
    }
};

int main()
{
    Student student;
    student.studentDetails();
    student.displayStudentDetails();
    Result result;
    result.marks();
    result.getMarks();
    result.totalMarksAndPercentage();
    return 0;
}