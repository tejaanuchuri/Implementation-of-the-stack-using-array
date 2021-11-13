#include<iostream>
using namespace std;

const int array_size = 10000;

class stack {
	int top;
public:
	int arr[array_size];
	stack() {
		top = -1;
	}
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};
bool stack::push(int x) {
	if (top >= array_size - 1) {
		cout << "stack overflow" << endl;
		return false;
	}
	else {
		arr[++top] = x;
		cout << x << " is push into stack" << endl;
	}
	return true;
}
int stack::pop() {
	if (top < 0) {
		cout << "stack underflow" << endl;
	}
	else {
		int x = arr[top--];
		return x;
	}
	return INT_MAX;
}
int stack::peek() {
	if (top < 0) {
		cout << "There is no stack elements found...! in stack" << endl;
		return -1;
	}
	else {
		int x = arr[top];
		return x;
	}
}
bool stack::isEmpty() {
	return (top < 0);
}
int main() {
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << "Elements present in stack...!" << endl;
	while (!s.isEmpty()) {
		cout << s.peek() << " ";
		s.pop();
	}
	return 0;
}
