#include <iostream>
#include <fstream>
using namespace std;
//  OOP - Object Oriented Programming
// - Object Oriented Programming is a programming paradigm based on the concept of "objects", which can contain data, in the form of fields, often known as attributes; and code, in the form of procedures, often known as methods.

// Classes
// - Classes are used to create user-defined data types.

// class Car
// {
// public:
//     string brand;
//     string model;
//     int year;
// };

// // Objects
// // - Objects are an instance of a class.

// int main()
// {
//     Car carObj1; // Create an object of Car
//     carObj1.brand = "BMW";
//     carObj1.model = "X5";
//     carObj1.year = 1999;

//     Car carObj2; // Create an object of Car
//     carObj2.brand = "Ford";
//     carObj2.model = "Mustang";
//     carObj2.year = 1969;

//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//     return 0;
// }

// Class Methods
// - Methods are functions that belong to a class.

// class Car
// {
// public:
//     string brand;
//     string model;
//     int year;
//     void printInfo();
// };

// void Car::printInfo() // Method definition outside the class
// {
//     cout << brand << " " << model << " " << year << "\n";
// }

// int main()
// {
//     Car carObj1; // Create an object of Car
//     carObj1.brand = "BMW";
//     carObj1.model = "X5";
//     carObj1.year = 1999;

//     Car carObj2; // Create an object of Car
//     carObj2.brand = "Ford";
//     carObj2.model = "Mustang";
//     carObj2.year = 1969;

//     carObj1.printInfo(); // Call the method
//     carObj2.printInfo(); // Call the method
//     return 0;
// }

// Constructors
// - Constructors are special methods that are used to initialize objects.
// - The constructor is called when an object of a class is created.
// - The constructor is useful for setting initial values for fields.

// class Car
// {
// public:
//     string brand;
//     string model;
//     int year;
//     void printInfo();               // Method declaration
//     Car(string x, string y, int z); // Constructor declaration
// };

// void Car::printInfo() // Method definition outside the class
// {
//     cout << brand << " " << model << " " << year << "\n";
// }

// Car::Car(string x, string y, int z) // Constructor definition outside the class
// {
//     brand = x;
//     model = y;
//     year = z;
// }

// int main()
// {
//     Car carObj1("BMW", "X5", 1999);       // Create an object of Car
//     Car carObj2("Ford", "Mustang", 1969); // Create an object of Car

//     carObj1.printInfo(); // Call the method
//     carObj2.printInfo(); // Call the method

//     // cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//     // cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//     return 0;
// }

// Access Specifiers
// - Access specifiers are used to set the access level for attributes and methods.
// - There are three access specifiers:
//     - public: members are accessible from outside the class
//     - private: members cannot be accessed (or viewed) from outside the class
//     - protected: members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

// class Car
// {
// private:
//     string brand;
//     string model;
//     int year;

// public:
//     void printInfo(); // Method declaration
//     void getCar();
//     Car(string x, string y, int z); // Constructor declaration
// };

// void Car::printInfo() // Method definition outside the class
// {
//     cout << brand << " " << model << " " << year << "\n";
// }

// Car::Car(string x, string y, int z) // Constructor definition outside the class
// {
//     brand = x;
//     model = y;
//     year = z;
// }

// void Car::getCar()
// {
//     cout << brand << " " << model << " " << year << "\n";
// }

// int main()
// {
//     Car carObj1("BMW", "X5", 1999);       // Create an object of Car
//     Car carObj2("Ford", "Mustang", 1969); // Create an object of Car

//     // public members can be accessed from outside the class
//     carObj1.printInfo(); // Call the method
//     carObj2.printInfo(); // Call the method
//     carObj1.getCar();
//     // private members cannot be accessed from outside the class
//     // carObj1.brand = "Opel"; // Error
//     // carObj1.model = "Astra"; // Error
//     // carObj1.year = 2005; // Error

//     // cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n"; // Error
//     return 0;
// }

// Encapsulation
// - Encapsulation is one of the four fundamental OOP concepts.
// - The idea of encapsulation is to make sure that "sensitive" data is hidden from users.
// - To achieve this, you must:
//     - declare class attributes as private (only accessible within the class)
//     - provide public get and set methods to access and update the value of a private attribute

// class Employee
// {
// private:
//     int salary;

// public:
//     void setSalary(int x);
//     int getSalary();
// };

// int Employee::getSalary()
// {
//     return salary;
// }

// void Employee::setSalary(int x)
// {
//     salary = x;
// }

// int main()
// {
//     Employee emp;
//     emp.setSalary(1000);

