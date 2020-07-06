#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    double cgpa;
    int year;
    int total;
    int *sub = new int[5];

   Student()
    {
        cout << "Default Constructor Called\n" << endl;
        roll = 0;
        cgpa = -1;
        year = 0;
        total = 0;

    }

    int TotalMarks(int *sub, int total)
    {
       for(int i = 0 ; i <= 4 ; i++)
        {
           total = total + sub[i];
        }
        return total;
    }

    double CalculateCgpa(int *sub, double cgpa)
    {
        double SGrade[5];
        double Sum = 0;
        for(int i = 0 ; i <= 4 ; i++)
        {
           SGrade[i] = sub[i]/10;
        }
        for(int i = 0 ; i <= 4 ; i++)
        {
           Sum += SGrade[i];
        }
        cgpa = Sum/5;
        //cout << cgpa ;
        return cgpa;
    }

    void InputDetails()
    {
        cout << "Give Details :- " << endl;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Roll No. :";
        cin >> roll;
        cout << "Enter Year : ";
        cin >> year;
        cout << "Enter 5 Subjects Marks out of 100:-" << endl;
        for(int i = 0 ; i <= 4 ; i++)
        {
           cout << "Sub " << i+1 <<" : ";
           cin >> sub[i];
        }
        cout << endl;
    }

    void PrintDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Roll No : " << roll << endl;
        cout << "Year : " << year << endl;
        cout << "Total : " << total << endl;
        cout << "CGPA : " << cgpa << endl;
//        for(int i = 0 ; i <= 4 ; i++)
//        {
//           cout << "Sub" << i+1 << "Marks: " << sub[i] << endl;
//        }
    }

    ~Student()
    {
        cout << "Destructor";
        delete [] sub;
    }
};
int main()
{
    Student s;
    s.InputDetails();
    s.total = s.TotalMarks(s.sub, s.total);
    s.cgpa = s.CalculateCgpa(s.sub, s.cgpa);
    s.PrintDetails();
}
