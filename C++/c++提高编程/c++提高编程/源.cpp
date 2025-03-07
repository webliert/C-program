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
	struct Person PersonArray[MAX];		//通讯录中保存的联系人数组
	int m_Size;		//the person number of addressbooks
};
void ShowMenu() {
	cout << "*****************************" << endl;
	cout << "******* 请选择对应功能 ******" << endl;
	cout << "******* 1、添加联系人 *******" << endl;
	cout << "******* 2、显示联系人 *******" << endl;
	cout << "******* 3、删除联系人 *******" << endl;
	cout << "******* 4、查找联系人 *******" << endl;
	cout << "******* 5、清空联系人 *******" << endl;
	cout << "******* 0、退出通讯录 *******" << endl;
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
			cout << "退出程序，欢迎下次使用" << endl;
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