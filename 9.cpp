#include<iostream>
#include<cstring>
using namespace std;

class Date {
	private :
		int day;
		int month;
		int year;
		
		public :
			Date() {
				setDate(23,4,1999);
			}
			
			Date(int a) {
				setDate(a,9,2003);
			}
			
			Date(int a,int b) {
				setDate(a,b,1997);
			}
			
			Date(int a,int b,int c) {
				setDate(a,b,c);
			}
			
			~Date() {
				cout<<"bye date"<<endl;
			}
			
			void setDate(int d,int m,int y) {
				day = d;
				month = m;
				year = y;
			}
			
			void setDay(int d) {
				day = d;
			}
			
			void setMonth(int m) {
				month = m;
			}
			
			void setYear(int y) {
				year = y;
			}
			
			int getDay() {
				return day;
			}
			
			int getMonth() {
				return month;
			}
			
			int getYear() {
				return year;
			}
			
			void showDate() {
				cout<<"Date : "<<day<<"/"<<month<<"/"<<year<<endl;
			}
};

class Address {
	private :
		char number[10];
		char road[20];
		char sub_district[20];
		char district[20];
		char province[20];
		char postcode[5];
		
		public :
			Address() {
				setAddress("280","Ramkhamhaeng Rode","Huamark","Bangkapi","Bangkok","10240");
			}
			
			Address(char *a) {
				setAddress(a,"Ratchadaphisek Rode","Huai Khwang","Huai Khwang","Bangkok","10310");
			}
			
			Address(char *a,char *b) {
				setAddress(a,b,"Sam Sen Nai","Phaya Thai","Bangkok","10400");
			}
			
			Address(char *a,char *b,char *c) {
				setAddress(a,b,c,"Klongtoey","Bangkok","10110");
			}
			
			Address(char *a,char *b,char *c,char *d) {
				setAddress(a,b,c,d,"Bangkok","10400");
			}
			
			Address(char *a,char *b,char *c,char *d,char *e) {
				setAddress(a,b,c,d,e,"10240");
			}
			
			Address(char *a,char *b,char *c,char *d,char *e,char *f) {
				setAddress(a,b,c,d,e,f);
			}
			
			~Address() {
				cout<<"bye address"<<endl;
			}
		
			void setAddress(char *a,char *b,char *c,char *d,char *e,char *f) {
				strcpy(number,a);
				strcpy(road,b);
				strcpy(sub_district,c);
				strcpy(district,d);
				strcpy(province,e);
				strcpy(postcode,f);
			}
			
			void setNumber(char *a) {
				strcpy(number,a);
			}
			
			void setRoad(char *b) {
				strcpy(road,b);
			}
			
			void setSub_district(char *c) {
				strcpy(sub_district,c);
			}
			
			void setDistrict(char *d) {
				strcpy(district,d);
			}
			
			void setProvince(char *e) {
				strcpy(province,e);
			}
			
			void setPostcode(char *f) {
				strcpy(postcode,f);
			}
			
			char *getNumber() {
				return number;
			}
			
			char *getRoad() {
				return road;
			}
			
			char *getSub_district() {
				return sub_district;
			}
			
			char *getDistrict() {
				return district;
			}
			
			char *getProvince() {
				return province;
			}
			
			char *getPostcode() {
				return postcode;
			}
			
			void showAddress() {
				cout<<"Address : "<<number<<" "<<road<<","<<sub_district<<","<<district<<","<<province<<" "<<postcode<<endl;
			}	
};

class Person {
	private :
		char *id;
		char *firstname;
		char *lastname;
		Date birth;
		Address addr;
		
		public :
			Person() {
				id = 0;
				firstname = 0;
				lastname = 0;
				setPerson("xxxxxxxxxxxx","Somsak","Kongchan");
				birth.setDate(0,0,0);
				addr.setAddress("280","Ramkhamhaeng Rode","Huamark","Bangkapi","Bangkok","10240");
			}
			
			Person(char *a) {
				id = 0;
				firstname = 0;
				lastname = 0;
				setPerson(a,"Somsak","Kongchan");
				birth.setDate(0,0,0);
				addr.setAddress("280","Ramkhamhaeng Rode","Huamark","Bangkapi","Bangkok","10240");
			}
			
