#include <queue>
#include <thread>
#include <iostream>
#include <mutex>

int c = 0;
bool done = false;
std::queue<int> goods;
std::mutex mutex;

void producer() {
    for (int i = 0; i < 500; ++i) {
		std::lock_guard<std::mutex> guard(mutex);
        goods.push(i);
        c++;
    }
    done = true;
}

void consumer() {
    while (!done) {
        while (!goods.empty()) {
			std::lock_guard<std::mutex> guard(mutex);
            goods.pop();
            c--;
        }
    }
}

int main() {
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();
    std::cout << "Net: " << c << std::endl;
	char c;
	std::cin >> c;

	return 0;
}