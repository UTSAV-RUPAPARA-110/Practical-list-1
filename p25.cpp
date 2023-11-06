#include<iostream>
using namespace std;

class temp{
	
	public:
		
		float f;
		float getdata(){
			
			cout <<"enter the temp in fahrenheit::";
			cin >> f;
		}
		
		float putdata(){
			
			float ans;
			ans=(f-32)*5/9;
			return ans;
		}
	
};

int main()
{
	temp c;
	c.getdata();
	cout << "ans::"<<c.putdata()<<endl;
}
