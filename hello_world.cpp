#include <iostream>
#include <string>

void main(int argc, char* argv[])
{
    std:: string name; // Making a var for user name
    std:: cout << "\nEnter your name, please: "; // Asking user to enter their name
    std:: cin >> name; // Getting their name
    std:: cout << "Hello World from " << name << "\n"; // Output of the phrase with name

    return 0;
}
