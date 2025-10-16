// Homework 3.cpp
#include <stack>
#include <iostream>
#include <deque>

using namespace std;
using std::stack;

void showdq(deque<int> g) {
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); it++)
		cout << '\t' << *it;
	cout << '\n';
}
void showstack(stack<int> g) {
	while (!g.empty()) {
		cout << '\t' << g.top();
		g.pop();
	}
	cout << '\n';
}
int factorial(int num) {

	if (num == 0 || num == 1) {

		return 1;

	}
	else {

		return num * factorial(num - 1);

	}

}

int main()
{

	stack<int> numStore;
	deque<int> nums;
	nums.push_front(8);
	nums.push_front(7);
	nums.push_front(6);
	nums.push_front(5);
	nums.push_front(4);
	nums.push_front(3);
	nums.push_front(2);
	nums.push_front(1);

	showdq(nums);

	stack<int> stack;

	deque<int>::iterator it;
	for (it = nums.begin(); it != nums.end(); it++) {
		if (*it == 4) {
			stack.push(*it + 1);
		}
		else if (*it == 5) {
			stack.push(*it - 1);
		}
		else {
			stack.push(*it);
		}
	}
		

	showstack(stack);
	nums.clear();

	while (!stack.empty())
	{
		nums.push_front(stack.top());
		stack.pop();
	}

	showdq(nums);


	int n = 5;
	int result = factorial(n);
	cout << result;
}

