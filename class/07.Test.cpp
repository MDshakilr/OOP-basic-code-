#include<bits/stdc++.h>
using namespace std;

class TwitterProfile
{
public:
    string name;
    int age;
    TwitterProfile(){
        name = "rafi";
        age = 27;
    }


    TwitterProfile(string x, int y){
        name = x;
        age = y;
        cout << "Constructor created" << endl;
    }
    ~TwitterProfile(){
        cout << name << " " << age << " Closed " << endl;
    }
};


int main(){
    TwitterProfile t1 ("Asif", 25);
    TwitterProfile t2;
     TwitterProfile t3;
      TwitterProfile t4;



    return 0;
}
/*Constructor created
rafi 27 Closed
rafi 27 Closed
rafi 27 Closed
Asif 25 Closed
*/



