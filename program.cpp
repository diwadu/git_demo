/*
 * Author: Dawid Chrzanowski
 * Created: 2023-04-24
 * Compilation: $ g++ filename.cpp
 */

#include <iostream>

using namespace std;

/*
 * Person class. Represents a single person.
 */
class Person
{
private:
    string name;
    int age;

public:
    Person(string _name, int _age) : name(_name), age(_age) {}

    string getHelloMessage()
    {
        return "Hi " + this->name + ". You are " + std::to_string(this->age) + ".";
    }

    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Person p1("Dawid", 38);
    cout << p1.getHelloMessage() << endl;
    return 0;
}