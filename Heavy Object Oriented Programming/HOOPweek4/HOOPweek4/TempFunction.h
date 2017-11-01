#pragma once
#include <string>
#include <iostream>

using namespace std;

class TempFunction
{
public:

	string stringArray[5];
	float floatArray[5];
	//int sizeStringArray = 0, sizeFloatArray = 0;

	template<class T> void sortArray(T item);



	/*
	template<class T> T sortArray(T item)
		{
		if (item == float) {
			floatArray[sizeStringArray++] = item;
		}

		if (item == string) {
			stringArray[sizeFloatArray++] = item;
		}

		return 0;
	}
	*/
	//typeid(k).name()

	TempFunction();
	~TempFunction();
};

template<class T>
inline void TempFunction::sortArray(T item)
{
	cout << "Sort" << endl;
	return T();
}
