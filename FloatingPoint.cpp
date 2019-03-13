// FloatingPoint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class FloatingPointArray{
private:

	int size;
	float fpArray[];
	

public:

	FloatingPointArray() {

		size = 8;
		fpArray[0] = 0;


	} FloatingPointArray(int sizeTemp) {

		size = sizeTemp;
		for (int i = 0; i < size; i++) {

			fpArray[i] = 0;
		}

	} ~FloatingPointArray() {

		delete []fpArray;

	}

	void setArraySize(int size) {

		fpArray[size];

	}
	void setValue(int location, float val) {

		fpArray[location] = val;

		
	}

	float getValue(int location) {

		return fpArray[location];

	}

	float getHighest() {

		float highest = fpArray[0];

		for (int i = 0; i < size; i++) {

			if (fpArray[0] < fpArray[i]) {

				highest = fpArray[i];
			}


		}

		return highest;

	} float getLowest() {

		float lowest = fpArray[0];

		for (int i = 0; i < size; i++) {

			if (fpArray[0] > fpArray[i]) {

				lowest = fpArray[i];
			}


		}

		return lowest;
	}


};



int main()
{

	FloatingPointArray test(10);
   
}

