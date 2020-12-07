#include<iostream.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
//prime factorizor
int chk(int a)
{
  clrscr();
  int i,k=0;
  for(i=2;i<a/2+1;i++)
  {
    if (a%i==0)
    {
      k++;
    }
  }
  return k;
}
void main()
{
  int num,p,i,b=0,m;
  cout<<"Enter the number whose prime factorization you want to do: ";
  cin>>num;
  int Power[1000], Factor[1000];
  p=chk(num);
  if(p==0)
  {
	cout<<"The number is prime!!";
  }
  else
  {
	for(i=2;i<num;i++)
	{
		if(num%i!=0)
		{
			m=chk(i);
			if(m==0)
			{       int  a=num;
				while(a%i==0)
				{
					b++;
					a=a/i;
				}
				Power[i]=b;
			}
			Factor[i]=i;
		}
		Factor[i+1]=0;
	}
	cout<<"The Prime factorization of is: 1";
	for(i=2;Factor[i]>0;i++)
	{
	      cout<<"blah";
	      i++;
	}
  }
  getch();
}