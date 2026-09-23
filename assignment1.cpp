#include <iostream>
using namespace std;

int main() {
    cout << "Hello World\n";
    cout << "This is first line\nThis is second line\n";
    cout << "Name\tRoll No\tCGPA\n";
    cout << "Alarm\a\n";
    cout << "Hello\rWorld\n";

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9 * celsius) / 5 + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}




#include <iostream>
using namespace std;

int main() {

    int i;

    cout << "For loop with initialization, condition and increment:" << endl;
    for (i = 0; i < 5; i++) {
        cout << i << " ";
    }

    cout << endl << endl;

    cout << "For loop without initialization:" << endl;
    i = 0;
    for (; i < 5; i++) {
        cout << i << " ";
    }

    cout << endl << endl;

    cout << "For loop without increment:" << endl;
    i = 0;
    for (; i < 5;) {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;

    cout << "For loop without initialization and increment:" << endl;
    i = 0;
    for (; i < 5;) {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;

    cout << "While loop:" << endl;
    i = 0;
    while (i < 5) {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;

    cout << "While loop with condition first:" << endl;
    i = 0;
    while (i < 5) {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;

    cout << "Do-while loop:" << endl;
    i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i < 5);

    cout << endl << endl;

    cout << "Do-while loop executes at least once:" << endl;
    i = 10;
    do {
        cout << i << " ";
        i++;
    } while (i < 5);

    return 0;
}




#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails() {
        cout << "Enter New Name: ";
        cin >> name;

        cout << "Enter New Degree: ";
        cin >> degree;
    }

    void updateCGPA() {
        cout << "Enter New CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel() {
        cout << "Enter New Hostel: ";
        cin >> hostel;
    }

    void displaydetails() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.displaydetails();

    s.updateCGPA();
    s.updateHostel();

    s.displaydetails();

    return 0;
}







#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails() {
        cout << "Enter New Name: ";
        cin >> name;

        cout << "Enter New Degree: ";
        cin >> degree;
    }

    void updateCGPA() {
        cout << "Enter New CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel() {
        cout << "Enter New Hostel: ";
        cin >> hostel;
    }

    void displaydetails() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.displaydetails();

    s.updateCGPA();
    s.updateHostel();

    s.displaydetails();

    return 0;
}







#include <iostream>
using namespace std;

class Example {
private:
    void privateFunction() {
        cout << "Private function called" << endl;
    }

public:
    void publicFunction() {
        privateFunction();
        cout << "Public function called" << endl;
    }
};

int main() {
    Example obj;

    obj.publicFunction();

    return 0;
}




#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    void set() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void display() {
        cout << real;

        if (imaginary >= 0)
            cout << " + " << imaginary << "i" << endl;
        else
            cout << " - " << -imaginary << "i" << endl;
    }

    Complex sum(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;

        return result;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.set();

    cout << "Enter second complex number:" << endl;
    c2.set();

    c3 = c1.sum(c2);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}










