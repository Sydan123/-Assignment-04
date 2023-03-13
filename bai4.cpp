#include<iostream>
using namespace std;

class Inventory {
private:
   int itemNumber;
   int quantity;
   double cost;
   double totalCost;
public:
   Inventory(): itemNumber(0), quantity(0), cost(0), totalCost(0) {}
   Inventory(int itemNumber, double cost, int quantity): itemNumber(itemNumber), cost(cost), quantity(quantity) {
       setTotalCost();
   }
   void setItemNumber(int itemNumber) {
       if(itemNumber >= 0)
           this->itemNumber = itemNumber;
       else
           cout<<"Dau vao khong hop le"<<endl;
   }
   void setQuantity(int quantity) {
       if(quantity >= 0)
           this->quantity = quantity;
       else
           cout<<"Dau vao khong hop le"<<endl;
   }
   void setCost(double cost) {
       if(cost >= 0)
           this->cost = cost;
       else
           cout<<"Dau vao khong hop le"<<endl;
   }
   void setTotalCost() {
       totalCost = quantity * cost;
   }
   int getItemNumber()const { return itemNumber; }
   int getQuantity()const { return quantity; }
   double getCost()const { return cost; }
   double getTotalCost()const { return totalCost; }
};

int main() {
   Inventory item1;
   item1.setItemNumber(12345);
   item1.setCost(25.99);
   item1.setQuantity(20);
   item1.setTotalCost();
   cout<<"Muc "<<item1.getItemNumber()<<" co "<<item1.getQuantity()<<" don vi hang ton kho voi chi phi la $"<<item1.getCost()<<" moi don vi, voi tong chi phi ton kho la $"<<item1.getTotalCost()<<endl;
   Inventory item2(54321, 10.49, 50);
   cout<<"Muc "<<item2.getItemNumber()<<" co "<<item2.getQuantity()<<" don vi hang ton kho voi chi phi la $"<<item2.getCost()<<" moi don vi, voi tong chi phi ton kho la $"<<item2.getTotalCost()<<endl;
   return 0;
}

