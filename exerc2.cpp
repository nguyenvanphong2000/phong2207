#include <stdio.h> 
 void mang(int arr[],int &n)
{
	for(int i=0;i<=n-1;i++)
	{
	  printf("nhap arr[%d]",i);
	  scanf("%d",&arr[i]);
    }
}
void HoanVi(int arr[],int n)
{
	for (int i = 0; i < n/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
	  printf("\nmang dao nguoc: ");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	 } 
}
int main(){
   int n;
	  printf("nhap n=10");
      scanf("%d",&n);
	  int arr[n];
	  mang(arr,n);
	  HoanVi(arr,n);
}