			Person(char *a,char *b) {
				id = 0;
				firstname = 0;
				lastname = 0;
				setPerson(a,b,"Kongchan");
				birth.setDate(0,0,0);
				addr.setAddress("280","Ramkhamhaeng Rode","Huamark","Bangkapi","Bangkok","10240");
			}
			
			Person(char *a,char *b,char *c) {
				id = 0;
				firstname = 0;
				lastname = 0;
				setPerson(a,b,c);
				birth.setDate(0,0,0);
				addr.setAddress("280","Ramkhamhaeng Rode","Huamark","Bangkapi","Bangkok","10240");
			}
			
			Person(char *a,char *b,char *c,Date d,Address e) {
				id = 0;
				firstname = 0;
				lastname = 0;
				setAllPerson(a,b,c,d,e);
			}
			
			~Person() {
				cout<<"bye person"<<endl;
				delete[] id;
				delete[] firstname;
				delete[] lastname;
			}
			
			void setAllPerson(char *a,char *b,char *c,Date d,Address e) {
				delete[] id;
				delete[] firstname;
				delete[] lastname;
				id = new char[strlen(a) + 1];
				strcpy(id, a);
				firstname = new char[strlen(b) + 1];
				strcpy(firstname, b);
				lastname = new char[strlen(c) + 1];
				strcpy(lastname, c);
				birth.setDate(d.getDay(),d.getMonth(),d.getYear());
				addr.setAddress(e.getNumber(),e.getRoad(),e.getSub_district(),e.getDistrict(),e.getProvince(),e.getPostcode());
			}
			
			void setPerson(char *a,char *b,char *c) {
				delete[] id;
				delete[] firstname;
				delete[] lastname;
				id = new char[strlen(a) + 1];
				strcpy(id, a);
				firstname = new char[strlen(b) + 1];
				strcpy(firstname, b);
				lastname = new char[strlen(c) + 1];
				strcpy(lastname, c);
			}
			
			void setId(char *a) {
				delete[] id;
				id = new char[strlen(a) + 1];
				strcpy(id, a);
			}
			
			void setFirstname(char *b) {
				delete[] firstname;
				firstname = new char[strlen(b) + 1];
				strcpy(firstname, b);
			}
			
			void setLastname(char *c) {
				delete[] lastname;
				lastname = new char[strlen(c) + 1];
				strcpy(lastname, c);
			}
			
			void setBirth(Date d) {
				birth = d;
			}
			
			void setAddr(Address e) {
				addr = e;
			}
			
			char *getId() {
				return id;
			}
			
			char *getFirstname() {
				return firstname;
			}
			
			char *getLastname() {
				return lastname;
			}
			
			Date getBirth() {
				return birth;
			}
			
			Address getAddr() {
				return addr;
			}
			
			void showPerson() {
				cout<<"ID : "<<id<<endl;
				cout<<"firstname : "<<firstname<<endl;
				cout<<"lastname : "<<lastname<<endl;
				birth.showDate();
				addr.showAddress();
			}
			
			Person& operator = (const Person &p) {
				if(this==&p) 
					return *this;
				birth = p.birth;
				addr = p.addr;
				delete[] id;
				if(p.id != 0) {
					id = new char[strlen(p.id) + 1];
					strcpy(id, p.id);	
				}
				else
					id = 0;
				delete[] firstname;
				if(p.firstname != 0) {
					firstname = new char[strlen(p.firstname) + 1];
					strcpy(firstname, p.firstname);
				}
				else
					firstname = 0;
				delete[] lastname;
				if(p.lastname != 0) {
					lastname = new char[strlen(p.lastname) + 1];
					strcpy(lastname, p.lastname);
				}
				else
					lastname = 0;	
				return *this;
			}
			
			Person(const Person &p) {
				cout<<"copy constructor is called"<<endl;
				birth = p.birth;
				addr = p.addr;
				if(p.id != 0) {
					id = new char[strlen(p.id) + 1];
					strcpy(id, p.id);	
				}
				else
					id = 0;
				if(p.firstname != 0) {
					firstname = new char[strlen(p.firstname) + 1];
					strcpy(firstname, p.firstname);
				}
				else
					firstname = 0;
				if(p.lastname != 0) {
					lastname = new char[strlen(p.lastname) + 1];
					strcpy(lastname, p.lastname);
				}
				else
					lastname = 0;	
			}
			
