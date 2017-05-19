

#include<stack>
#include<string>
#include<iostream>

using namespace std;

void  reverseStr(string &str)
{
	stack<char> chSta;
	for (char ch : str){
	   chSta.push(ch);
	}
	for (int i = 0; i < str.size(); ++i) {
	   str[i] = chSta.top();
	   chSta.pop();
	}
}

/*
int main()
{
	string str = "aerregvew";
	reverseStr(str);
	cout << str << endl;

	cin.get();
	return 0;
}

*/