#include <stdio.h>
#include <stdlib.h>
#define maxn 100001
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,i,j,k;
int a[maxn],l[maxn][maxn];
int moc,check,x;
//int luu[maxn][maxn]; luu tru mang con
int main() {
	printf("Nhap du lieu: ");
	scanf("%d %d",&n,&x);
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	for(i=1;i<n;i++) 
	{
		l[i][i]=a[i];// khoi tao mang tong
	}
	//for(i=1;i<n;i++) printf("%d\n",l[i][i+1]); test mang tinh tong
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			l[i][j]=l[i][j-1]+a[j]; // tong tu i den j bang tong tu i den j-1 + a[j]
			if(l[i][j]==x) {
			check=1;
			//for(k=i;k<=j;k++) printf("%d ",a[k]);// xuat mang khi can
			//printf("\n");
			}
		}
	}
	if(check==1) printf("Subarray exists");
	else printf("Subarray does not exist");
	return 0;
}