			virtual void printPerson(ostream& os) {
				os<<"ID : "<<id<<endl;
				os<<"firstname : "<<firstname<<endl;
				os<<"lastname : "<<lastname<<endl;
				os<<"Birthday : "<<birth.getDay()<<"/"<<birth.getMonth()<<"/"<<birth.getYear()<<endl;
				os<<"Address : "<<addr.getNumber()<<" "<<addr.getRoad()<<","<<addr.getSub_district()<<","<<addr.getDistrict()<<","
				<<addr.getProvince()<<" "<<addr.getPostcode()<<endl;
			}
			
			virtual void inputPerson(istream& is) {
				int a,b,c;
				char d[10],e[20],f[20],g[20],h[20],i[5];
				cout<<"Enter person ID : "; is>>id;
				cout<<"Enter firstname : "; is>>firstname;
				cout<<"Enter lastname : "; is>>lastname;
				cout<<"--Date of birth--"<<endl;
				cout<<"Enter day : "; is>>a;
				cout<<"Enter month : "; is>>b;
				cout<<"Enter year : "; is>>c;
				birth.setDate(a,b,c);
				cout<<"--Address--"<<endl;
				cout<<"Enter address ID : "; is>>d;
				cout<<"Enter rode : "; is>>e;
				cout<<"Enter sub_district : "; is>>f;
				cout<<"Enter district : "; is>>g;
				cout<<"Enter province : "; is>>h;
				cout<<"Enter postcode : "; is>>i;
				addr.setAddress(d,e,f,g,h,i);
			}
};

ostream& operator<<(ostream& os,Person &p) {
	p.printPerson(os);
	return os;
}

istream& operator>>(istream& is,Person &p) {
	p.inputPerson(is);
	return is;
}

class Student : virtual public Person {
	private :
		char *sid;
		char *faculty;
		char *major;
		
		public :
			Student() {
				sid = 0;
				faculty = 0;
				major = 0;
				setStudent("xxxxxxxxxx","Science","Biology");
			}
			
			Student(char *a) {
				sid = 0;
				faculty = 0;
				major = 0;
				setStudent(a,"Science","Biology");
			}
			
			Student(char *a,char *b) {
				sid = 0;
				faculty = 0;
				major = 0;
				setStudent(a,b,"Biology");
			}
			
			Student(char *a,char *b,char *c) {
				sid = 0;
				faculty = 0;
				major = 0;
				setStudent(a,b,c);
			}
			
			Student(char *a,char *b,char *c,char *d,char* e,char* f,Date g,Address h) :Person(d,e,f,g,h) {
				sid = 0;
				faculty = 0;
				major = 0;
				setStudent(a,b,c);
			}
			
			~Student() {
				cout<<"bye student"<<endl;
				delete[] sid;
				delete[] faculty;
				delete[] major;
			}
			
			void setStudent(char *a,char *b,char *c) {
				delete[] sid;
				delete[] faculty;
				delete[] major;
				sid = new char[strlen(a) + 1];
				strcpy(sid, a);
				faculty = new char[strlen(b) + 1];
				strcpy(faculty, b);
				major = new char[strlen(c) + 1];
				strcpy(major, c);
			}
			
			void setSId(char *a) {
				delete[] sid;
				sid = new char[strlen(a) + 1];
				strcpy(sid, a);
			}
			
			void setFaculty(char *b) {
				delete[] faculty;
				faculty = new char[strlen(b) + 1];
				strcpy(faculty, b);
			}
			
			void setMajor(char *c) {
				delete[] major;
				major = new char[strlen(c) + 1];
				strcpy(major, c);
			}
			
			char *getSId(){
				return sid;
			}
			
			char *getFaculty() {
				return faculty;
			}
			
			char *getMajor() {
				return major;
			}
			
			void showStudent() {
				Person::showPerson();
				cout<<"Student ID : "<<sid<<endl;
				cout<<"Faculty : "<<faculty<<endl;
				cout<<"Major : "<<major<<endl;
			}
			
