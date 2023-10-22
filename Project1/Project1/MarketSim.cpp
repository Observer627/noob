#include <iostream>//有cin后面就得加个cin。get（）来处理/0
#include<string>
#include<ctime>
using namespace std;//非传统C语言我照样测你们妈

const bool y = true, n = false;
int choose,code,number,money;

void menu(); void turn_bool(); void turn_int(); void time_delay(float sec);

int main()
{
	cout << "超市模拟器启动" << endl;
	time_delay(1);// 延迟时间，详情C++PP第123页
	cout << "我是唯一的NPC，因为现在还没有做出详细分类，你想来点什么?" << endl;
	menu();	
	turn_int();//将输入的字符转化为int
	do
	{
		switch (code)
		{

		case 0:
			cout << "想要多少牛肉？" << endl;
			cin >> number;
			money = number * 25;
			cout << "一共 " << number << "斤" << money <<" 元" <<endl;
			cin.get();
			break;

		case 1:
			cout << "想要多少土豆？" << endl;
			cin >> number;
			money = number * 2;
			cout << "一共 " << number << "斤" << money << " 元" << endl;
			cin.get();
			break;

		case 2:
			cout << "想要多少番茄？" << endl;
			cin >> number;
			money = number * 3;
			cout << "一共 " << number << "斤" << money << " 元" << endl;
			cin.get();
			break;

		case 3:
			cout << "想要多少鱼肉？" << endl;
			cin >> number;
			money = number * 15;
			cout << "一共 " << number << "斤" << money << " 元" << endl;
			cin.get();
			break;

		default ://default时不会读入，故没有/0
			cout << "差不多得了，点一些有的吧" << endl;
		
		}
		cout << "还想来点别的什么吗(y/n)" << endl;
	
		turn_bool(); // 把字符y转化成bool y
		if (choose == y)
		{
			cout << "彳亍" << endl;
			menu();
			cin.get();//清除回车
			turn_int();
			continue;
		}
		else if (choose == n)
		{
			cout << "OK，拿好慢走。" << endl;
		}
		else
		{
			choose = n;
			cout << "你在狗叫什么？听不懂就给我滚出去！" << endl;
		}
	} while (choose!=n);
	cout << "收工下班，拜拜了您嘞！" << endl;
	return 0;
}

void menu()
{
	cout<<"牛肉   番茄  土豆  鱼肉" << endl;
	cout << "25元/斤   3元/斤  2元/斤  15/斤" << endl;
}

void turn_bool()//把字符y转化成bool y
{
	char choose_ch;
	cin.get(choose_ch);
	if (choose_ch == 'y')
		choose = y;
	else if (choose_ch == 'n')
		choose = n;
	else
		choose = 3;
}

void turn_int()
{
	string goods;
	getline(cin, goods);
	if (goods == "牛肉")
		code = 0;
	else if (goods == "土豆")
		code = 1;
	else if (goods == "番茄")
		code = 2;
	else if (goods == "鱼肉")
		code = 3;
	else
		code = 4;

}

void time_delay(float sec)
{
	clock_t delay = sec * CLOCKS_PER_SEC;
	clock_t start = clock();
	while (clock()-start<delay);
}