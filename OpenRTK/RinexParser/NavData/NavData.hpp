#pragma once

#include "ENavOrbitNumber.hpp"
#include "../RinexData.hpp"


#include <memory>
#include <chrono>

class NavData : public RinexData
{
protected:
	virtual void AddOrbit_1(double data0, double data1, double data2, double data3) = 0;
	virtual void AddOrbit_2(double data0, double data1, double data2, double data3) = 0;
	virtual void AddOrbit_3(double data0, double data1, double data2, double data3) = 0;
	virtual void AddOrbit_4(double data0, double data1, double data2, double data3) = 0;
	virtual void AddOrbit_5(double data0, double data1, double data2, double data3) = 0;
	virtual void AddOrbit_6(double data0, double data1, double data2, double data3) = 0;
	virtual void AddOrbit_7(double data0, double data1, double data2, double data3) = 0;

public:	
	// functions
	virtual void AddClockErrors(double data0, double data1, double data2) = 0;
	
	void AddOrbit(ENavOrbitNumber orbitNumber, double data0, double data1, double data2, double data3);

	// ctor & dtor
	NavData() = default;
	NavData(int year, int month, int day, int hour, int minute, double second);			
	virtual ~NavData() = default;	

	// utils
	virtual std::unique_ptr<NavData> clone() const = 0;
};

