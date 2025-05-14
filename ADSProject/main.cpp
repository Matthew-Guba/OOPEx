#include"Queue.h"

int main() {
	Queue queue;
	int element;

	cout << "Input elemnts, to stop use 0 " << endl;
	do {
		cin >> element;
		if (element != 0) {
			queue.enqueue(element);
		}
	} while (element != 0);

		cout << "Queue: " << endl;

		while (!queue.isEmpty()) {
			cout << queue.dequeue() << " ";
		}

		return 0;
}

