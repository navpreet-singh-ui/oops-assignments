#include <iostream>
#include <string>
using namespace std;



// 1. Friend function to access private Student data members
class Student1 {
private:
    string name;
    float marks;

public:
    Student1(string n, float m) {
        name = n;
        marks = m;
    }

    friend void displayStudent(Student1 s);
};

void displayStudent(Student1 s) {
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

void question1() {
    Student1 s("Rahul", 85.5);
    displayStudent(s);
}

// 2. Friend function to calculate sum of two numbers
class Number {
private:
    int a;
    int b;

public:
    Number(int x, int y) {
        a = x;
        b = y;
    }

    friend void calculateSum(Number n);
};

void calculateSum(Number n) {
    cout << "Sum: " << n.a + n.b << endl;
}

void question2() {
    Number n(10, 20);
    calculateSum(n);
}

// 3. Friend function to compare salaries
class Employee {
private:
    float salary;

public:
    Employee(float s) {
        salary = s;
    }

    friend void compareSalary(Employee e1, Employee e2);
};

void compareSalary(Employee e1, Employee e2) {
    if (e1.salary > e2.salary)
        cout << "Higher Salary: " << e1.salary << endl;
    else if (e2.salary > e1.salary)
        cout << "Higher Salary: " << e2.salary << endl;
    else
        cout << "Both salaries are equal" << endl;
}

void question3() {
    Employee e1(50000);
    Employee e2(60000);

    compareSalary(e1, e2);
}

// 4. Static data member to count number of objects
class Student2 {
private:
    string name;

    static int count;

public:
    Student2(string n) {
        name = n;
        count++;
    }

    static void displayCount() {
        cout << "Total Objects: " << count << endl;
    }
};

int Student2::count = 0;

void question4() {
    Student2 s1("Rahul");
    Student2 s2("Aman");
    Student2 s3("Karan");

    Student2::displayCount();
}

// 5. BankAccount with friend function and static member
class BankAccount {
private:
    int accountNo;
    float balance;

    static int totalAccounts;

public:
    BankAccount(int a, float b) {
        accountNo = a;
        balance = b;
        totalAccounts++;
    }

    friend void displayAccount(BankAccount b);

    static void displayTotalAccounts() {
        cout << "Total Accounts: " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

void displayAccount(BankAccount b) {
    cout << "Account No: " << b.accountNo << endl;
    cout << "Balance: " << b.balance << endl;
}

void question5() {
    BankAccount b1(1001, 50000);
    BankAccount b2(1002, 75000);
    BankAccount b3(1003, 60000);

    cout << "Account 1:" << endl;
    displayAccount(b1);

    cout << endl << "Account 2:" << endl;
    displayAccount(b2);

    cout << endl << "Account 3:" << endl;
    displayAccount(b3);

    cout << endl;
    BankAccount::displayTotalAccounts();
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
