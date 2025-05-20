#include<iostream>
#include<cstring>
using namespace std;

class Shape {
	public :
	    virtual double area() = 0;
		virtual void print() = 0;
		virtual void input() = 0;
		
		friend ostream& operator<<(ostream& os,Shape &s);
    	friend istream& operator>>(istream& is,Shape &s);	
};

ostream& operator<<(ostream& os,Shape &s) {
	s.print();
	return os;
}

istream& operator>>(istream& is,Shape &s) {
	s.input();
	return is;
}

class TwoDimensional : public Shape {
	public :
		virtual double area() = 0;
	    virtual void print() = 0;
	    virtual void input() = 0;
	    
	    friend ostream& operator<<(ostream& os,TwoDimensional &s);
    	friend istream& operator>>(istream& is,TwoDimensional &s);
};

ostream& operator<<(ostream& os,TwoDimensional &s) {
    s.print();
    return os;
}

istream& operator>>(istream& is,TwoDimensional &s) {
    s.input();
    return is;
}

class ThreeDimensional : public Shape {
	public :
		virtual double area() = 0;
		virtual double volume() = 0;
	    virtual void print() = 0;
	    virtual void input() = 0;
	    
	    friend ostream& operator<<(ostream& os,ThreeDimensional &s);
    	friend istream& operator>>(istream& is,ThreeDimensional &s);
};

ostream& operator<<(ostream& os,ThreeDimensional &s) {
    s.print();
    return os;
}

istream& operator>>(istream& is,ThreeDimensional &s) {
    s.input();
    return is;
}

class Rectangle : public TwoDimensional {
	private :
		double width;
		double length;
		
		public :
			Rectangle() {
				setRectangle(0,0);
			}
			
			Rectangle(double w, double l) {
				setRectangle(w,l);
			}
			
			~Rectangle() {
				cout<<"bye Rectangle"<<endl;
			}
			
			void setRectangle(double w,double l) {
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
			
			double area() {
		        return width * length;
		    }
		
		    void print() {
		        cout<<"--Rectangle--"<<endl;
		        cout<<"width = "<<width<<endl;
		        cout<<"length = "<<length<<endl;
		        cout<<"area = "<<area()<<endl;
		    }
		
		    void input() {
		        cout<<"Enter width = "; cin>>width;
		        cout<<"Enter length = "; cin>>length;
		    }
};			

class Triangle : public TwoDimensional {
	private :
		double base;
		double height;
		
		public :
			Triangle() {
				setTriangle(0,0);
			}
			
			Triangle(double b, double h) {
				setTriangle(b,h);
			}
			
			~Triangle() {
				cout<<"bye Triangle"<<endl;
			}
			
			void setTriangle(double b,double h) {
				base = b;
				height = h;
			}
			
			void setBase(double b) {
				base = b;
			}
			
			void setHeight(double h) {
				height = h;
			}
			
			double getBase() {
				return base;
			}
			
			double getHeight() {
				return height;
			}
			
			double area() {
		        return 0.5 * base * height;
		    }
		    
		    void print() {
		        cout<<"--Triangle--"<<endl;
		        cout<<"base = "<<base<<endl;
		        cout<<"height = "<<height<<endl;
		        cout<<"area = "<<area()<<endl;
		    }
		
		    void input() {
		        cout<<"Enter base = "; cin>>base;
		        cout<<"Enter height = "; cin>>height;
		    }
};

class Circle : public TwoDimensional {
	private :
		double radius;
		
		public :
			Circle() {
				setCircle(0);
			}
			
			Circle(double r) {
				setCircle(r);
			}
			
			~Circle() {
				cout<<"bye Circle"<<endl;
			}
			
			void setCircle(double r) {
				radius = r;
			}
			
			void setRadius(double r) {
				radius = r;
			}
			
			double getRadius() {
				return radius;
			}
			
			double area() {
		        return 3.14159 * radius * radius;
		    }
		    
		    void print() {
		        cout<<"--Circle--"<<endl;
		        cout<<"radius = "<<radius<<endl;
		        cout<<"area = "<<area()<<endl;
		    }
		
		    void input() {
		        cout<<"Enter radius = "; cin>>radius;
		    }
};

class Cylinder : public ThreeDimensional {
	private :
		double radius;
		double height;
		
		public :
			Cylinder() {
				setCylinder(0,0);
			}
			
			Cylinder(double r, double h) {
				setCylinder(r,h);
			}
			
			~Cylinder() {
				cout<<"bye Cylinder"<<endl;
			}
			
			void setCylinder(double r,double h) {
				radius = r;
				height = h;
			}
			
			void setRadius(double r) {
				radius = r;
			}
			
			void setHeight(double h) {
				height = h;
			}
			
			double getRadius() {
				return radius;
			}
			
			double getHeight() {
				return height;
			}
			
			double area() {
		        return (2 * 3.14159 * radius * height) + (2 * 3.14159 * radius * radius);
		    }
		    
			double volume() {
		        return 3.14159 * radius * radius * height;
		    }
		    
		    void print() {
		        cout<<"--Cylinder--"<<endl;
		        cout<<"radius = "<<radius<<endl;
		        cout<<"height = "<<height<<endl;
		        cout<<"area = "<<area()<<endl;
		        cout<<"volume = "<<volume()<<endl;
		    }
		
