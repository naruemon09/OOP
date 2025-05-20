#include<iostream>
using namespace std;

template <class T>
class A {
	private :
	    T* array;
	    size_t size;
	    
	    public :
	    	A(T* arr, size_t arrSize) {
	    		array = new T[arrSize];
		        size = arrSize;
		        for (size_t i = 0; i < size; i++) {
		            array[i] = arr[i];
				}
			}
			
			~A() {
				delete[] array;
			}
			
			T max() {
				T max = array[0];
				for(size_t i=1; i<size; i++) {
					if(array[i] > max) {
						max = array[i];
					}
				}
				return max;
			}
			
			T min() {
				T min = array[0];
				for(size_t i=1; i<size; i++) {
					if(array[i] < min) {
						min = array[i];
					}
				}
				return min;
			}	
};

int main() {
	int intArray[] = {5,2,9,1,7};
	A<int> intArr(intArray,5);
	cout<<"Max value : "<<intArr.max()<<endl;
	cout<<"Min value : "<<intArr.min()<<endl;
	cout<<endl;
	
	double doubleArray[] = {3.14,2.71,1.618,0.707};
	A<double> doubleArr(doubleArray,4);
	cout<<"Max value : "<<doubleArr.max()<<endl;
	cout<<"Min value : "<<doubleArr.min()<<endl;
	cout<<endl;
}

