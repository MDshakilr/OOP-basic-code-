

#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name = "Towhid";
        //Constructor
        Student (){
            cout << "Hello  " << name <<endl;
        }
        //Destructor
        ~Student (){
            cout << "Bye "<< name <<endl;
        }
        void printName (){
            cout << "Hello " << name << endl;
        }
};
int main() {
    Student s1;
    Student s2;

    s2.printName();
    Student s3;
    s3.printName();
    s1.name = "Asif";

    s3.name = "David";
    s2.printName();


    s2.name = "Rafi";
    s2.printName();
    s3.printName();

    return 0;
}/*hello tawhid
hello tawhid
hello tawhid
hello tawhid
hello tawhid
hello tawhid
hello rafi
hello david
bye david
bye rafi
bye asif
*/
