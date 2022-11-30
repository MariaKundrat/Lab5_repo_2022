#include <iostream> 
#include <string>
#include "Methods.h"
using namespace std;
#define ARRAY_SIZE 3    

int main() {
    Shop a;
    int input;
    float money;
    while (1) {
        cout << "Best 1, Sort 2, Exit 0 \n inp:";
        cin >> input;
        switch (input)
        {
        case(1):
            cout << "Enter your budget: ";
            cin >> money;
            a.best(money);
            break;
        case(2):
            a.sort();
            a.outAll();
            break;
        default: return 0;
        }
    }
}
