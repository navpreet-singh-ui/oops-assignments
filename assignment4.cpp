#include <iostream>
#include <string>
using namespace std;

// OBJECT ORIENTED PROGRAMMING LAB
// INHERITANCE ASSIGNMENT

// 1. Single Inheritance

class Person {
protected:
    string name;
    int age;

public:
    void acceptPerson() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string course;

public:
    void acceptDetails() {
        acceptPerson();

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Course: ";
        cin >> course;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

void question1() {
    Student s;

    s.acceptDetails();

    cout << "\nStudent Details:" << endl;
    s.displayDetails();
}


// 2. Multilevel Inheritance

class Person2 {
protected:
    string name;

public:
    void acceptName() {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Employee : public Person2 {
protected:
    int employeeID;

public:
    void acceptEmployeeID() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void acceptManagerDetails() {
        acceptName();
        acceptEmployeeID();

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayManagerDetails() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

void question2() {
    Manager m;

    m.acceptManagerDetails();

    cout << "\nManager Details:" << endl;
    m.displayManagerDetails();
}


// 3. Multiple Inheritance

class Academic {
protected:
    float marks;

public:
    void acceptMarks() {
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};

class Sports {
protected:
    float sportsScore;

public:
    void acceptSportsScore() {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
};

class Result : public Academic, public Sports {
public:
    void acceptResult() {
        acceptMarks();
        acceptSportsScore();
    }

    void displayResult() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << marks + sportsScore << endl;
    }
};

void question3() {
    Result r;

    r.acceptResult();

    cout << "\nResult:" << endl;
    r.displayResult();
}


// 4. Hierarchical Inheritance

class Vehicle {
protected:
    string brand;
    string model;

public:
    void acceptVehicleDetails() {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    void acceptCarDetails() {
        acceptVehicleDetails();

        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;
    }

    void displayCarDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

class Bike : public Vehicle {
private:
    int engineCapacity;

public:
    void acceptBikeDetails() {
        acceptVehicleDetails();

        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    void displayBikeDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << " CC" << endl;
    }
};

void question4() {
    Car c;
    Bike b;

    cout << "Enter Car Details:" << endl;
    c.acceptCarDetails();

    cout << "\nEnter Bike Details:" << endl;
    b.acceptBikeDetails();

    cout << "\nCar Details:" << endl;
    c.displayCarDetails();

    cout << "\nBike Details:" << endl;
    b.displayBikeDetails();
}


// 5. Constructor Execution Order

class College {
protected:
    string collegeName;

public:
    College(string c) {
        collegeName = c;
        cout << "College Constructor Called" << endl;
    }
};

class Department : public College {
private:
    string departmentName;

public:
    Department(string c, string d) : College(c) {
        departmentName = d;
        cout << "Department Constructor Called" << endl;
    }

    void displayDetails() {
        cout << "College Name: " << collegeName << endl;
        cout << "Department Name: " << departmentName << endl;
    }
};

void question5() {
    Department d("TIET", "Computer Science");

    cout << "\nCollege and Department Details:" << endl;
    d.displayDetails();
}


int main() {

    cout << "\n===== QUESTION 1 =====" << endl;
    question1();

    cout << "\n===== QUESTION 2 =====" << endl;
    question2();

    cout << "\n===== QUESTION 3 =====" << endl;
    question3();

    cout << "\n===== QUESTION 4 =====" << endl;
    question4();

    cout << "\n===== QUESTION 5 =====" << endl;
    question5();

    return 0;
}
