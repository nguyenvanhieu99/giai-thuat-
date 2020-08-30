/*
	Name: ROM
	Copyright: 
	Author: Nguyen Van Hieu
	chuyen doi so la ma
	
	Date: 13/08/20 15:37
	Description: 
	rom->Int :toInt();
	Int->Rom :toRom();
	I V X  L C D M
	1 5 10 	
	quy tac 
		+ so b thi dung 4/9
		+ so lon thi +
	IV=4   , IX=9
	VI=6;
	XL =40  ,XC=90
	LX=60
	CD =400; ,CM=900
	DC = 600
	programs=Algorithm +data structure
	I,V,IV,IX,X,L,C,D,M,XL,XC,CD
	
*/
//#include<fstream>  //doc ghi dia
#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<window.h>
//#include<ctime>
#include<string>
//#include<bits/stdc++.h>
using namespace std;
string introm[]={"M","CM","D","CD","C","XC","L", "Xl","X","XI","V","IV","I"};
int romint[]=         {1000,900,500,400,100,90,   50,    40, 10, 9,  5, 4,1};
int len=13;
// ((())) vd : (XII)LXXXIV:12084,((III))=3000000
void  Go(){
	fflush(stdin);
	cout<<" ? ";
	if(cin.get()=='.') exit(0);
}// Go

int GetVal(string s){
	for(int i=0;i<13;i++){
		if(introm[i]==s) return romint[i];
	}
}
//2496 MM  CD XC VI
string ToRom(int n){
		string rom="";
	
		for(int i=0;i<len;i++){
			while(n>=romint[i]){
				rom+=introm[i];
				n-=romint[i];
			}// while
		}//for
		return rom;
}// ToRom



//MMCDXCVI Range check error
int ToInt(string rom){
	char c,cc;
	string s;
	rom+="$";// guards
	int val=0;
	int d;
	for(int i=0;i<rom.length()-1;i+=d){ //d=1 or 2
		c=rom[i];
		//cout<<"\n"<<rom.length()-1<<i<<endl;
		cc=rom[i+1];
		if(c=='C'){ // CM,CD
			if(cc=='M'||cc=='D') {
				s=c+cc;
				d=2	;
			}
			
		}
		else if(c=='X'){ // XL,XC
			if(cc=='L'|| cc=='C'){
				s=c+cc;
				d=2;
			}
		}
		else if(c=='I'){// IV,IX
			if(cc=='V'||cc=='X'){
				s=c+cc;
				d=2;
			}
		}
		else{// c =V,L,D,M
			s=c;
			d=1;
		}
		val +=GetVal(s);
		
	}
	return val ;
}// ToInt


void Test(){
	string r;
	for(int n=1;n<=4000;n++){
		r=ToRom(n);
		cout<<"\n"<<n<<"->"<<r<<ToInt(r);
	Go();
	}
	
}// Test
int main(){
	Test();
	return 0;
}

