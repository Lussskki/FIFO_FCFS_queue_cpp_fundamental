#include <iostream>
#include <queue>
using namespace std;

void print_schedule(queue<string> queue)
{
	while (!queue.empty())
	{
		cout << queue.front() << " ";
		queue.pop();
	}
}
int main()
{
	queue<string>my_queue;
	my_queue.push("Morning: on 7 pm");
	my_queue.push("Midnight: learning c++");
	my_queue.push("Night: watching to tv");

	cout << "Schedule size: " << my_queue.size() << std::endl;
	cout << "First element is: " << my_queue.front() << std::endl;
	cout << "Last element is: " << my_queue.back() << std::endl;

	cout << "My queue: ";
	print_schedule(my_queue);
}