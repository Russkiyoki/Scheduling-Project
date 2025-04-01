#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>

class Employee {
    public: 
        Employee(std::string n, std::string v, std::string d, bool w);
        //later on we can add getters/setters in this file
        static std::string get_all_employees();
        std::string get_name();
        std::string get_dayOff();
        std::string get_dislikes();
        void change_work_status();
        //void add_employee(std::string n, std::string v, std::string d, bool w);
        static std::vector<Employee> employees;

    private:
        std::string name;
        std::string dayOff;
        std::string dislikes;
        bool working;

};

#endif
