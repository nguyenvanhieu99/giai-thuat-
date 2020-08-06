
#include <iostream>
using namespace std;
 
int a[20],n,b[50],c[50],d[20];
 int dem=0;
 int term=11;
void init()
{
   // cin >> n;
   n=term;
    for(int i=2;i<=2*n;i++)
        b[i]=1;
    for(int i=1-n;i<=n-1;i++)
        c[i]=1;
    for(int i=1;i<=n;i++)
        d[i]=1;
}
 
void output()
{
	dem++;
	//cout<<dem<<"\n"; 
//    for(int i=1;i<=n;i++)
//        cout << "{" << i << "," << a[i] << "} ";
//    cout << endl;
}
 
void tim(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(d[j]&&b[i+j]&&c[i-j])
        {
            d[j]=0;b[i+j]=0;c[i-j]=0;
            a[i]=j;
            if(i==n) output();
            else tim(i+1);
            d[j]=1;b[i+j]=1;c[i-j]=1;
        }
    }
}
 
int main()
{	
	while(term--){
    init();
    tim(1);
    cout<<dem<<"  "<<"\n";
    dem=0;
    }
 return 0;   
}
    
