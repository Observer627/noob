#include <iostream>//��cin����͵üӸ�cin��get����������/0
#include<string>
#include<ctime>
using namespace std;//�Ǵ�ͳC������������������

const bool y = true, n = false;
int choose,code,number,money;

void menu(); void turn_bool(); void turn_int(); void time_delay(float sec);

int main()
{
	cout << "����ģ��������" << endl;
	time_delay(1);// �ӳ�ʱ�䣬����C++PP��123ҳ
	cout << "����Ψһ��NPC����Ϊ���ڻ�û��������ϸ���࣬��������ʲô?" << endl;
	menu();	
	turn_int();//��������ַ�ת��Ϊint
	do
	{
		switch (code)
		{

		case 0:
			cout << "��Ҫ����ţ�⣿" << endl;
			cin >> number;
			money = number * 25;
			cout << "һ�� " << number << "��" << money <<" Ԫ" <<endl;
			cin.get();
			break;

		case 1:
			cout << "��Ҫ����������" << endl;
			cin >> number;
			money = number * 2;
			cout << "һ�� " << number << "��" << money << " Ԫ" << endl;
			cin.get();
			break;

		case 2:
			cout << "��Ҫ���ٷ��ѣ�" << endl;
			cin >> number;
			money = number * 3;
			cout << "һ�� " << number << "��" << money << " Ԫ" << endl;
			cin.get();
			break;

		case 3:
			cout << "��Ҫ�������⣿" << endl;
			cin >> number;
			money = number * 15;
			cout << "һ�� " << number << "��" << money << " Ԫ" << endl;
			cin.get();
			break;

		default ://defaultʱ������룬��û��/0
			cout << "�����ˣ���һЩ�еİ�" << endl;
		
		}
		cout << "����������ʲô��(y/n)" << endl;
	
		turn_bool(); // ���ַ�yת����bool y
		if (choose == y)
		{
			cout << "��ء" << endl;
			menu();
			cin.get();//����س�
			turn_int();
			continue;
		}
		else if (choose == n)
		{
			cout << "OK���ú����ߡ�" << endl;
		}
		else
		{
			choose = n;
			cout << "���ڹ���ʲô���������͸��ҹ���ȥ��" << endl;
		}
	} while (choose!=n);
	cout << "�չ��°࣬�ݰ������ϣ�" << endl;
	return 0;
}

void menu()
{
	cout<<"ţ��   ����  ����  ����" << endl;
	cout << "25Ԫ/��   3Ԫ/��  2Ԫ/��  15/��" << endl;
}

void turn_bool()//���ַ�yת����bool y
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
	if (goods == "ţ��")
		code = 0;
	else if (goods == "����")
		code = 1;
	else if (goods == "����")
		code = 2;
	else if (goods == "����")
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