#include<bits/stdc++.h>
using namespace std;

class TwitterProfile
{
public:
    string name;
    int age;



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



    return 0;
}
/*Constructor created
Asif 25 Closed

*/

