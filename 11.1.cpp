#include<iostream>
using namespace std;

template <class T>
T max(T x,T y,T z) {
	T maxVal = x;
	if (y > maxVal) {
	    maxVal = y;
	}
	if (z > maxVal) {
	    maxVal = z;
	}
	return maxVal;
}

int main() {
	cout<<"Max value : "<<max(10,5,16)<<endl;
	cout<<"Max value : "<<max(1.5,3.7,9.5)<<endl;
	cout<<"Max value : "<<max(6,88,25)<<endl;
	cout<<"Max value : "<<max(4.5,8.3,13.1)<<endl;
	cout<<"Max value : "<<max(75,8,4)<<endl;
}
