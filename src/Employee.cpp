#include "../include/Employee.h"

// Creating an Employee for matching schedules. 
// Will be matching to make sure employees dont work
// with someone they dislike, and that someone will
// always be working on a zone. 
Employee::Employee(string n, char v, vector <string> d, bool w){
    name = n;
    daysOff = v;
    dislikes = d;
    working = w;
}