#include <iostream>
#include <string> //библиотека позвол работать со строками С++

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Символьный массив из языка С
	/*char c_str[]{'H','I','!','\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello World!" };
	std::cout << c_str2 << std::endl;*/

	//Строки из языка программирования С++
/*std::string str; //это объект
	std::cout << str << std::endl; //выводится пустая строка 
	str = "Hello World !"; //Hello world!
	std::cout << str << std::endl;
	str = "Bye World!"; // Bye World!
	std::cout << str << std::endl;

	str += "!!!!! :("; //добавление текста в конец строки
	std::cout << str+ "....." << std::endl;
	std::cout << str << std::endl;*/

	//Ввод строки 
	/*std::cout << "Привет! Какое твое имя?\nВвод ->";
	std::string name;
	std::cin >> name; //ввод одного слова до первого пробела 
	std::cout << "Привет, " << name << "!\n";
	std::cin.ignore();
	std::cout << "А кем ты работаешь?\nВвод ->";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Ого, " << job << "? Круто!\n";
	std::cout << "А сколько тебе лет?\nВвод - >";
	int age;
	std::cin >> age;
	std::cout << "Когда-то и мне было " << age << " лет...\n";*/

	//Методы строк
	/*std::string my_str = "Hello world!";

	//методы length и size, методы возвращающие 
	//std::cout << my_str.length() << std::endl; //12 длина hello world
	//std::cout << my_str.size() << std::endl; //12 длина hello world

	//Метод insert вставляющий подстроку в строку
	//my_str.insert(3, "WWWWW");
	//std::cout << my_str << std::endl; //HelWWWWlo world!

	//Метод replace заменяющий часть строки на новую 
	//my_str.replace(3, 5, "WWW");
	//std::cout << my_str << std::endl;

	//метод find, возвращающий позицию первого вхождения подстроки в строку
	//std::cout << my_str.find("l") << std::endl; //2
	//std::cout << my_str.find("l",5) << std::endl; //9 позиция, откуда нужно искать 

	//Метод rfind, возвращающий позицию последнего вхождения подстроки в строку
	//std::cout << my_str.rfind("o") << std::endl; // поиск с самого конца  - 7 
	//std::cout << my_str.rfind("o",6) << std::endl; // поиск начиная с 6й позиции - 4

	//Метод substr, возвращающий подстроку из строки 
	//std::cout << my_str.substr(4) << std::endl;
	//std::cout << my_str.substr(4,5) << std::endl;*/

	//Ф-ции для работы со строками
	//ф-ция возвращает результат превращения числа в строку
	int num = 123;
	std::string num_str = std::to_string(num);//"123"
	num_str += '!';
	std::cout << "num_str = " << num_str << std::endl;

	//Ф-ция превращающая строку в число int
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " << num << std::endl;


	return 0;
}