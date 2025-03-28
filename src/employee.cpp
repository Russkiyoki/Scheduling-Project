#include <string>
#include <vector>
using namespace std;

// Creating an Employee for matching schedules. 
// Will be matching to make sure employees dont work
// with someone they dislike, and that someone will
// always be working on a zone. 
class Employee {
    public: 
    string name;
    char dayOff;
    //Vector is an array that can change sizes
    vector <string> dislikes[];
    bool working;

    Employee(string n, char v, vector <string> d, bool w){
        name = n;
        daysOff = v;
        dislikes = d;
        working = w;
    }
};