#include <iostream>
#include <string> //���������� ������ �������� �� �������� �++

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//���������� ������ �� ����� �
	/*char c_str[]{'H','I','!','\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello World!" };
	std::cout << c_str2 << std::endl;*/

	//������ �� ����� ���������������� �++
/*std::string str; //��� ������
	std::cout << str << std::endl; //��������� ������ ������ 
	str = "Hello World !"; //Hello world!
	std::cout << str << std::endl;
	str = "Bye World!"; // Bye World!
	std::cout << str << std::endl;

	str += "!!!!! :("; //���������� ������ � ����� ������
	std::cout << str+ "....." << std::endl;
	std::cout << str << std::endl;*/

	//���� ������ 
	/*std::cout << "������! ����� ���� ���?\n���� ->";
	std::string name;
	std::cin >> name; //���� ������ ����� �� ������� ������� 
	std::cout << "������, " << name << "!\n";
	std::cin.ignore();
	std::cout << "� ��� �� ���������?\n���� ->";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "���, " << job << "? �����!\n";
	std::cout << "� ������� ���� ���?\n���� - >";
	int age;
	std::cin >> age;
	std::cout << "�����-�� � ��� ���� " << age << " ���...\n";*/

	//������ �����
	/*std::string my_str = "Hello world!";

	//������ length � size, ������ ������������ 
	//std::cout << my_str.length() << std::endl; //12 ����� hello world
	//std::cout << my_str.size() << std::endl; //12 ����� hello world

	//����� insert ����������� ��������� � ������
	//my_str.insert(3, "WWWWW");
	//std::cout << my_str << std::endl; //HelWWWWlo world!

	//����� replace ���������� ����� ������ �� ����� 
	//my_str.replace(3, 5, "WWW");
	//std::cout << my_str << std::endl;

	//����� find, ������������ ������� ������� ��������� ��������� � ������
	//std::cout << my_str.find("l") << std::endl; //2
	//std::cout << my_str.find("l",5) << std::endl; //9 �������, ������ ����� ������ 

	//����� rfind, ������������ ������� ���������� ��������� ��������� � ������
	//std::cout << my_str.rfind("o") << std::endl; // ����� � ������ �����  - 7 
	//std::cout << my_str.rfind("o",6) << std::endl; // ����� ������� � 6� ������� - 4

	//����� substr, ������������ ��������� �� ������ 
	//std::cout << my_str.substr(4) << std::endl;
	//std::cout << my_str.substr(4,5) << std::endl;*/

	//�-��� ��� ������ �� ��������
	//�-��� ���������� ��������� ����������� ����� � ������
	int num = 123;
	std::string num_str = std::to_string(num);//"123"
	num_str += '!';
	std::cout << "num_str = " << num_str << std::endl;

	//�-��� ������������ ������ � ����� int
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " << num << std::endl;


	return 0;
}