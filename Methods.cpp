#include "Classes.h"
#include <iostream>

using namespace std;
void Smartphone::add_InformationAboutSmartphone(float price, string model_name,
    float amount_of_permanent_memory, float array_of_mobile_numbers, float battery_capacity)
{
    smartphone_model_name_ = model_name;
    smartphone_price_ = price;
    smartphone_battery_capacity_by_mah_ = battery_capacity;
    smartphone_array_of_mobile_numbers_ = array_of_mobile_numbers;
    smartphone_the_amount_of_permanent_memory_by_gb_ = amount_of_permanent_memory;
}
void Smartphone::out_InformationAboutSmartphone_()
{
    cout << "Name: " << smartphone_model_name_ << endl;
    cout << "Price: " << smartphone_price_ << endl;
    cout << "Memory_capacity: " << smartphone_the_amount_of_permanent_memory_by_gb_ << endl;
    cout << "Array_of_mobile_numbers: " << smartphone_array_of_mobile_numbers_ << endl;
    cout << "Battery_capacity: " << smartphone_battery_capacity_by_mah_ << endl << endl;
}

void SmartphoneShop::print_BestSmartphoneByPrice(float max_price) {
    for (int i = 0; i < NUMBER_OF_SMARTPHONES_IN_SHOP; i++) {
        if (list_of_smartphones_in_shop_[i].smartphone_price_ <= max_price) {
            list_of_smartphones_in_shop_[i].out_InformationAboutSmartphone_();
        }
    }
}

void SmartphoneShop::sort_ListOfSmartphonesInShopByPrice() {
    for (int k = 1; k < NUMBER_OF_SMARTPHONES_IN_SHOP; k++)
        for (int i = 0; i < NUMBER_OF_SMARTPHONES_IN_SHOP - k; i++)
            if (list_of_smartphones_in_shop_[i].smartphone_price_ > list_of_smartphones_in_shop_[i + 1].smartphone_price_)
            {
                Smartphone a = list_of_smartphones_in_shop_[i];
                list_of_smartphones_in_shop_[i] = list_of_smartphones_in_shop_[i + 1];
                list_of_smartphones_in_shop_[i + 1] = a;
            }
}

void SmartphoneShop::print_ListOfSmartphonesInShop() {
    for (int i = 0; i < NUMBER_OF_SMARTPHONES_IN_SHOP; i++) {
        list_of_smartphones_in_shop_[i].out_InformationAboutSmartphone_();
    }
}