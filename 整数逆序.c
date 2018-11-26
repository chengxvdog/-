 # include <stdio.h>
  void main ()

 {
  int i,b;
  scanf("%d",&i); 
while(i!=0) 
{
	b=b*10+i%10;
	i/=10;
}

  printf("%d\n", b);
}
