#include "Classes.h"
using namespace std;

void Smartphone::add(float p, string n, float M, float A, float B)
{
    name = n;
    price = p;
    Memory_capacity = M;
    Array_of_mobile_numbers = A;
    Battery_capacity = B;
}
void Smartphone::out()
{
    cout << "Name: ";
    cout << name << endl;
    cout << "Price: ";
    cout << price << endl;
    cout << "Memory_capacity: ";
    cout << Memory_capacity << endl;
    cout << "Array_of_mobile_numbers: ";
    cout << Array_of_mobile_numbers << endl;
    cout << "Battery_capacity: ";
    cout << Battery_capacity << endl << endl;
}

void Shop::best(float price) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (s[i].price <= price) {
            s[i].out();
        }
    }
}

void Shop::sort() {
    for (int k = 1; k < 3; k++)
        for (int i = 0; i < 3 - k; i++)
            if (s[i].price > s[i + 1].price)
            {
                Smartphone a = s[i];
                s[i] = s[i + 1];
                s[i + 1] = a;
            }
}

void Shop::outAll() {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        s[i].out();
    }
}

