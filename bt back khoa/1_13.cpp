#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double s=0;
	int i=1;
	int term=0;
	while(s<2.101999){
		
		 term=i;
		s=s+(double)1/(2*i-1);
		//cout<<s<<" ";
		i++;
	}
	cout<<term;
	return 0;
}

