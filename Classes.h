#ifndef SMARTPHONE_AND_SMARTPHONE_SHOP_H_
#define SMARTPHONE_AND_SMARTPHONE_SHOP_H_
#define NUMBER_OF_SMARTPHONES_IN_SHOP 3
#include<iostream>
using namespace std;

class Smartphone
{
public:
    string smartphone_model_name_ = "";
    float smartphone_price_ = 0;
    float smartphone_the_amount_of_permanent_memory_by_gb_ = 0;
    float smartphone_array_of_mobile_numbers_ = 0;
    float smartphone_battery_capacity_by_mah_ = 0;

    void add_InformationAboutSmartphone(float smartphone_price_, string smartphone_model_name_,
        float smartphone_the_amount_of_permanent_memory_by_gb_, float smartphone_array_of_mobile_numbers, float smartphone_battery_capacity_by_mah_);
    void out_InformationAboutSmartphone_();
};
class SmartphoneShop
{
    Smartphone list_of_smartphones_in_shop_[NUMBER_OF_SMARTPHONES_IN_SHOP];
public:
    SmartphoneShop() {
        list_of_smartphones_in_shop_[0].add_InformationAboutSmartphone(50500, "Samsung Galaxy S22 ultra", 512, 34.5, 4500);
        list_of_smartphones_in_shop_[1].add_InformationAboutSmartphone(43249.90, "Xiaomi Mi 11 Ultra", 256, 36.5, 4000);
        list_of_smartphones_in_shop_[2].add_InformationAboutSmartphone(46249.99, "iPhone 14", 512, 37.5, 5000);
    }

    void print_BestSmartphoneByPrice(float max_price);
    void sort_ListOfSmartphonesInShopByPrice();
    void print_ListOfSmartphonesInShop();
};
#endif // SMARTPHONE_AND_SMARTPHONE_SHOP_H_
//2