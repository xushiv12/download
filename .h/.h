#include<iostream> 
#include<windows.h> 
#include<fstream>
#include<string>
int num;
using namespace std;
namespace AI{
	void aicode(string a){
		ShellExecute(0,"open",("https://aicode.xushi-1009.cc/website?q="+a).c_str(),0,0,SW_SHOW);
	}
}
string set(string a,string b){
	return "pinMode("+a+","+b+");";
}
string addn(string b[200],int a){
	string d;
	for(int c=0;c<=a;c++){
		if(c!=a){
			d=b[c]+"    \n";
		}else{
			d=b[c];
		}
	}
	return d;
}
class loop{
	public:
	string doit(string a,string b){
	    return "digitalWrite("+a+","+b+");";
    }
    string stay(string a){
	    return "delay("+a+");";
    }
};
string make(string a,string b){
	return "void setup(){\n    "+a+"}\nvoid loop(){\n    "+b+"}";
}
class RUN{
	public:
	RUN(string a){
		ofstream b("a.ino");
		b<<a;
		b.close();
		ShellExecute(0,"open","a.ino",0,0,SW_SHOW); 
	}
};
