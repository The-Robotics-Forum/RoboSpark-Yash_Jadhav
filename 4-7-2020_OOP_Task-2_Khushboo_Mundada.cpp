#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int year;
    double cgpa;

    Student()
    {

    }


    void showRank(int a)
    {
        cout << "Method with only int argument" << endl;
        cout << "Rank : " << a << endl << endl;
    }

    void showRank(string name)
    {
        cout << "Method with only string argument" << endl;
        PrintDetails();
        cout << "No Rank !!!" << endl << endl;
    }

    void showRank(string name , int a)
    {
        cout << "Method with both argument" << endl;
        PrintDetails();
        cout << "Rank : " << a << endl << endl;
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
        cout << "Enter Cgpa : ";
        cin >> cgpa;
        cout << endl;
    }

    void PrintDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Roll No : " << roll << endl;
        cout << "Year : " << year << endl;
        cout << "CGPA : " << cgpa << endl;
    }
};

int main()
{
    int rank;
    cout << "Enter Rank : ";
    cin >> rank;
    Student s;
    s.InputDetails();
    s.showRank(rank);
    s.showRank(s.name);
    s.showRank(s.name,rank);

}
