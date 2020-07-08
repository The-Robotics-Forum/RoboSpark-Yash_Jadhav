#include <iostream>
#include<cstring>
#include<string>

using namespace std;

class String
{
    string Student;
    int year;
    int roll;

    char *name;
    int lenght;

public:
    String()
    {
        lenght = 0;
        name = new char[lenght + 1];
    }

    String(char *n)
    {
        lenght = strlen(n);
        name = new char[lenght + 1];
        strcpy(name , n);
    }

    String operator+(String s);
    String operator*(int n);
    friend ostream &operator <<(ostream &out , String &s);
    friend istream &operator >>(istream &in , String &s);
    void display();


};
ostream &operator <<(ostream &out , String &s)
{
    out << "Name: " << s.name << endl << "Roll: " << s.roll << endl << "Year: " << s.year << endl;
}

istream &operator >>(istream &in , String &s)
{
    in >> s.name >> s.roll >> s.year;

}

void String::display()
{
    cout << name << endl << endl;
}
String String::operator+(String X)
{
    String str;
    strcpy(str.name , name);
    strcat(str.name , X.name);
    return str;

}
String String::operator*(int n)
{
    String st;
    while (n != 0)
    {
       strcat(st.name , name);
       n--;
    }
    return st;

}
int main()
{
   String stu , s;

   cout << "+Operator Overloaded :" << endl;
   String s1("String-1");
   String s2(" + String-2");
   String s3(" + String-3");
   s = s1+s2+s3;
   s.display();

   cout << "*Operator Overloaded :" << endl;
   String s4("Khushboo ");
   s = s4*4;
   s.display();

   cout << "<< and >> Operator Overload :" << endl;
   cout << "Enter Student's Name , RollNo and Year :" << endl;
   cin >> stu;
   cout << stu;


}
