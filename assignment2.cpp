#include <iostream>
#include <string>
using namespace std;

// Programming Questions

// 1. Student class using default constructor
class Student1 {
private:
    string name;
    int rollNo;

public:
    Student1() {
        name = "Navpreet";
        rollNo = 101;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

void question1() {
    Student1 s;
    s.display();
}

// 2. Rectangle using parameterized constructor
class Rectangle {
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void displayArea() {
        cout << "Area: " << length * breadth << endl;
    }
};

void question2() {
    Rectangle r(10, 5);
    r.displayArea();
}

// 3. Employee using parameterized constructor
class Employee {
private:
    string name;
    int id;
    float salary;

public:
    Employee(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

void question3() {
    Employee e("Rahul", 101, 50000);
    e.display();
}

// 4. Box with default and parameterized constructors
class Box {
private:
    float length;
    float width;
    float height;

public:
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }

    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    void displayVolume() {
        cout << "Volume: " << length * width * height << endl;
    }
};

void question4() {
    Box b1;
    Box b2(5, 4, 3);

    cout << "Default Constructor: ";
    b1.displayVolume();

    cout << "Parameterized Constructor: ";
    b2.displayVolume();
}

// 5. Constructor overloading using Student
class Student2 {
private:
    string name;
    int rollNo;
    float cgpa;

public:
    Student2() {
        name = "Unknown";
        rollNo = 0;
        cgpa = 0;
    }

    Student2(string n, int r) {
        name = n;
        rollNo = r;
        cgpa = 0;
    }

    Student2(string n, int r, float c) {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

void question5() {
    Student2 s1;
    Student2 s2("Rahul", 102);
    Student2 s3("Aman", 103, 8.5);

    cout << "Default Constructor:" << endl;
    s1.display();

    cout << endl << "Two Parameter Constructor:" << endl;
    s2.display();

    cout << endl << "Three Parameter Constructor:" << endl;
    s3.display();
}

// 6. Complex class with default and parameterized constructors
class Complex {
private:
    float real;
    float imaginary;

public:
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

void question6() {
    Complex c1;
    Complex c2(5, 3);

    cout << "Default Constructor: ";
    c1.display();

    cout << "Parameterized Constructor: ";
    c2.display();
}

// 7. Constructor and destructor execution order
class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

void question7() {
    Demo d1;
    Demo d2;
    Demo d3;
}

// 8. Constructors and destructors inside main and separate function
class Demo2 {
public:
    Demo2() {
        cout << "Constructor called" << endl;
    }

    ~Demo2() {
        cout << "Destructor called" << endl;
    }
};

void createObjects() {
    cout << "Inside separate function:" << endl;

    Demo2 d3;
    Demo2 d4;

    cout << "Leaving separate function" << endl;
}

void question8() {
    cout << "Inside main:" << endl;

    Demo2 d1;
    Demo2 d2;

    createObjects();

    cout << "Back inside main" << endl;
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

    cout << "\n===== QUESTION 6 =====" << endl;
    question6();

    cout << "\n===== QUESTION 7 =====" << endl;
    question7();

    cout << "\n===== QUESTION 8 =====" << endl;
    question8();

    return 0;
}