		    void input() {
		        cout<<"Enter radius = "; cin>>radius;
		        cout<<"Enter height = "; cin>>height;
		    }
};

class Sphere : public ThreeDimensional {
	private :
		double radius;
		
		public :
			Sphere() {
				setSphere(0);
			}
			
			Sphere(double r) {
				setSphere(r);
			}
			
			~Sphere() {
				cout<<"bye Sphere"<<endl;
			}
			
			void setSphere(double r) {
				radius = r;
			}
			
			void setRadius(double r) {
				radius = r;
			}
			
			double getRadius() {
				return radius;
			}
			
			double area() {
		        return 4 * 3.14159 * radius * radius;
		    }
			
			double volume() {
		        return (4 / 3) * 3.14159 * radius * radius * radius;
		    }
		    
		    void print() {
		        cout<<"--Sphere--"<<endl;
		        cout<<"radius = "<<radius<<endl;
		        cout<<"area = "<<area()<<endl;
		        cout<<"volume = "<<volume()<<endl;
		    }
		
		    void input() {
		        cout<<"Enter radius = "; cin>>radius;
		    }
};

int main() {
	Rectangle r4,r5;
	Rectangle r2;
	Rectangle r3(4,5);
	r4.setRectangle(3,6);
	r5.setWidth(2);
	r5.setLength(3);
	cout<<r2;
	cout<<r3;
	cout<<r4;
	cout<<r5;
	cout<<"Get width = "<<r5.getWidth()<<endl;
	cout<<"Get length = "<<r5.getLength()<<endl;
	cout<<endl;
	
    Triangle t4,t5;
    Triangle t2;
	Triangle t3(2,3);
	t4.setTriangle(4,5);
	t5.setBase(7);
	t5.setHeight(8);
	cout<<t2;
	cout<<t3;
	cout<<t4;
	cout<<t5;
	cout<<"Get base = "<<t5.getBase()<<endl;
	cout<<"Get height = "<<t5.getHeight()<<endl;
	cout<<endl;
	
    Circle ci4,ci5;
    Circle ci2;
    Circle ci3(5);
    ci4.setCircle(6);
    ci5.setRadius(7);
    cout<<ci2;
	cout<<ci3;
	cout<<ci4;
	cout<<ci5;
    cout<<"Get radius = "<<ci5.getRadius()<<endl;
	cout<<endl;
	
    Cylinder cy4,cy5;
    Cylinder cy2;
    Cylinder cy3(3,5);
    cy4.setCylinder(4,9);
    cy5.setRadius(2);
    cy5.setHeight(6);
    cout<<cy2;
	cout<<cy3;
	cout<<cy4;
	cout<<cy5;
	cout<<"Get radius = "<<cy5.getRadius()<<endl;
	cout<<"Get height = "<<cy5.getHeight()<<endl;
	cout<<endl;
    
    Sphere s4,s5;
    Sphere s2;
    Sphere s3(6);
    s4.setSphere(8);
    s5.setRadius(5);
    cout<<s2;
	cout<<s3;
	cout<<s4;
	cout<<s5;
    cout<<"Get radius = "<<s5.getRadius()<<endl;
	cout<<endl;
    
	Rectangle r;
    Triangle t;
    Circle ci;
    Cylinder cy;
    Sphere s;
    
    cout<<"Enter rectangle"<<endl; cin>>r;
    cout<<r;
    cout<<endl; 
    
    cout<<"Enter triangle"<<endl; cin>>t; 
    cout<<t;
    cout<<endl; 
    
    cout<<"Enter circle"<<endl; cin>>ci;
    cout<<ci;
    cout<<endl; 
    
    cout<<"Enter cylinder"<<endl; cin>>cy;
    cout<<cy;
    cout<<endl; 
    
    cout<<"Enter sphere"<<endl; cin>>s;
    cout<<s;
    cout<<endl;
    
    TwoDimensional *two[3];
    Rectangle r1;
    Triangle t1;
    Circle ci1;
    two[0] = &r1;
    two[1] = &t1;
    two[2] = &ci1;
    for(int i=0; i<3;i++) {
    	two[i]->input();
    	cout<<endl;
    	two[i]->print();
    	cout<<endl;
	}
    
    ThreeDimensional *three[2];
    Cylinder cy1;
    Sphere s1;
    three[0] = &cy1;
    three[1] = &s1;
    for(int i=0; i<2; i++) {
    	three[i]->input();
    	cout<<endl;
    	three[i]->print();
    	cout<<endl;
	}
	
	TwoDimensional* twoD[] = {
        new Rectangle(5,10),
        new Triangle(3,6),
        new Circle(4),
    };
    for(int i=0; i<3; i++) {
        cout<<"TwoDimensional "<<i+1<<" area :"<<twoD[i]->area()<<endl;   
    }
    
    ThreeDimensional* threeD[] = {
		new Cylinder(2,5),
        new Sphere(3)
	};
    for(int i=0; i<2; i++) {
    	cout<<"ThreeDimensional "<<i+1<<" area :"<<threeD[i]->area()<<endl;
    	cout<<"ThreeDimensional "<<i+1<<" volume : "<<threeD[i]->volume()<<endl;
	}

    for (int i=0; i<3; i++) {
        delete threeD[i];
    }
    for (int i=0; i<2; i++) {
        delete threeD[i];
    }
}
