#include <iostream>
using namespace std;

class Car
{
	private:
		int gasolineGauage;
	public:
		int GetGasGauage()
		{
			return gasolineGauge;
		}
};

class HybridCar : public Car
{
	private: 
		int electricGauage;
	public:
		int GetElecGauage;
		{
			return electricGauge;
		}

};

class HybridWaterCar : public HybridCar
{
	private:
		int waterGauge;
	public:
		void ShowCurrentGauage()
		{
		cout << "Remain Gasoline :" << GetGasGauage() << endl;
		cout << " ll"
		}
}
