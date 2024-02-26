#include<stdio.h>
int main(){
	int n1,v1,m,p=0,q;
	printf("How many prime numbers do you want? "); 
	scanf("%d",&q);
	printf("The first %d prime numbers are: 2 ",q);
 
 	for(n1=2;n1>=2&&p<q;n1++){
 	
	  for(v1=2;v1<n1;v1++)	{
 	 	m=0;
 	 	if(n1%v1==0){
		m=1;
 	 	break;}
	  }
	
	  if(m==0){
	  printf("%d ",n1);
	  p++;}
}



/*	int ct=0,n=0,i=1,j=1;
	
	while(n<10)
	{
		j=1;
		ct=0;
		while(j<=i)
		{
			if(i%j==0)
			ct++;
			j++; 
		}
		if(ct==2)
		{
			printf("%d ",i);
			n++;
		}
		i++; 
	}*/
return 0;
}

