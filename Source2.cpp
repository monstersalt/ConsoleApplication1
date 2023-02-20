#include <iostream>
using namespace std;

int main()
{
	string str0(10, '*');
	cout << "str0 = " << str0 << endl;

	string str1 = "Hello";
	auto str2 = "World";
	string str3 = str1 + " " + str2 + "!";
	string str3a = "\"Hello \\ World!\"";
	string str3b = R"("Hello \ World !")";
	cout << "str1 =" << str1 << endl;
	cout << "str2 =" << str2 << endl;
	cout << "str3 =" << str3 << endl;
	cout << "str3a =" << str3a << endl;
	cout << "str3b =" << str3b << endl;

	cout << "str3 capacity =" << str3.capacity() << endl;
	cout << "str3 length(size) =" << str3.length() << endl;
	cout << "str3 max_size =" << str3.max_size() << endl;
	cout << "is str3 empty? =" << str3.empty() << endl;
	cout << "str3[0] =" << str3[0]() << endl;
	cout << "str3.at(5) =" << str3.at(5) << endl;
	cout << "str.fornt() = " << str3.fornt() << endl;
	cout << "str3.substr(0, 5)" << str3.substr(0, 5) << endl;
	cout << "str3.substr(7, 3)" << str3.substr(7, 3) << endl;

	string str4;
	str4.append(str1);
	cout << "str4 = " << str4 << endl;
	str4.append(" ");
	str4 += str2;
	str4.push_back('!');
	cout << "str4 = " << str4 << endl;
	cout << "str4.find(str1) =" << str4.find(str1) << endl;
	cout << "str4.find(\"o\",3) =" << str4.find("o", 6) << endl;
	cout << "str4.find(\"World\",3) =" << str4.find("World", 7) << endl;
	str4.insert(5, " C++");
	cout << "str4 =" << str4 << endl;
	str4.earse(str4.begin() + 6, str.end - 6)
	str4.clear();
	cout << "str4 =" << str4 << endl;
	string str5 = "123456789";
	int n1 = stoi(str5);
	cout << "n1 = " << n1 << endl;
	string str6 = "123.456789";
	double n2 = stod(str6);
	cout << "n2 = " << n2 << endl;
	string str7 = to_string(n1);
	cout << "str7 = " << str7 << endl;
	string str8 = to_string(n2);
	cout << "str8 = " << str8 << endl;
}