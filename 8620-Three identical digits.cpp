#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d,n;
	cin>>n;
	a=n/1000;
	b=n%1000/100;
	c=n%100/10;
	d=n%10;
	if(a==b&&b==c&&c==d)
	cout<<"NO"<<endl;
	else {
	
	if((a==b&&b==c)||(a==b&&b==d)||(a==c&&d==c)||(b==c&&c==d))
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;}
	
	
	return 0;
}
