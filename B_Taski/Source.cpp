#define _CRT_SECURE_NO_WARNINGS		
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <array>
#include <functional> 
#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
#include <ctime>
#include <stack>
#include <queue>
int reversedigit(int digit)
{
	std::string reverseble = "";
	while (digit != 0)
	{
		std::stringstream ss;
		ss << digit % 10;
		reverseble += ss.str();
		digit /= 10;
	}
	digit = atoi(reverseble.c_str());
	return digit;
}
int pobit(int a,int b,int c)
{
	return a & b | c;
}
bool  primary(int n)
{
	for (int i = 2; i < std::sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
}
template <class ZXC>
ZXC rofelka(ZXC a, ZXC b, ZXC c)
{
	auto lol{ [](ZXC a,ZXC b) { return a + b; } };
	return c+lol(a,b);
}
void repeat(int repetitions,const std::function<void(int)>& fn)
{
	for (int i{ 0 }; i < repetitions; ++i)
	{
		fn(i);
	}
}
void mojet(int count, const std::function<void(int, int)>& asd)
{
	for (int i{ 0 }, j{ 0 }; i < count; i++, j++)
	{
		asd(i, j);
	}
}

int main()
{
	srand(time(0));
	//std::cout << reversedigit(123) << std::endl;
	//std::cout << pobit(1, 0, 2) << std::endl;
	//int a[10];
	///*for (int i = 0; i < 10; i++)
	//{
	//	printf("a[%d] = ", i);
	//	scanf("%d", &a[i]);*/
	////}
	//std::cout << "template- " <<  rofelka(1,1,1) << std::endl;
	//std::cout << std::endl;
	//auto lol{ [](int c) { return c+9; } };
	//std::cout << lol(5) << std::endl;
	////repeat(3, [](int i) {std::cout << i << '\n';
	//	//});
	////mojet(3, [](int i, int j) {std:.:cout << i << " " << j << '\n'; });
	std::array<int,6> qwerty{ 13, 90, 99, 5, 40, 80 };
	std::array<int, 5> a = {1,2,3,4,5};
	std::sort(qwerty.begin(), qwerty.end(), std::greater<int>());
	for (size_t i = 0; i < qwerty.size(); i++)
	{
		std::cout << qwerty[i] << " ";
	}
	int asd = rand() % 3;
	std::cout << '\n' << asd << "random" <<  std::endl;

	/*std::stack <int> first_stack;
	int z = 0;
	while (z != 5)
	{
		int a;
		std::cout << "enter steck-> ";
		std::cin >> a;
		first_stack.push(a);
		z++;
	}
	if (first_stack.empty() == true)
		std::cout << "steck empty" << std::endl;
	std::cout << "first steck -> " << first_stack.top() << std::endl;
	first_stack.pop();
	std::cout << "first steck -> " << first_stack.top() << std::endl;*/
	//int steck[20];
	//int i = -1;  
	//for (int j = 0; j < 6; j++) {
	//	int a;
	//	std::cin >> a;
	//	i++;  // увеличиваем i на один
	//	steck[i] = a;  // добавл€ем в стек элемент
	//}
	//if (i == -1) std::cout << "steck empty" <<std::endl;  // провер€ем пуст ли стек (нет)
	//std::cout << steck[i] << " this is up element" << std::endl;
	//std::cout << "delete up element" << std::endl;
	//i--;
	/*std::stack <std::string> hehe;
	int string_stack = 0;
	while (string_stack != 5)
	{
		std::string a;
		std::cin >> a;
		hehe.push(a);
		string_stack++;
	}*/
	//std::cout << hehe.top() << " - 1111";
	//std::queue <int> q;
	//std::cout << "7 chisel: " << std::endl;
	//for (int h = 0; h < 7; h++) {
	//	int a;
	//	std::cin >> a;
	//	q.push(a);
	//}
	//std::cout << std::endl;
	//std::cout << "1v ocheredi: " << q.front() << std::endl;
	//q.pop();  // удал€ем элемент из очереди
	//std::cout << "1 posle udalenia: " << q.front() << std::endl;
	//if (!q.empty()) std::cout << "queue ne pusta";
	std::priority_queue <int> priority_q;  // объ€вл€ем приоритетную очередь

	std::cout << "7 chisel: " << std::endl;

	for (int j = 0; j < 7; j++) {
		int a; std::cin >> a;

		priority_q.push(a);  // добавл€ем элементы в очередь
	}
	// выводим первый
	std::cout << "1 element: " << priority_q.top();  // элемент
}