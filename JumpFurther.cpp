#include<iostream>

using namespace std;

class JumpFurther{
public:
	int furthest(int n,int BadStep);

};

int JumpFurther::furthest(int n,int BadStep)
{
	int f[2001];
	int i,j;
	for (i=0;i<=n;i++) {f[i]=0;}
 	for (i=1;i<=n;i++)
		for (j=0;j<i;j++)
		{
			if((f[i]<f[j]+i)&&(f[j]+i!=BadStep)) f[i]=f[j]+i;
		}
	return f[n];
}

int main()
{
	int a,b;
	JumpFurther test;
	cin>>a>>b;
	cout<<test.furthest(a,b)<<endl;
	return 0;
}