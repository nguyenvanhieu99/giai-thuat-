void chen(int *a,int n){
	for(int i=0;i<n;i++){
		int term=a[i];
		int j=i-1;
		while(term<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=term;
           	cout<<"Buoc "<<i<<": ";
                out(a,i+1);
				
	}
}
