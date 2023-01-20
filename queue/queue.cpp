#include<iostream>
using namespace std;
class queue {
private:
	int* arr;
	int front;
	int back;
public:
	queue() {
		arr = new int[10];
		front = -1;
		back = -1;

	}
	void enqueue(int val) {
		if (back == 10 - 1) {
			cout << "que is empty" << endl;
		}
		back++;
		arr[back] = val;
		cout << arr[back] << " ";
		if (front == -1) {
			front++;
		}
	}
	void dequeue() {
		if (front == -1 || front > back) {
			cout << "queue is empty";
		}
		front++;
	}

};
int main() {
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.dequeue();
}
