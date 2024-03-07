#include<bits/stdc++.h>
using namespace std;
class student{
public:
    string name="shakil";

    student()
    {
        cout<<"a student profile"<<endl;
cout<<" name is:"<< "name"<<endl;

    }
~student(){

cout<<"bye"<<"name"<<endl;

}
void printDetails(){

cout<<"student name:"<< name<<endl;

}

};
int main()
{
    student p1;
    p1.name="sami";
    student p2;
    p2.name="kafi";
    p1.printDetails();
    p2.printDetails();


    return 0;
}
/*a student profile
 name is:name
a student profile
 name is:name
student name:sami
student name:kafi
byename
byename
*/
