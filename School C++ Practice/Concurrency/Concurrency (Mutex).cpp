#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

vector <int> vec;
mutex m;
void push(){
	//m.lock();
		for (int i=0; i!=100; ++i){
			cout << "Push " << i << endl;
			sleep(0.5);
			vec.push_back(i);
		}
	//m.unlock();
}

void pop()
{
	//m.lock();
	for (int i=0; i!=100; ++i){
		if(vec.size() > 0){
			int val = vec.back();
			vec.pop_back();
			cout << "Pop " << val << endl;
		}
	sleep(0.1);
	}
	//m.unlock();
}

int main(){
	//create two threads
	thread t1(push);
	thread t2(pop);
	t1.join();
	t2.join();
}