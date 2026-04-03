// Goat.h

#ifndef GOAT_H
#define GOAT_H
#include <iostream>
using namespace std;

class Goat {
private:
    string name;
    int age;
    string color;
public: 
    Goat()                          { name = ""; age = 0; color = ""; }
    // write three more constructors
    Goat(string n)                   { name = n; age = 0; color = ""; }
    Goat(string n, int a)            { name = n; age = a; color = ""; }
    Goat(string n, int a, string c) { name = n; age = a; color = c; }
    // setters and getters
    void set_name(string n)         { name = n; };
    string get_name() const         { return name; };
    void set_age(int a)             { age = a; };
    int get_age() const             { return age; }
    void set_color(string c)        { color = c; }
    string get_color() const        { return color; }
    //main menu
    void main_menu() {
        cout << "*** GOAT MANAGER 3001 ***" << endl;
        cout << "[1] Add a goat" << endl;
        cout << "[2] Delete a goat" << endl;
        cout << "[3] List Goats" << endl;
        cout << "[4] Exit" << endl;
        cout << "Choice: ";
    }

    // write overloaded < operator for the std::list
};

#endif