			Student& operator = (const Student &s) {
				if(this==&s) 
					return *this;
				Person::operator =(s);
				delete[] sid;
				if(s.sid != 0) {
					sid = new char[strlen(s.sid) + 1];
					strcpy(sid, s.sid);
				}
				else
					sid = 0;
				delete[] faculty;
				if(s.faculty != 0) {
					faculty = new char[strlen(s.faculty) + 1];
					strcpy(faculty, s.faculty);
				}
				else
					faculty = 0;
				delete[] major;
				if(s.major != 0) {
					major = new char[strlen(s.major) + 1];
					strcpy(major, s.major);
				}
				else
					major = 0;	
				return *this;		
			}
			
			Student(const Student &s) {
				cout<<"copy constructor is called"<<endl;
				Person::operator =(s);
				if(s.sid != 0) {
					sid = new char[strlen(s.sid) + 1];
					strcpy(sid, s.sid);
				}
				else
					sid = 0;
				if(s.faculty != 0) {
					faculty = new char[strlen(s.faculty) + 1];
					strcpy(faculty, s.faculty);
				}
				else
					faculty = 0;
				if(s.major != 0) {
					major = new char[strlen(s.major) + 1];
					strcpy(major, s.major);
				}
				else
					major = 0;
			}
			
			void printStudent(ostream& os) {
				Person::printPerson(os);
				os<<"Student ID : "<<sid<<endl;
				os<<"Faculty : "<<faculty<<endl;
				os<<"Major : "<<major<<endl;
			}
			
			void inputStudent(istream& is) {
				Person::inputPerson(is);
				delete[] sid;
				delete[] faculty;
				delete[] major;
				sid = new char[20];
				cout<<"Enter student ID : "; is>>sid;
				faculty = new char[20];
				cout<<"Enter faculty : "; is>>faculty;
				major = new char[20];
				cout<<"Enter major : "; is>>major;
			}
};

ostream& operator<<(ostream& os,Student &s) {
	s.printStudent(os);
	return os;
}

istream& operator>>(istream& is,Student &s) {
	s.inputStudent(is);
	return is;
}

class Teacher : virtual public Person {
	private :
		char *tid;
		char *faculty;
		char *major;
		
		public :
			Teacher() {
				tid = 0;
				faculty = 0;
				major = 0;
				setTeacher("xxxxx","Communication Arts","Film Department");
			}
			
			Teacher(char *a) {
				tid = 0;
				faculty = 0;
				major = 0;
				setTeacher(a,"Communication Arts","Film Department");
			}
			
			Teacher(char *a,char *b) {
				tid = 0;
				faculty = 0;
				major = 0;
				setTeacher(a,b,"Film Department");
			}
			
			Teacher(char *a,char *b,char *c) {
				tid = 0;
				faculty = 0;
				major = 0;
				setTeacher(a,b,c);
			}
			
			Teacher(char *a,char *b,char *c,char *d,char *e,char *f,Date g,Address h) {
				tid = 0;
				faculty = 0;
				major = 0;
				setTeacher(a,b,c);
				Person::setAllPerson(d,e,f,g,h);
			}
			
			~Teacher() {
				cout<<"bye teacher"<<endl;
				delete[] tid;
				delete[] faculty;
				delete[] major;
			}
			
			void setTeacher(char *a,char *b,char *c) {
				delete[] tid;
				delete[] faculty;
				delete[] major;
				tid = new char[strlen(a) + 1];
				strcpy(tid, a);
				faculty = new char[strlen(b) + 1];
				strcpy(faculty, b);
				major = new char[strlen(c) + 1];
				strcpy(major, c);
			}
			
			void setTId(char *a) {
				delete[] tid;
				tid = new char[strlen(a) + 1];
				strcpy(tid, a);
			}
			
			void setFaculty(char *b) {
				delete[] faculty;
				faculty = new char[strlen(b) + 1];
				strcpy(faculty, b);
			}
			
			void setMajor(char *c) {
				delete[] major;
				major = new char[strlen(c) + 1];
				strcpy(major, c);
			}
			
			char *getTId() {
				return tid;
			}
			
			char *getFaculty() {
				return faculty;
			}
			
			char *getMajor() {
				return major;
			}
			
			void showTeacher() {
				Person::showPerson();
				cout<<"Teacher ID :"<<tid<<endl;
				cout<<"Faculty : "<<faculty<<endl;
				cout<<"Major : "<<major<<endl;
			}
			
