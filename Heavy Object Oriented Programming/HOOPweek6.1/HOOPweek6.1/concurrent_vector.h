#pragma once
#include <vector>
#include <iostream>
#include <mutex>

template<typename T>
class concurrent_vector{

private:
	//std::mutex mutex;
	std::condition_variable availble;
	bool activeLock = false;
	std::vector <T> intVec;

public:
	concurrent_vector();
	void push_back(T t);
	void writeQ();
	void writeReserve(bool b);
	typename std::vector<T>::iterator begin();
	typename std::vector<T>::iterator end();
	//std::condition_variable isAvaible();
};

template<typename T>
inline concurrent_vector<T>::concurrent_vector(){
	intVec = std::vector<T>();
}

template<typename T>
inline void concurrent_vector<T>::push_back(T t){
	mutex.lock();
	intVec.push_back(t);
	mutex.unlock();
}

template<typename T>
inline void concurrent_vector<T>::writeQ(){
	std::unique_lock<std::mutex> lock(mutex);
	while (activeLock)
		availble.wait(lock);
}

template<typename T>
inline void concurrent_vector<T>::writeReserve(bool b){
	activeLock = b;
	if (!b){
		availble.notify_one();
	}
}

template<typename T>
inline typename std::vector<T>::iterator concurrent_vector<T>::begin(){
	return intVec.begin();
}

template<typename T>
inline typename std::vector<T>::iterator concurrent_vector<T>::end(){
	return intVec.end();
}
/*
template<typename T>
inline std::condition_variable concurrent_vector<T>::isAvaible()
{
	return std::condition_variable();
}
*/


/*
template<typename T>
inline void concurrent_vector<T>::lock(){
	mutex.lock();
}

template<typename T>
inline void concurrent_vector<T>::unlock(){
	mutex.unlock();
}
*/


