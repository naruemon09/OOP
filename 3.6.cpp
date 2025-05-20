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

class MyRect {
	private:
		int row;
		int col;
		Rectangle **a;
		
		void deletes();
		void news();
		
	public:
		MyRect() {
			a = 0;
			row = 0;
			col = 0;
		}
		
		MyRect(int r,int c);
		~MyRect();
		void reset(int x,int y);
		void setRect(int i,int j,int w,int l);
		void setRect(int i,int j,Rectangle r);
		void setRect();
		Rectangle getRect(int x,int y) {
			cout<<"Get Rectangle"<<endl;
			cout<<"a["<<x<<"]["<<y<<"]"<<endl;
			return a[x][y];
		}
		void showMyRect();	
};

MyRect :: MyRect(int r,int c) {
	row = r;
	col = c;
	news();
}

MyRect :: ~MyRect() {
	deletes();
}

void MyRect::reset(int x,int y) {
	deletes();
	row=x;
	col=y;
	news();
}

void MyRect :: deletes() {
	if(a!=0) {
		for(int i=0;i<row;i++)
			delete[] a[i];		//delete column
		delete[] a;				//delete row	
	}
}

void MyRect :: news() {
	a = new Rectangle *[row];				//set up row
		for(int i=0;i<row;i++)
			a[i] = new Rectangle[col];		//set up column
}

void MyRect :: setRect(int i,int j,int w,int l) {
	a[i][j].set(w,l);
}

void MyRect :: setRect(int i,int j,Rectangle r) {
    a[i][j] = r;				
}

void MyRect :: setRect() {
	double w,l;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++) {
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>w>>l;
			cout<<endl;
			a[i][j].set(w,l);
		}
}

void MyRect :: showMyRect() {
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			cout<<"a["<<i<<"]["<<j<<"] = ";
            a[i][j].show();
            cout<<endl;
        }
	}
}

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
	
	MyRect x(3,5);
	x.reset(2,3);
	x.setRect(1,2,4,7);
	
	Rectangle r(2.5,3.0);
	x.setRect(0,0,r);
	
	x.setRect();
	x.showMyRect();
	x.getRect(1,2).show();
}
