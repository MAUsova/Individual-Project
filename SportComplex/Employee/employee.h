// Copyright 2025 Marina Usova

#ifndef EMPLOYEE_EMPLOYEE_H_
#define EMPLOYEE_EMPLOYEE_H_

enum Position {
    Administrator,
    Trainer,
    SupportStaff
};

// наследовать от Person
class Employee {
    //Date _employment_date;
    Position _position;
    // график работы?
    //Date* _working_days;
    float _salary;
};

#endif  // EMPLOYEE_EMPLOYEE_H_
