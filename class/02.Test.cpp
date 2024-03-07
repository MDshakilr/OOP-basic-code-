#include<bits/stdc++.h>
using namespace std;
class student{
public:
    string name= "shakil";
    int roll=1;
    student()
    {
        cout<<"a student profile"<<endl;
cout<<"student name:"<< name<<endl;
cout<<"student roll:"<<roll <<endl;

    }
    ~student ()
    {
        cout<<"End"<<endl;
        cout<<"Hi"<<endl;
    }
void printDetails(){

cout<<"student name:"<< name<<endl;
cout<<"student roll:"<<roll <<endl;

}


};
int main()
{
    student p1;

    p1.printDetails();
    return 0;
}
/*a student profile
student name:shakil
student roll:1
student name:shakil
student roll:1
End
Hi
*/
