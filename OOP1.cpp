#include<bits/stdc++.h>
using namespace std;
class So{
	private :
		int x;
	public :
		friend istream& operator >> (istream& in, So &a);
		friend ostream& operator << (ostream& out,So a);
		friend So operator + (So , So );
};
istream& operator >> (istream& in, So &a){
	in>>a.x;
	return in;
}
ostream& operator << (ostream& out,So a){
	out<<a.x;
	return out;
}
So operator + (So a, So b){
	So tong;
	tong.x=a.x+b.x;
	return tong;
}
int main(){
	So a,b;
	cin>>a>>b;

	cout<<a+b;
	
}

