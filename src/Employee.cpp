#include "../include/Employee.h"
#include <iostream>
#include <vector>

// Creating an Employee for matching schedules. 
// Will be matching to make sure employees dont work
// with someone they dislike, and that someone will
// always be working on a zone. 
std::vector<Employee> Employee::employees;

Employee::Employee(std::string n, std::string v, std::string d, bool w){
    name = n;
    dayOff = v;
    dislikes = d;
    working = w;
    employees.push_back(*this);
}

std::string Employee::get_all_employees(){
    // binding emp to a reference of the object.
    std::string allEmployeeInfo = "";
    std::cout<<"Hello" << std::endl;
    for (Employee& emp : employees) { 
        allEmployeeInfo += emp.get_name() + emp.get_dayOff() + emp.get_dislikes();
    }
    return allEmployeeInfo;
}

std::string Employee::get_name()    { return name;}
std::string Employee::get_dayOff()  { return dayOff;}
std::string Employee::get_dislikes(){ return dislikes;}

void Employee::change_work_status(){
    working = !working;
}
