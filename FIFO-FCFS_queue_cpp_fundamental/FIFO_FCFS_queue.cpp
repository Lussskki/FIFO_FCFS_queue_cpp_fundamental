#include <iostream>
#include <queue>
using namespace std;

void print_queue(queue<int> queue)
{
	while (!queue.empty())
	{
		cout << queue.front() << " ";
		queue.pop();
	}
	cout << endl;
}

int main()
 {
	queue<int>my_queue;
	my_queue.push(1);
	my_queue.push(2);
	my_queue.push(3);

	cout << "Size is: " << my_queue.size() << std::endl;
	cout << "First element is: " << my_queue.front() << std::endl;
	cout << "Last element is: " << my_queue.back() << std::endl;

	cout << "My queue: ";
	print_queue(my_queue);
}