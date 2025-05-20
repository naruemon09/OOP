#include<iostream>
using namespace std;

class Rectangle {
	private:
		static int num;
		double width;
		double length;
	
	public:
		Rectangle() {
			num++;
			set(0.0,0.0);
		}
		
		Rectangle(double w) {
			num++;
			set(w,0.0);
		}
		
		Rectangle(double w,double l) {
			num++;
			set(w,l);
		}
		
		~Rectangle() {
			num--;
			cout<<num<<endl;
		}
		
		void set(double w,double l) {
			width = w;
			length = l;
		}
		
		void setWidth(double w) {
			width = w;
		}
		
		void setLength(double l) {
			length = l;
		}
		
		double getWidth() {
			return width;
		}
		
		double getLength() {
			return length;
		}
		
		double areaRec() {
			double area;
			return area = width * length;
		}
		
		double perimeterRec() {
			double perimeter;
			return perimeter = (width*2) + (length*2);
		}
		
		void show() {
			cout<<"width = "<<width<<endl;
			cout<<"length = "<<length<<endl;
			cout<<"area = "<<areaRec()<<endl;
			cout<<"perimeter = "<<perimeterRec()<<endl;
			cout<<endl;
		}
		
		static int count() {
        	return num;
		}
};
int Rectangle::num;

int main() {
	cout<<Rectangle::count()<<endl;
    Rectangle aRectangle;
    cout<<Rectangle::count()<<endl;
    Rectangle bRectangle(2.0);
    cout<<Rectangle::count()<<endl;
    Rectangle cRectangle(3.5,4.0);
    cout<<Rectangle::count()<<endl;
    
    Rectangle myRectangle;
    myRectangle.setWidth(5.0);
    myRectangle.setLength(6.5);
    
    aRectangle.show();
    bRectangle.show();
    cRectangle.show();
    myRectangle.show();
    
	cout<<"Get width = "<<aRectangle.getWidth()<<endl;
	cout<<"Get length = "<<aRectangle.getLength()<<endl;
	cout<<endl;
	
	cout<<"Get width = "<<bRectangle.getWidth()<<endl;
	cout<<"Get length = "<<bRectangle.getLength()<<endl;
	cout<<endl;
	
	cout<<"Get width = "<<cRectangle.getWidth()<<endl;
	cout<<"Get length = "<<cRectangle.getLength()<<endl;
	cout<<endl;
	
	cout<<"Get width = "<<myRectangle.getWidth()<<endl;
	cout<<"Get length = "<<myRectangle.getLength()<<endl;
	cout<<endl;
}
