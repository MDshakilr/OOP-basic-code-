#include <bits/stdc++.h>
using namespace std;

class player {
public:
    int run;
    int wicket;
    string name;
    string status;

    // Constructors
    player() {
        run = 20;
        wicket = 2;
        name = "Daniel";
        status = "Not Out";
    }

    player(int nrun, int nwicket, string nname) {
        run = nrun;
        wicket = nwicket;
        name = nname;
        status = "Not Out";
    }

    // Destructor
    ~player() {
        cout << "Player: " << name << " Status: " << status << endl;
    }

    // Member Function to print details
    void printDetails() {
        cout << "Total Run: " << run << " Total Wicket: " << wicket << endl;
    }
};

int main() {
    player Sakib, Mushfiq;
    Sakib.run += 30;
    Sakib.wicket += 3;
    Mushfiq.run = 100;

    player Tamim(120, 0, "Tamim Iqbal");
    player Mashrafee(130, 3, "Mortaza");

    Tamim.run = Sakib.run++;
    Sakib.printDetails();
    Tamim.printDetails();
    Mashrafee.printDetails();
    Mushfiq.printDetails();

    Mushfiq.run = ++Tamim.run;
    Mashrafee.wicket = --Sakib.wicket;

    return 0;
}




/*Total Run: 51 Total Wicket: 5
Total Run: 50 Total Wicket: 0
Total Run: 130 Total Wicket: 3
Total Run: 100 Total Wicket: 2
Player: Mortaza Status: Not Out
Player: Tamim Iqbal Status: Not Out
Player: Daniel Status: Not Out
Player: Daniel Status: Not Out
*/
