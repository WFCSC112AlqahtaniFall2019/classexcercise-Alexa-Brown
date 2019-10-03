#include <iostream>
#include "Faculty.h"
using namespace std;

/* 2) implement each setter and getter */

int main() {
    //Faculty prof;
    string name = "Joe";
    string degree = "Science";
    string birthday = "April 1";
    string address = "North Carolina";
    string id = "1234";
    double salary = 1234;
    double ssn = 94949;

    Faculty prof (salary, address, birthday, degree, name, id, ssn);

    prof.setName(name);
    prof.setDegree(degree);
    prof.setBirthday(birthday);
    prof.setAddress(address);
    prof.setID(id);
    prof.setSalary(salary);

    cout << "Name: " << prof.getName() <<endl;
    cout << "Degree: " << prof.getDegree() <<endl;
    cout << "Birthday: " << prof.getBirthday()<<endl;
    cout << "Address: " << prof.getAddress()<<endl;
    cout << "ID: " << prof.getIdD()<<endl;
    cout << "Salary: " << prof.getIdD();

/* 3) use the implemented methods to fill prof' info and print them out */

    return 0;
}





/* before adding constructors
*
*
* #include <iostream>
using namespace std;

class Faculty{
public:
   string name;
   string id;
   string address;
   string DoB;
   string degree;
//getter and setter for salary
   double getSalary() {return salary;}
   void setSalary(double salary);
   string getName (){return name;}
   void setName(string n);
   string getIdD (){return id;}
   void setID (string id);
   string getAddress (){return address;}
   void setAddress (string a);
   string getBirthday () {return DoB;}
   void setBirthday(string b);
   string getDegree () {return degree;}
   void setDegree (string d);

/* 1) create a getter and setter for each variable in the class


private:
   double salary;
   double SSN;
   double getSSN () {return SSN;}
   void setSSN (double newSSN);
};

void Faculty::setSalary(double s){
   salary=s;
}
void Faculty::setAddress(string a) {
   address = a;
}
void Faculty::setBirthday(string b) {
   DoB = b;
}
void Faculty::setDegree(string d) {
   degree = d;
}
void Faculty::setName(string n) {
   name = n;
}
void Faculty::setID(string newid) {
   id = newid;
}
void Faculty::setSSN(double newSSN) {
   SSN = newSSN;
}


/* 2) implement each setter and getter

int main() {
   Faculty prof;
   string name = "Joe";
   string degree = "Science";
   string birthday = "April 1";
   string address = "North Carolina";
   string id = "1234";
   double salary = 1234;

   prof.setName(name);
   prof.setDegree(degree);
   prof.setBirthday(birthday);
   prof.setAddress(address);
   prof.setID(id);
   prof.setSalary(salary);

   cout << "Name: " << prof.getName();
   cout << "Degree: " << prof.getDegree();
   cout << "Birthday: " << prof.getBirthday();
   cout << "Address: " << prof.getAddress();
   cout << "ID: " << prof.getIdD();
   cout << "Salary: " << prof.getIdD();

/* 3) use the implemented methods to fill prof' info and print them out

   return 0;
}
*/