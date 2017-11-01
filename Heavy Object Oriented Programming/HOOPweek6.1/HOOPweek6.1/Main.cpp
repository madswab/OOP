#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include "concurrent_vector.h"

/*
void addVec(concurrent_vector<int>* vec) {
int a = 1000;
while (a > 0) {
vec->push_back(a);
a--;
}
}
*/
std::mutex mutex;
std::condition_variable availble;

void addVec(concurrent_vector<int>* vec, int s) {
	//std::unique_lock<std::mutex> lock(mutex);
	//availble.wait(lock);
	//mutex.lock();
	vec->writeQ();
	vec->writeReserve(true);
	int a = 0;
	while (a < s) {
		vec->push_back(a);
		a++;
	}
	vec->writeReserve(false);
	//mutex.unlock();
	//availble.notify_one();
}

bool check(concurrent_vector<int>* vec, int s) {
	typename std::vector<int>::iterator it = vec->begin();
	int a = 0;

	while (it != vec->end()) {
		std::cout << (*it) << ", " << a << std::endl;
		if ((*it) != a){
			std::cout << (*it) << ", " << a << std::endl;
			return false;
		}
		it++;
		a++;
		a = a % s;
	}
	return true;

}

int main() {
	const int size = 10000;
	typename concurrent_vector<int>* vec = new concurrent_vector<int>();
		
	std::thread thread(addVec, vec, size);
	std::thread thread1(addVec, vec, size);
	thread.join();
	thread1.join();

	typename std::vector<int>::iterator it = vec->begin();

	std::cout << (check(vec, size) ? "no race condition" : "race condition") << std::endl;

	delete vec;

	char c;
	std::cin >> c;

	return 0;
}

// Ik heb met 6.1 met brian gezeten. Uiteindelijk kwamen we er samen niet echt uit en heeft hij als het goed is een email geschreven. 
// Dus vandaar dat de code vrijwel het zelfde is. Ik heb aan het begin ook aangegeven dat heavy misschien net een stapje te hoog is.
// Ik hoop dat ik er een beetje door heen gerold ben maar hier had ik toch echt een beetje extra help bij nodig zoals je aan de comments al kan zien.
// Achteraf zaten we redelijk in de buurd. 