			Teacher& operator = (const Teacher &t) {
				if(this==&t) 
					return *this;
				Person::operator =(t);
				delete[] tid;
				if(t.tid != 0) {
					tid = new char[strlen(t.tid) + 1];
					strcpy(tid, t.tid);
				}
				else 
					tid = 0;
				delete[] faculty;
				if(t.faculty != 0) {
					faculty = new char[strlen(t.faculty) + 1];
					strcpy(faculty, t.faculty);
				}
				else
					faculty = 0;
				delete[] major;
				if(t.major != 0) {
					major = new char[strlen(t.major) + 1];
					strcpy(major, t.major);
				}
				else
					major = 0;
					return *this;
			}
			
			Teacher(const Teacher &t) {
				cout<<"copy constructor is called"<<endl;
				Person::operator =(t);
				if(t.tid != 0) {
					tid = new char[strlen(t.tid) + 1];
					strcpy(tid, t.tid);
				}
				else 
					tid = 0;
				if(t.faculty != 0) {
					faculty = new char[strlen(t.faculty) + 1];
					strcpy(faculty, t.faculty);
				}
				else
					faculty = 0;
				if(t.major != 0) {
					major = new char[strlen(t.major) + 1];
					strcpy(major, t.major);
				}
				else
					major = 0;
			}
			
			void printTeacher(ostream& os) {
				Person::printPerson(os);
				os<<"Teacher ID : "<<tid<<endl;
				os<<"Faculty : "<<faculty<<endl;
				os<<"Major : "<<major<<endl;
			}
			
			void inputTeacher(istream& is) {
				Person::inputPerson(is);
				delete[] tid;
				delete[] faculty;
				delete[] major;
				tid = new char[20];
				cout<<"Enter teacher ID : "; is>>tid;
				faculty = new char[20];
				cout<<"Enter faculty : "; is>>faculty;
				major = new char[20];
				cout<<"Enter major : "; is>>major;
			}
};

ostream& operator<<(ostream& os,Teacher &t) {
	t.printTeacher(os);
	return os;
}

istream& operator>>(istream& is,Teacher &t) {
	t.inputTeacher(is);
	return is;
}

class TeachingAssistant : public Student,public Teacher {
	private :
		int* hour;
		
		public :
			TeachingAssistant() {
				hour = 0;
				setHour(3);
			}
			
			TeachingAssistant(int l) {
				hour = 0;
				setHour(l);
			}
			
			TeachingAssistant(char *a,char *b,char *c,char *d,char* e,char* f,Date g,Address h,char *i,char *j,char *k,int l) 
			: Student(a,b,c),Person(d,e,f,g,h),Teacher(i,j,k) {
				hour = 0;
				setHour(l);
			}
			
			~TeachingAssistant() {
				cout<<"bye TeachingAssistant"<<endl;
				delete hour;
			}
			
			void setHour(int l) {
				delete hour;
				hour = new int(l);
			}
			
			int getHour() {
				return *hour;
			}
			
			void showTeachingAssistant() {
				Student::showStudent();
				cout<<"Teacher ID :"<<Teacher::getTId()<<endl;
				cout<<"Faculty : "<<Teacher::getFaculty()<<endl;
				cout<<"Major : "<<Teacher::getMajor()<<endl;
				cout<<"Hour : "<<hour<<endl;
			}
			
			TeachingAssistant& operator = (TeachingAssistant &ta) {
				if(this==&ta) 
					return *this;
				else
					Student::operator =(ta);
					Teacher::setTeacher(ta.Teacher::getTId(),ta.Teacher::getFaculty(),ta.Teacher::getMajor());
					delete hour;
					hour = new int(*ta.hour);
					return *this;
			}
			
			TeachingAssistant(TeachingAssistant &ta) {
				cout<<"copy constructor is called"<<endl;
				Student::operator =(ta);
				Teacher::setTeacher(ta.Teacher::getTId(),ta.Teacher::getFaculty(),ta.Teacher::getMajor());
				hour = new int(*ta.hour);
			}
			
			void printTeachingAssistant(ostream& os) {
				Student::printStudent(os);
				os<<"Teacher ID : "<<Teacher::getTId()<<endl;
				os<<"Faculty : "<<Teacher::getFaculty()<<endl;
				os<<"Major : "<<Teacher::getFaculty()<<endl;
				os<<"Hour : "<<hour<<endl;
			}
			
