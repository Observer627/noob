#include <iostream>
//�Ǵ�ͳC������������������
int main()
{
	using namespace std;
	cout << "Wlecome to the MMMMMarket,what do yuo want? " << endl;
	char ch[20];
	cin.getline(ch, 20);
	cout << "How many do you want?" << endl;
	int many;
	cin >> many;
	cout << "Here you are " << ch << " with " << many << endl;
	cout<< " TTTTTThank you!";



	return 0;
}