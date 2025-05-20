#include<iostream>
#include<string.h>
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
		char rode[20];
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
				strcpy(rode,b);
				strcpy(sub_district,c);
				strcpy(district,d);
				strcpy(province,e);
				strcpy(postcode,f);
			}
			
			void setNumber(char *a) {
				strcpy(number,a);
			}
			
			void setRode(char *b) {
				strcpy(rode,b);
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
			
			char *getRode() {
				return rode;
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
				cout<<"Address : "<<number<<" "<<rode<<","<<sub_district<<","<<district<<","<<province<<" "<<postcode<<endl;
			}	
};

class Person {
	private :
		char id[20];
		char firstname[20];
		char lastname[20];
		Date birth;
		Address addr;
		
		public :
			Person() {
				setPerson("xxxxxxxxxxxx","Somsak","Kongchan");
				birth.setDate(0,0,0);
				addr.setAddress("280","Ramkhamhaeng Rode","Huamark","Bangkapi","Bangkok","10240");
			}
			
			Person(char *a) {
				setPerson(a,"Somsak","Kongchan");
				birth.setDate(0,0,0);
				addr.setAddress("280","Ramkhamhaeng Rode","Huamark","Bangkapi","Bangkok","10240");
			}
			
			Person(char *a,char *b) {
				setPerson(a,b,"Kongchan");
				birth.setDate(0,0,0);
				addr.setAddress("280","Ramkhamhaeng Rode","Huamark","Bangkapi","Bangkok","10240");
			}
			
			Person(char *a,char *b,char *c) {
				setPerson(a,b,c);
				birth.setDate(0,0,0);
				addr.setAddress("280","Ramkhamhaeng Rode","Huamark","Bangkapi","Bangkok","10240");
			}
			
			Person(char *a,char *b,char *c,Date d,Address e) {
				setAllPerson(a,b,c,d,e);
			}
			
			~Person() {
				cout<<"bye person"<<endl;
			}
			
			void setAllPerson(char *a,char *b,char *c,Date d,Address e) {
				strcpy(id,a);
				strcpy(firstname,b);
				strcpy(lastname,c);
				birth.setDate(d.getDay(),d.getMonth(),d.getYear());
				addr.setAddress(e.getNumber(),e.getRode(),e.getSub_district(),e.getDistrict(),e.getProvince(),e.getPostcode());
			}
			
			void setPerson(char *a,char *b,char *c) {
				strcpy(id,a);
				strcpy(firstname,b);
				strcpy(lastname,c);
			}
			
			void setId(char *a) {
				strcpy(id,a);
			}
			
			void setFirstname(char *b) {
				strcpy(firstname,b);
			}
			
			void setLastname(char *c) {
				strcpy(lastname,c);
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
};

class Student : public Person {
	private :
		char sid[20];
		char faculty[20];
		char major[20];
		
		public :
			Student() {
				setStudent("xxxxxxxxxx","Science","Biology");
			}
			
			Student(char *a) {
				setStudent(a,"Science","Biology");
			}
			
			Student(char *a,char *b) {
				setStudent(a,b,"Biology");
			}
			
			Student(char *a,char *b,char *c) {
				setStudent(a,b,c);
			}
			
			Student(char *a,char *b,char *c,char *d,char* e,char* f,Date g,Address h) :Person(d,e,f,g,h) {
				setStudent(a,b,c);
			}
			
			~Student() {
				cout<<"bye student"<<endl;
			}
			
			void setStudent(char *a,char *b,char *c) {
				strcpy(sid,a);
				strcpy(faculty,b);
				strcpy(major,c);
			}
			
			void setSId(char *a) {
				strcpy(sid,a);
			}
			
			void setFaculty(char *b) {
				strcpy(faculty,b);
			}
			
			void setMajor(char *c) {
				strcpy(major,c);
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
};

class Teacher : public Person {
	private :
		char tid[20];
		char faculty[20];
		char major[20];
		
		public :
			Teacher() {
				setTeacher("xxxxx","Communication Arts","Film Department");
			}
			
			Teacher(char *a) {
				setTeacher(a,"Communication Arts","Film Department");
			}
			
			Teacher(char *a,char *b) {
				setTeacher(a,b,"Film Department");
			}
			
			Teacher(char *a,char *b,char *c) {
				setTeacher(a,b,c);
			}
			
			Teacher(char *a,char *b,char *c,char *d,char *e,char *f,Date g,Address h) {
				setTeacher(a,b,c);
				Person::setAllPerson(d,e,f,g,h);
			}
			
			~Teacher() {
				cout<<"bye teacher"<<endl;
			}
			
			void setTeacher(char *a,char *b,char *c) {
				strcpy(tid,a);
				strcpy(faculty,b);
				strcpy(major,c);
			}
			
			void setTId(char *a) {
				strcpy(tid,a);
			}
			
			void setFaculty(char *b) {
				strcpy(faculty,b);
			}
			
			void setMajor(char *c) {
				strcpy(major,c);
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
};

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
	o.setRode("Bamroongrat");
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
	cout<<"Get Rode : "<<o.getRode()<<endl;
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
	Person p6("2300xxxxxxxxx","Kuntapon","Kongkiat",d,g);
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
}
