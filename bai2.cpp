#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
        int yearModel;
        string make;
        int speed;
    
    public:
        Car(int yearModel, string make){
            this->yearModel = yearModel;
            this->make = make;
            this->speed = 0;
        }
        
        int getYearModel(){
            return yearModel;
        }
        
        string getMake(){
            return make;
        }
        
        int getSpeed(){
            return speed;
        }
        
        void accelerate(){
            speed += 5;
        }
        
        void brake(){
            speed -= 5;
        }
};

int main(){
    Car car(2022, "Toyota");

    for(int i=0; i<5; i++){
        car.accelerate();

        cout<<"Toc do hien tai sau khi tang toc "<<i+1<<" lan: "<<car.getSpeed()<<endl;
    }

    for(int i=0; i<5; i++){
        car.brake();

        cout<<"Toc do hien tai sau khi phanh "<<i+1<<" lan: "<<car.getSpeed()<<endl;
    }

    return 0;
}
