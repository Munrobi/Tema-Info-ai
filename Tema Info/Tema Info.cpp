// Tema Info.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Motorcycle.h"
using namespace std;

class Main
{
private:
    Motorcycle m1;
    Motorcycle *m2=new Motorcycle(); 
public:
    Main()
    {
        m1.set_eng_capacity(500);
        m1.set_weight(188);
        m1.set_model("CB500F");
        m1.set_brand("Honda");
        m1.set_horsepower(47);
        cout << "Motorcycle 1: ";
        cout << m1.get_eng_capacity() << endl;
        cout << m1.get_weight() << endl;
        cout << m1.get_model() << endl;
        cout << m1.get_brand() << endl;
        cout << m1.get_horsepower() << endl;
        m2->set_eng_capacity(1000);
        m2->set_weight(172);
        m2->set_model("Panigale V4R");
        m2->set_brand("Ducati");
        m2->set_horsepower(221);
        cout << "Motorcycle 2: ";
        cout << m2->get_eng_capacity() << endl;
        cout << m2->get_weight() << endl;
        cout << m2->get_model() << endl;
        cout << m2->get_brand() << endl;
        cout << m2->get_horsepower() << endl;
        delete m2;
    }


};
int main()
{
    Main motorticli;
    return 0;
   }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
