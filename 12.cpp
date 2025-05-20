#include<iostream>
#include<exception>
using namespace std;

class A {
	public :
		A() {
			cout<<"A"<<endl;
		}
		
		virtual ~A() { 
			cout<<"~A"<<endl; 
		}
		
		virtual void throwf() throw(int,double,char) {
			throw 'N';
		}
};

class B : public A {
	public :
		B() {
			cout<<"B"<<endl;
		}
		
		~B() { 
			cout<<"~A"<<endl; 
		}
		
		void throwf() throw(int) {
			throw 9;
		}
};

class C : public B {
	public :
		C() {
			cout<<"C"<<endl;
		}
		
		~C() { 
			cout<<"~C"<<endl; 
		}
		
		void throwbase() {
			throwf();
		}
		
		void f() throw(double) {
			throw 12.3;
		}
};

class D : public C {
	public :
        D() { 
			cout<<"D"<<endl; 
		}
		
        virtual ~D() { 
			cout<<"~D"<<endl; 
		}
		
        void f() throw (double) { 
	  		throw 3.0; 
        }
        
        void func2() throw (double) { 
        	cout<<"func2"<<endl;
	  		throw 12.4; 
        }
        
        void func1() throw (double) { 
        	cout<<"func1"<<endl;
        	func2();
	  		throw 4.6; 
        }
        
        void func() throw (double) { 
	  		cout<<"func"<<endl;
	  		func1();
			throw 0.3; 
        }
};

class MyException : public exception {
	virtual const char* what() const throw() {
		return "Hello my exception";
	}
};

void m() throw(A) {
	B b;
	throw b;
}

int main() {
	A a;
	B b;
	C c;
	D d;
	
	cout<<"---Example 12.1---"<<endl;
	try {
		throw 5;
	}
	catch(int e) {
		cout<<"Exception integer : "<<e<<endl;
	}	
	try {
		throw 10.3;
	}
	catch(double e) {
		cout<<"Exception double : "<<e<<endl;
	}
	try {
		throw 'A';
	}
	catch(char e) {
		cout<<"Exception character : "<<e<<endl;
	}
	try {
		throw 'Naruemon';
	}
	catch(...) {
		cout<<"Other Exception"<<endl;
	}
	cout<<"Hello World"<<endl;
	cout<<"\n--------------------------------\n"<<endl;

	cout<<"---Example 12.2---"<<endl;
	try {
		char *s = "hello";
		throw s;
		cout<<s<<endl;
	}
	catch(int e) {
		cout<<"Exception integer : "<<e<<endl;
	}
	catch(double e) {
		cout<<"Exception double : "<<e<<endl;
	}
	catch(char e) {
		cout<<"Exception character: "<<e<<endl;
	}
	catch(...) {
		cout<<"Other Exception"<<endl;
	}
	cout<<"Hello World"<<endl;
	cout<<"\n--------------------------------\n"<<endl;

	
	cout<<"---Example 12.3---"<<endl;
	try {
		m();
	}
	catch(C) {
		cout<<"catch C"<<endl;
	}
	catch(A) {
		cout<<"catch A"<<endl;
	}
	catch(B) {
		cout<<"catch B"<<endl;
	}
	catch(...) {
		cout<<"no catch"<<endl;
	}
	cout<<"Hello World"<<endl;
	cout<<endl;
	
	cout<<"---new catch---"<<endl;
	try {
		m();
	}
	catch(D) {
		cout<<"catch D"<<endl;
	}
	catch(B) {
		cout<<"catch B"<<endl;
	}
	catch(C) {
		cout<<"catch C"<<endl;
	}
	catch(A) {
		cout<<"catch A"<<endl;
	}
	catch(D) {
		cout<<"catch D"<<endl;
	}
	catch(...) {
		cout<<"no catch"<<endl;
	}
	cout<<"Hello World"<<endl;
	cout<<"\n--------------------------------\n"<<endl;
	
	cout<<"---Example 12.4---"<<endl;
	try {
		try {
			try{
				d.func();
			}
			catch(char* d) {
				throw;
			}
		}
		catch(...) {
			throw;
		}
	}
	catch(double d) {
		cout<<"Exception : "<<d<<endl;
	}
	cout<<"Hello World"<<endl;
	cout<<"\n--------------------------------\n"<<endl;
	
	cout<<"---Example 12.5---"<<endl;
	A *x = new B();
    try {
        x->throwf();    
        cout<<"hello x"<<endl;
    }
    catch(int i) {
        cout<<"Exception : "<<i<<endl;      
    }
    catch(double d) {
        cout<<"Exception : "<<d<<endl;      
    }
    catch(...) {
        cout<<"Other exceptions"<<endl;
    }
    delete x;
    try {
		cout<<"class C"<<endl;
		c.throwf();
	}
	catch(int i) {
		cout<<"Exception : "<<i<<endl;
	}
	try {
		cout<<"class B"<<endl;
		b.throwf();
	}
	catch(int i) {
		cout<<"Exception : "<<i<<endl;
	}
    cout<<"Hello World"<<endl;
	cout<<"\n--------------------------------\n"<<endl;
	
	cout<<"---Example 12.6---"<<endl;
	MyException ex;
	try {
		cout<<"My world"<<endl;
		throw ex;
	}
	catch(exception& e) {
		cout<<e.what()<<endl;
	}
	cout<<"Hello World"<<endl;
}

