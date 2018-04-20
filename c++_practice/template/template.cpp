#include <iostream>
#include <string>

using namespace std;

template <class T>
class Computation{

	T first, second;
	public:
		Computation(T a, T b){
			first = a;
			second = b;
		}
		T bigger();
};

template<class T>
T Computation<T>::bigger(){
	return (first > second ? first : second) ;	
	
}


template<class data>
data add(data a, data b){
	return a + b;

}

template<class S,class T>
S smaller(S a, T b){

	return (a < b ? a : b);
}

int main(){
	int a = 10, b = 20, c,d;
	float e = 27.9;
	
	c = add(a,b);
	cout << c << endl;
	d = smaller(c,e);
	cout << d << endl;	

	Computation <int> comp(d,e);
	cout << comp.bigger() << endl;
}