			void inputTeachingAssistant(istream& is) {
				char a[20],b[20],c[20];
				Student::inputStudent(is);
				cout<<"Enter teacher ID : "; is>>a;
				cout<<"Enter faculty : "; is>>b;
				cout<<"Enter major : "; is>>c;
				Teacher::setTeacher(a,b,c);
				cout<<"Enter hour : "; is>>*hour;
			}
};

ostream& operator<<(ostream& os,TeachingAssistant &ta) {
	ta.printTeachingAssistant(os);
	return os;
}

istream& operator>>(istream& is,TeachingAssistant &ta) {
	ta.inputTeachingAssistant(is);
	return is;
}

int main() {
	cout<<"----Date----"<<endl;
	Date e,f;
	Date a;
	Date b(10);
	Date c(13,6);
	Date d(26,9,2000);
	e.setDate(18,10,2004);
	f.setDay(16);
	f.setMonth(7);
	f.setYear(1998);
	a.showDate();
	b.showDate();
	c.showDate();
	d.showDate();
	e.showDate();
	f.showDate();
	cout<<"Get Day : "<<f.getDay()<<endl;
	cout<<"Get Month : "<<f.getMonth()<<endl;
	cout<<"Get Year : "<<f.getYear()<<endl;
	cout<<endl;
	
	cout<<"----Address----"<<endl;
	Address n,o;
	Address g;
	Address h("18");
	Address i("899","Phahon Yothin Rode");
	Address j("88","Ratchadaphisek Rode","Klongtoey");
	Address k("1600","New Petchaburi Rode","Makkasan","Ratchathewi");
	Address l("110","Lat Phrao Rode","Klong Chan","Bangkapi","Bangkok");
	Address m("42","-","Sadao","Buached","Surin","32230");
	n.setAddress("167/4","-","Wangban","Lomkao","Phetchabun","67120");
	o.setNumber("17/4");
	o.setRoad("Bamroongrat");
	o.setSub_district("Pibulsongkram");
	o.setDistrict("Muang");
	o.setProvince("Chiang Rai");
	o.setPostcode("51000");
	g.showAddress();
	h.showAddress();
	i.showAddress();
	j.showAddress();
	k.showAddress();
	l.showAddress();
	m.showAddress();
	n.showAddress();
	o.showAddress();
	cout<<"Get Number : "<<o.getNumber()<<endl;
	cout<<"Get Rode : "<<o.getRoad()<<endl;
	cout<<"Get Sub_district : "<<o.getSub_district()<<endl;
	cout<<"Get District : "<<o.getDistrict()<<endl;
	cout<<"Get Province : "<<o.getProvince()<<endl;
	cout<<"Get Postcode : "<<o.getPostcode()<<endl;
	cout<<endl;
	
	cout<<"----Person----"<<endl;
	Person p7,p8;
	Person p1;
	Person p2("1800xxxxxxxxx");
	Person p3("2007xxxxxxxxx","Piyada");
	Person p4("4090xxxxxxxxx","Bussaba","Somsri");
	Person p5("5400xxxxxxxxx","Norawit","Thitipoom");
	Person p6("2300xxxxxxxxx","Kuntapon","Kongkiat",e,n);
	p7.setAllPerson("6345xxxxxxxxx","Nuttawat","Piya",f,k);
	p8.setId("9400xxxxxxxxx");
	p8.setFirstname("Naruemon");
	p8.setLastname("Khong-o");
	p8.setBirth(d);
	p8.setAddr(m);
	p1.showPerson();
	cout<<endl;
	p2.showPerson();
	cout<<endl;
	p3.showPerson();
	cout<<endl;
	p4.showPerson();
	cout<<endl;
	p5.showPerson();
	cout<<endl;
	p6.showPerson();
	cout<<endl;
	p7.showPerson();
	cout<<endl;
	p8.showPerson();
	cout<<endl;
	cout<<"Get ID : "<<p8.getId()<<endl;
	cout<<"Get Firstname : "<<p8.getFirstname()<<endl;
	cout<<"Get Lastname : "<<p8.getLastname()<<endl;
	cout<<endl;

	cout<<"----Student----"<<endl;
	Student s6,s7;
	Student s1;
	Student s2("6205002246");
	Student s3("6505004452","Science");
	Student s4("6304006512","Business Administration","Marketing");
	Student s5("6107502249","Humamities","Psychology","9400xxxxxxxxx","Naruemon","Khong-o",d,n);
	s6.setStudent("6505043578","Science","Biology");
	s7.setSId("6004005674");
	s7.setFaculty("Humamities");
	s7.setMajor("French");
	s1.showStudent();
	cout<<endl;
	s2.showStudent();
	cout<<endl;
	s3.showStudent();
	cout<<endl;
	s4.showStudent();
	cout<<endl;
	s5.showStudent();
	cout<<endl;
	s6.showStudent();
	cout<<endl;
	s7.showStudent();
	cout<<endl;
	cout<<"Get Student ID : "<<s7.getSId()<<endl;
	cout<<"Get Faculty : "<<s7.getFaculty()<<endl;
	cout<<"Get Major : "<<s7.getMajor()<<endl;
	cout<<endl;
	
	cout<<"----Teacher----"<<endl;
	Teacher t6,t7;
	Teacher t1;
	Teacher t2("01011");
	Teacher t3("01059","Humamities");
	Teacher t4("01036","Science","Computer Science");
	Teacher t5("01061","Business Administration","Marketing","6400xxxxxxxxx","Matee","Piyakun",c,m);
	t6.setTeacher("01035","Education","Mathematics");
	t7.setTId("01189");
	t7.setFaculty("Communication Arts");
	t7.setMajor("Film Department");
	t1.showTeacher();
	cout<<endl;
	t2.showTeacher();
	cout<<endl;
	t3.showTeacher();
	cout<<endl;
	t4.showTeacher();
	cout<<endl;
	t5.showTeacher();
	cout<<endl;
	t6.showTeacher();
	cout<<endl;
	t7.showTeacher();
	cout<<endl;
	cout<<"Get Teacher ID : "<<t7.getTId()<<endl;
	cout<<"Get Faculty : "<<t7.getFaculty()<<endl;
	cout<<"Get Major : "<<t7.getMajor()<<endl;
	cout<<endl;
	
	cout<<"----TeachingAssistant----"<<endl;
	TeachingAssistant ta4;
	TeachingAssistant ta1;
	TeachingAssistant ta2(5);
	TeachingAssistant ta3("6107502249","Humamities","Psychology","9400xxxxxxxxx","Naruemon","Khong-o",d,n,
	"01036","Science","Computer Science",6);
	ta4.setHour(2);
	ta1.showTeachingAssistant();
	cout<<endl;
	ta2.showTeachingAssistant();
	cout<<endl;
	ta3.showTeachingAssistant();
	cout<<endl;
	ta4.showTeachingAssistant();
	cout<<endl;
	cout<<"Get Hour : "<<ta4.getHour()<<endl;
	cout<<endl;
	
	Person p9("6345xxxxxxxxx","Nuttawat","Piya",f,k),p10,p11;
	cin>>p10;
	cout<<p10;
	cout<<endl;
	cout<<p9;
	cout<<endl;
	p11 = p9;
	cout<<p11;
	cout<<endl;
	
	Student s8("6107502249","Humamities","Psychology","9400xxxxxxxxx","Naruemon","Khong-o",d,n),s9,s10;
	cin>>s9;
	cout<<s9;
	cout<<endl;
	s10 = s9 = s8;
	cout<<s8;
	cout<<endl;
	cout<<s9;
	cout<<endl;
	cout<<s10;
	cout<<endl;
	
	Teacher t8,t9("01036","Science","Computer Science"),t10;
	cin>>t8;
	cout<<t8;
	cout<<endl;
	t10 = t8;
	cout<<t10;
	cout<<endl;
	cout<<t8;
	cout<<endl;
	cout<<t9;
	cout<<endl;
	
	TeachingAssistant ta5,ta6,ta7("6107502249","Humamities","Psychology","9400xxxxxxxxx","Naruemon","Khong-o",d,n,
	"01036","Science","Computer Science",6);
	cin>>ta5;
	cout<<ta5;
	cout<<endl;
	ta6 = ta7;
	cout<<ta6;
	cout<<endl;
	cout<<ta7;
	cout<<endl;
	cout<<ta5;
	cout<<endl;
}
