#include <iostream>
using namespace std;

class Biodata
{
public:
    Biodata(){}
    virtual void read(){
    cout << "Base Class";
    }
};

class Professional : public Biodata
{
protected:
    string name_of_oranization;
    string job_profile;
    string project;
public:
    Professional(){}
    void read();
};
void Professional::read()
{
        cout << "Enter Name of Organization : ";
        std::getline(std::cin.ignore(),name_of_oranization);
        cout << "Enter Job Profile : ";
        std::getline(std::cin.ignore(),job_profile);
        cout << "Enter Project : ";
        std::getline(std::cin.ignore(),project);
}

class Academic:public Biodata
{
protected:
    int year_of_passing;
    double cgpa;
    string college_name;
    string branch;
public:
    Academic(){}
    void read();
};
void Academic::read()
{
    cout << "Enter Year of Passing : ";
    cin >> year_of_passing;
    cout << "Enter Cgpa : ";
    cin >> cgpa;
    cout << "Enter College name : ";
    std::getline(std::cin.ignore(),college_name);
    cout << "Branch : ";
    std::getline(std::cin.ignore(),branch);
}

class Personal:public Biodata
{
protected:
    string Name;
    string Surname;
    string Address;
    int mob;
    string dob;
public:
    Personal(){}
    void read();
};
void Personal::read()
{
    cout << "Enter Name : ";
    cin >> Name;
    cout << "Enter Surname : ";
    cin >> Surname;
    cout << "Enter Address : ";
    std::getline(std::cin.ignore(),Address);
    cout << "Enter mobile no : ";
    cin >> mob;
    cout << "Enter Date of Birth : ";
    std::getline(std::cin.ignore(),dob);
}

int main()
{
    Biodata *b1 , b2;
    Academic aca;
    Professional pro;
    Personal per;
    b1 = &pro;
    cout << "Professional Details" << endl;
    b1->read();
    b1 = &per;
    cout << "\n\nPersonal Details" << endl;
    b1->read();
    b1 = &aca;
    cout << "\n\nAcademic Details" << endl;
    b1->read();
}
