#include <iostream> // header file // to use cout and cin
#include <string>   // to use string data type
using namespace std;

//  in this course we will use c++ and i doesn't include topic that already covered in c language

//  USER OUTPUT
// int main()
// {
//     cout << "Hello World!\n\t";
//     int a = 10;
//     cout << a;
//     cout << "Hello World!\n";
//     return 0;
// }

// variables
// int myNum = 5;               // Integer (whole number without decimals)
// double myFloatNum = 5.99;    // Floating point number (with decimals)
// char myLetter = 'D';         // Character // with single quotes
// string myText = "Hello";     // String (text) // with double quotes
// bool myBoolean = true;       // Boolean (true or false)

// double vs float
// double is more precise than float

//  USER INPUT

// int main()
// {
//     string name;
//     cout << "Enter your name: ";
//     // cin >> name; // get user input from the keyboard. it can only store one word
//     getline(cin, name); // get user input from the keyboard. it can store multiple words
//     string surname = "Smith";
//     // string fullname = name + " " + surname;
//     // OR
//     string fullname = name.append(" ").append(surname);
//     cout << "Hello " << fullname;
//     return 0;
// }

//  C ++ MATH
// #include <cmath> // header file // to use math functions

//  for each loop

// int main()
// {
//     int myNums[] = {10, 20, 30, 40};
//     for (int x : myNums)
//     {
//         cout << x << "\n";
//     }

//     cout << sizeof(myNums) << "\n";             // 16 bytes // 4 * 4 bytes
//     cout << sizeof(myNums) / sizeof(myNums[0]); // 4 elements
//     return 0;
// }

//  Multi-dimensional Arrays
// - Arrays can also be multi-dimensional, meaning that an array can contain many arrays.

// int main()
// {
//     int myNums[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     for (int x = 0; x < 2; x++)
//     {
//         for (int y = 0; y < 3; y++)
//         {
//             cout << myNums[x][y] << "\n";
//         }
//     }
//     return 0;
// }

//  why we use multi-dimensional arrays?
// - we can use multi-dimensional arrays to store data in a table format.

// // We put "1" to indicate there is a ship.
// bool ships[4][4] = {
//     {0, 1, 1, 0},
//     {0, 0, 0, 0},
//     {0, 0, 1, 0},
//     {0, 0, 1, 0}};

// // Keep track of how many hits the player has and how many turns they have played in these variables
// int hits = 0;
// int numberOfTurns = 0;

// // Allow the player to keep going until they have hit all four ships
// while (hits < 4)
// {
//     int row, column;

//     cout << "Selecting coordinates\n";

//     // Ask the player for a row
//     cout << "Choose a row number between 0 and 3: ";
//     cin >> row;

//     // Ask the player for a column
//     cout << "Choose a column number between 0 and 3: ";
//     cin >> column;

//     // Check if a ship exists in those coordinates
//     if (ships[row][column])
//     {
//         // If the player hit a ship, remove it by setting the value to zero.
//         ships[row][column] = 0;

//         // Increase the hit counter
//         hits++;

//         // Tell the player that they have hit a ship and how many ships are left
//         cout << "Hit! " << (4 - hits) << " left.\n\n";
//     }
//     else
//     {
//         // Tell the player that they missed
//         cout << "Miss\n\n";
//     }

//     // Count how many turns the player has taken
//     numberOfTurns++;
// }

// cout << "Victory!\n";
// cout << "You won in " << numberOfTurns << " turns";

// Structures
// - Structures are used to combine different data types into a single type.

// struct
// {
//     string name;
//     int age;
//     float salary;
// } person1, person2;

// int main()
// {
//     person1.name = "John";
//     person1.age = 24;
//     person1.salary = 1400.50;

//     person2.name = "Mary";
//     person2.age = 22;
//     person2.salary = 1300.50;

//     cout << person1.name << "\n";
//     cout << person1.age << "\n";
//     cout << person1.salary << "\n";

//     cout << person2.name << "\n";
//     cout << person2.age << "\n";
//     cout << person2.salary << "\n";
//     return 0;
// }

//  Reference Variables
// - Reference variables are an alias, which means that they are another name for an existing variable.
// - If you change the value of a reference variable, the value of the original variable will change.
// - Reference variables must be initialized when they are created.

// int main()
// {
//     int myNum = 10;
//     int &myRef = myNum; // reference variable
//     cout << myNum << "\n";
//     cout << myRef << "\n";

//     myRef = 20;
//     cout << myNum << "\n";
//     cout << myRef << "\n";

//     return 0;
// }

// Functions Overloading
// - Functions can have the same name with different parameters.

// int sum(int x, int y)
// {
//     return x + y;
// }

// double sum(double x, double y)
// {
//     return x + y;
// }

// int main()
// {
//     int a = sum(10, 20);
//     double b = sum(10.5, 20.5);
//     cout << a << "\n";
//     cout << b << "\n";
//     return 0;
// }
