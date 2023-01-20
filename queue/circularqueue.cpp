#include<iostream>
using namespace std;
class queue {
private:
	int* arr;
	int front;
	int rear;
	int size;
public:
	queue(int s) {
		size = s;
		arr = new int[size];
		front = -1;
		rear = -1;
	}
	void display() {
		if (rear == -1) {
			cout << "queue is empty" << endl;
		}
		else {
			for (int i = front; i <= size; i++) {
				cout << "the elements in queue is : " << arr[i] << endl;
			}
		}
	}

	void enqueue(int val) {
		if (rear == size - 1 && front == 0 || rear == (front - 1) % size) {
			cout << "queue is full" << endl;
		}
		else if (rear == -1 && front == -1) {//for insert first value 
			rear = 0;
			front = 0;
			arr[rear] = val;
		}
		else if (rear == size - 1 && front != 0) {
			rear = 0;
			arr[rear] = val;
		}
		else {
			rear++;
			arr[rear] = val;
		}
	

	}
	int dequeue() {
		if (front == rear) {
			cout << "queue is empty" << endl;
		}
		else if (front == size - 1 && rear != 0) {
			front = 0;
		}
		else {
			front++;
		}
		
		return front;
		
	}
	int peak() {
		if (front == -1) {
			return -1;
		}
		return front;
	}

};
int main() {
	queue q(4);
	q.enqueue(5);
	q.enqueue(7);
	q.enqueue(6);
	q.enqueue(8);
	q.display();
	q.dequeue();
	q.enqueue(10);
	q.display();
	
}