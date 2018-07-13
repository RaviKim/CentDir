#include <iostream>
using namespace std;

#define ID_LEN	20
#define MAX_SPD	20
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10


struct Car{
	char gamerID[ID_LEN];	// owner ID
	int fuelGauge;			// Fuel
	int curSpeed;			// speed
};

void ShowCarState(const Car &car){
	cout <<"Owner ID : " << car.gamerID << endl;
	cout <<"Fuel : " << car.fuelGauge<<"%" << endl;
	cout <<"Now Speed : " << car.curSpeed<< "km/s" << endl; 
}

void Accel(Car &car){
	if(car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;
	if(car.curSpeed+ACC_STEP >= MAX_SPD){
		car.curSpeed=MAX_SPD;
		return;
	}
	car.curSpeed+=ACC_STEP;
}

void Break(Car &car){
	if(car.curSpeed < BRK_STEP){
		car.curSpeed=0;
		return;
	}
	car.curSpeed -= BRK_STEP;
}

int main(void){
	Car run99 = {"run 99", 100, 0};
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77 = {"sped 77", 100, 0};
	Accel(sped77);
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);
	return 0;
}
