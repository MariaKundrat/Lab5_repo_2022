#define ARRAY_SIZE 3 
using namespace std;

class Smartphone
{
public:
    string name = "";
    float price = 0;
    float Memory_capacity = 0;
    float Array_of_mobile_numbers = 0;
    float Battery_capacity = 0;

    void add(float, string, float, float, float);
    void out();
};
class Shop
{
    Smartphone s[ARRAY_SIZE];
public:
    Shop() {
        s[0].add(50500, "Samsung Galaxy S22 ultra", 512, 34.5, 4500);
        s[1].add(43249.90, "Xiaomi Mi 11 Ultra", 256, 36.5, 4000);
        s[2].add(46249.99, "iPhone 14", 512, 37.5, 5000);
    }

    void best(float best);
    void sort();
    void outAll();
};
