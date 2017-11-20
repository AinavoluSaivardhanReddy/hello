#include <iostream>
#include<cmath>
#include<string>
#include <stdlib.h>
using namespace std;

int check(string);
string s;

int main()
{
        cout<<"Enter the string:"<<endl;
	cin>>s;
	int w=s.length();
	for(int i=0;i<w;i++){

	for(int k=0;k<=i;k++){
		int g;
		string d="";
		g=s.length()-i;
		d.append(s,k,g);

	 if(check(d)!=0){
		cout<<d;
		exit(0);
	}
}
}
}
int check(string x){
    int d=x.length();
	for(int i=0;i<d/2;i++){
		if(x[i]==x[d-i-1]){
			if(i==d-1){
				return 1;
			}else{
			continue;
		}
		}else{
		return 0;
		}
}
}
