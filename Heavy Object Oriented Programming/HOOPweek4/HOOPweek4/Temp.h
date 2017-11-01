#pragma once
#include <string>
#include <iostream>
#include <queue>
using namespace std;

template<class T>
class Temp
{
public:
	queue <int> myQ;

	void put( int nr);
	void get();
	int size();
	Temp() {};


};

template<class T>
inline void Temp<T>::put(int nr){
	myQ.push(nr);
	cout << "put " << myQ.back() << endl;
}

template<class T>
inline void Temp<T>::get(){
	if (myQ.size() != 0)
	{
		int firstNr = myQ.front();
		cout << "Deleted nr " << myQ.front() << endl;
		myQ.pop();
	}
	else {
		cout << "Size is 0 " << endl;
	}
}



template<class T>
inline int Temp<T>::size(){
	int leght = myQ.size();
	cout << "size " << myQ.size() << endl;

	return leght;
}



