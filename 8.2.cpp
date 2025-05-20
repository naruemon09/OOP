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
			set(w,1.0);
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
		
		Rectangle operator++() {		//prefix
			++length;
			return *this;
		}
		
		Rectangle operator++(int) {		//postfix
			return Rectangle(++width);
		}
		
		friend Rectangle operator--(Rectangle &x) {		//prefix
			if(x > 1) {
				x.length--;
				return x;
			}
			else {
				cout<<"length must be greater then 0"<<endl;
				return 1;
			}		
		}
		
		friend Rectangle operator--(Rectangle &x,int) {		//postfix
			if(x > 1) {
				x.width--;
				return x;
			}	
			else {
				cout<<"width must be greater then 0"<<endl;
				return 1;
			}		
		}
		
		bool operator < (Rectangle x) {
			return (areaRec() < x.areaRec()) ? true : false;
		}
		
		bool operator <= (Rectangle x) {
			return (areaRec() <= x.areaRec()) ? true : false;
		}
		
		bool operator > (Rectangle x) {
			return (areaRec() > x.areaRec()) ? true : false;
		}
		
		bool operator >= (Rectangle x) {
			return (areaRec() >= x.areaRec()) ? true : false;
		}
		
		bool operator != (Rectangle x) {
			return (areaRec() != x.areaRec()) ? true : false;
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
		
		double operator[](int i) {
			switch(i) {
				case 1 : return width;
				case 2 : return length;
				default : return 0.0;
			}
		}

		double operator()() {
			return areaRec();
		}
		
		void operator()(int w) {
			setWidth(w);
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
	
	cout<<"----------------------"<<endl;
	
	Rectangle x(5.0,8.0);
	Rectangle y;
	x.show();
	y.show();
	cout<<"----Operator(prefix)----"<<endl;
	y = ++x;
	x.show();	
	y.show();	
	--x;			
	x.show();
	y.show();
	cout<<"----Operator(postfix)----"<<endl;
	y = x++;
	x.show();	
	y.show();		
	x--;		
	x.show();
	y.show();
	if(x<y)
		cout<<"x < y"<<endl;
	else
		cout<<"x >= y"<<endl;
	if(x>y)
		cout<<"x > y"<<endl;
	else
		cout<<"x <= y"<<endl;	
	if(x!=y)
		cout<<"not equal"<<endl;
	else
		cout<<"equal"<<endl;
	x.show();
	y.show();
	
	
	cout<<"----------------------"<<endl;
	
	Rectangle i;
	Rectangle j(1.0,1.0);
	i.show();
	j.show();
	i = j--;
	i.show();
	j.show();
	j++;
	i.show();
	j.show();
	if(i<j)
		cout<<"i < j"<<endl;
	else
		cout<<"i >= j"<<endl;
	if(i>j)
		cout<<"i > j"<<endl;
	else
		cout<<"i <= j"<<endl;	
	if(i!=j)
		cout<<"not equal"<<endl;
	else
		cout<<"equal"<<endl;
		
	Rectangle z(2.0,2.5);
    cout<<z[1]<<endl;
    cout<<z[2]<<endl;
    cout<<z[3]<<endl;
    
    cout<<"area : "<<j()<<endl;
    cout<<"area : "<<z()<<endl;
    z(2.0);
    z.show();
    
    


}
