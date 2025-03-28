#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
using namespace std;

class Employee {
    public: 
        string name;
        string dayOff;
        vector<string> dislikes;
        bool working;

        Employee(string n, char v, vector <string> d, bool w)
        //later on we can add getters/setters in this file
};

#endif
