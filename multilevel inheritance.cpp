#include <iostream>
using namespace std;

class p {
   public:
   	
    float temperature;
    public:
    	void settemperature(float temp){
    		temperature=temp;
		}
};

class q : public p {
   public:
   	float toFehrenheit(){
   		return (temperature *9/5)+32;
	   }
};
  

class r : public q {
   public:
   	float toKelvin(){
   		return (toFehrenheit()+ 459.67)*5/9;
	   }
};

int main() {
    r obj;
    
    float celsiustemp;
    
     cout << "Enter temperature in Celsius: ";
    cin >> celsiustemp;
    
    obj.settemperature(celsiustemp);

   cout << "Temperature in Fahrenheit: " << obj.toFehrenheit() << endl;
    cout << "Temperature in Kelvin: " << obj.toKelvin() << endl;

    return 0;
}

