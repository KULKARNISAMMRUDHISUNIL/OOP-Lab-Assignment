#include<iostream>
using namespace std;
class Shape{
	public:
		double a, b;
		void get(){
			cin>>a>>b;
		}
		virtual void disp() = 0;
};
class rect : public shape{
	public:
	void disp(){
		cout<<"\nArea of rectangle = "<<a * b<<endl;
	}
};
class tri : public shape{
	public:
	void disp(){
		cout<<"Area of triangle = "<<0.5 * a * b;
	}
};
int main(){
	rect r;
	tri t;
	cout<<"\n Enter the height and base of Triangle"<<endl;
	t.get();
	cout<<"\nEnter length and breadth of rectangle"<<endl;
	r.get();
	cout<<"\nAreas:"<<endl;
	t.disp();
	r.disp();
	return 0;
}
