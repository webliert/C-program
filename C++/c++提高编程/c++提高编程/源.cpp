#include<iostream>
#include<string>
using namespace std;
constexpr auto MAX = 1000;;
int function = 0;
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Telephone;
	string m_Home;
};
struct Addressbooks
{
	struct Person PersonArray[MAX];		//ͨѶ¼�б������ϵ������
	int m_Size;		//the person number of addressbooks
};
void ShowMenu() {
	cout << "*****************************" << endl;
	cout << "******* ��ѡ���Ӧ���� ******" << endl;
	cout << "******* 1�������ϵ�� *******" << endl;
	cout << "******* 2����ʾ��ϵ�� *******" << endl;
	cout << "******* 3��ɾ����ϵ�� *******" << endl;
	cout << "******* 4��������ϵ�� *******" << endl;
	cout << "******* 5�������ϵ�� *******" << endl;
	cout << "******* 0���˳�ͨѶ¼ *******" << endl;
	cout << "*****************************" << endl;
}

int main() {
	ShowMenu();
	cin >> function;
	while (true)
	{
		switch (function)
		{
		case 0:		//exit addresslist
			cout << "�˳����򣬻�ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		case 1:		//add linkman
			break;
		case 2:		//show linkman
			break;
		case 3:		//delete linkman
			break;
		case 4:		//find linkman
			break;
		case 5:		//empty linkman
			break;
		default:
			break;
		}
	}
	system("pause");
}