#include <iostream>
#include <string>

using namespace std;

class RetailItem {
  private:
    string description;
    int unitsOnHand;
    double price;

  public:
    // Constructor de khoi tao cac bien thanh vien
    RetailItem(string desc, int units, double p) {
      description = desc;
      unitsOnHand = units;
      price = p;
    }

    // Cac ham trinh bien doi de dat gia tri cua cac bien thanh vien
    void setDescription(string desc) {
      description = desc;
    }

    void setUnitsOnHand(int units) {
      unitsOnHand = units;
    }

    void setPrice(double p) {
      price = p;
    }

    // Cac ham truy cap de lay gia tri cac bien thanh vien
    string getDescription() const {
      return description;
    }

    int getUnitsOnHand() const {
      return unitsOnHand;
    }

    double getPrice() const {
      return price;
    }
};

int main() {
  // Tao ba doi tuong RetailItem
  RetailItem item1("Jacket", 12, 59.95);
  RetailItem item2("Designer Jeans", 40, 34.95);
  RetailItem item3("Shirt", 20, 24.95);

  // In du lieu cho tung  doi tuong
  cout << "Item #1: " << item1.getDescription() << ", " << item1.getUnitsOnHand() << " units, $" << item1.getPrice() << endl;
  cout << "Item #2: " << item2.getDescription() << ", " << item2.getUnitsOnHand() << " units, $" << item2.getPrice() << endl;
  cout << "Item #3: " << item3.getDescription() << ", " << item3.getUnitsOnHand() << " units, $" << item3.getPrice() << endl;

  return 0;
}



