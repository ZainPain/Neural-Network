#include <iostream>
#include <string>
#include "testclass.h"

using namespace std;

// default arguments delcared here
int volume(int l = 1, int w = 1, int h = 1);

int main(){

	string s = "Hello Zain! \n";
	TestClass sweg = TestClass(s,10);
	sweg.changeString("string \n");
	cout << sweg.s;
	cout << volume() << '\n';

	return 0;
}

int volume(int l, int w, int h){
	return l*w*h;
}
