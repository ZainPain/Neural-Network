#ifndef TESTCLASS_H
#define TESTCLASS_H
#include <iostream>
#include <string>

using namespace std;

class TestClass{
    
    public:
        
        string s;
        const int t;
        TestClass(string s,int t)
        :t(t)
        {

        	cout << s << "\n";    
			this->s = s;
        }

		void changeString(string s){
			
			this->s = s;
		}
		 
    
    
};
#endif 	// BURRITO_H
