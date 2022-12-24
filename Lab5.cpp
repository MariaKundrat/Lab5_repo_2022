#include <iostream> 
#include <string>
#include "Methods.cpp"
#define NUMBER_OF_SMARTPHONES_IN_SHOP 3
using namespace std;  

int main() {
    SmartphoneShop obj_smartphone_shop;
    int number_of_action_to_be_performed;
    float how_much_money_buyer_have;
    while (true) {
        cout << "Best 1, Sort 2, Exit 0 \n inp:";
        cin >> number_of_action_to_be_performed;
        switch (number_of_action_to_be_performed)
        {
        case(1):
            cout << "Enter your budget: ";
            cin >> number_of_action_to_be_performed;
            obj_smartphone_shop.print_BestSmartphoneByPrice(number_of_action_to_be_performed);
            break;
        case(2):
            obj_smartphone_shop.sort_ListOfSmartphonesInShopByPrice();
            obj_smartphone_shop.print_ListOfSmartphonesInShop();
            break;
        case(0): return 0;
            break;
        default: 
            cout << "Comand not found." << endl;
            break;
        }
    }
}