//     int sal = emp.getSalary();

//     cout << sal;

//     return 0;
// };

// Inheritance
// - Inheritance is one of the four fundamental OOP concepts.
// - It is the mechanism in which one class acquires the property of another class.
// - The class whose properties are acquired is called the "base" class.
// - The class that acquires the properties of the base class is called the "derived" class.

// base class
// class Vehicle
// {
// public:
//     string brand = "Ford";
//     void honk()
//     {
//         cout << "Tuut, tuut! \n";
//     }
// };

// // derived class
// class Car : public Vehicle
// {
// public:
//     string model = "Mustang";
// };

// int main()
// {
//     Car myObj;
//     Vehicle2 myObj2;
//     myObj.honk();
//     myObj2.honk();
//     cout << myObj.brand + " " + myObj.model;
//     return 0;
// }

// multiple inheritance

// class MyClass
// {
// public:
//     void myMethod()
//     {
//         cout << "Some text. \n";
//     }
// };

// class MyOtherClass
// {
// public:
//     void myOtherMethod()
//     {
//         cout << "Some other text.";
//     }
// };

// class MyChildClass : public MyClass, public MyOtherClass
// {
// };

// int main()
// {
//     MyChildClass myObj;
//     myObj.myMethod();
//     myObj.myOtherMethod();
//     return 0;
// }

// access specifiers in inheritance
// protected access specifier is similar to the private access specifier, except that it is accessible in inherited classes.
// Base class
// class Employee
// {
// protected: // Protected access specifier
//     int salary;
// };

// // Derived class
// class Programmer : public Employee
// {
// public:
//     int bonus;
//     void setSalary(int s)
//     {
//         salary = s;
//     }
//     int getSalary()
//     {
//         return salary;
//     }
// };

// int main()
// {
//     Programmer myObj;
//     myObj.setSalary(50000);
//     myObj.bonus = 15000;
//     cout << "Salary: " << myObj.getSalary() << "\n";
//     cout << "Bonus: " << myObj.bonus << "\n";
//     return 0;
// }

// Polymorphism
// - Polymorphism is one of the four fundamental OOP concepts.
// - It means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
// - Inheritance lets us inherit attributes and methods from another class.
// - Polymorphism uses those methods to perform different tasks.
// it just means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.

// class Animal
// {
// public:
//     void animalSound()
//     {
//         cout << "The animal makes a sound \n";
//     }
// };

// class Pig : public Animal
// {
// public:
//     void animalSound()
//     {
//         cout << "The pig says: wee wee \n";
//     }
// };

// class Dog : public Animal
// {
// public:
//     void animalSound()
//     {
//         cout << "The dog says: bow wow \n";
//     }
// };

// int main()
// {
//     Animal myAnimal;
//     Pig myPig;
//     Dog myDog;

//     myAnimal.animalSound();
//     myPig.animalSound();
//     myDog.animalSound();

//     return 0;
// }

// C++ Files
// - fstrem is a library that allows us to work with files.
// - We can use it to read from files, write to files, and append to files.
// - We can also use it to create files and delete files.

// ofstream- Create and write to files
// ifstream- Read from files
// fstream- Create, read, write, and append to files

// int main()
// {
//     // Create and open a text file
//     ofstream MyFile("filename.txt");

//     // Write to the file
//     MyFile << "Files can be tricky, but it is fun enough!";

//     // Close the file
//     MyFile.close();

//     return 0;
// }

// Reading from files

// int main()
// {
//     string myText;

//     // Read from the text file
//     fstream MyReadFile("filename.txt");

//     // Use a while loop together with the getline() function to read the file line by line
//     while (getline(MyReadFile, myText))
//     {
//         // Output the text from the file
//         cout << myText;
//     }

//     // Close the file
//     MyReadFile.close();

//     return 0;
// }

// Exception Handling
// - Exception handling is a process that deals with errors in a manageable and predictable way.
// - In C++, exceptions are handled using a try, catch, throw keyword.
// - The try block lets you test a block of code for errors.
// - The catch block lets you handle the error.
// - The throw keyword lets you create a custom error.

// try
// {
//     // code that may throw an exception
// }
// catch (exceptionType1 e1)
// {
//     // code to handle exceptionType1
// }
// catch (exceptionType2 e2)
// {
//     // code to handle exceptionType2
// }

int main()
{
    try
    {
        int age = 15;
        if (age > 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw(age); // throw an exception
        }
    }
    catch (int myNum)
    {
        cout << "Access denied - You must be at least 18 years old. \n";
        cout << "Age is: " << myNum << "\n";
    }
    return 0;
}
