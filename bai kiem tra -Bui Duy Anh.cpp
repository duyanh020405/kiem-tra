#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
main(){
	int m,n,i,k,choice,sum,count;
	printf ("nhap so hang ngang :");
	scanf ("%d",&m) ;
	printf ("nhap so hang doc :");
	scanf ("%d",&n);
	int arr[m][n];
do{ printf ("************************MENU**************************\n");
	printf ("1.nhap gia tri phan tu cua mang\n");
	printf ("2.in cac gia tri phan tu cua mang theo ma tran \n");
	printf ("3.tinh so luong cac phan tu chia het cho 2 va 3\n");
	printf ("4.in cac phan tu va tong cac phan tu nam tren duong bien,duong cheo chinh va duong cheo phu\n");
	printf ("5.su dung thuat toan sap xepm lua chon sap xep cac phan tu tang dan theo cot cua mang\n ");
	printf ("6.in ra cac so nguyen to trong mang\n");
	printf ("7.Su dung thuat toán noi bot sap xep các phan tu trên duong chéo chính cua mang giam dan\n");
	printf ("8.nhap gia tri cua mang 1 chieu gom m phan tu va chi so dong chen vao mang,thuc hien chen vao mang 2 chieu\n");
	printf ("9.thoat\n");
	printf ("chon yeu cau :\n");
	scanf ("%d",&choice);
	switch(choice)
    {   
    
    case 1 :
    	for(i=0;i<m;i++)
		{
    	   	for ( k=0;k<n;k++)
			   {
    	   		printf ("nhap so arr[%d][%d]=",i,k);
    	   		scanf ("%d",&arr[i][k]);
			   }
		} 
		break;
		return 0;
	case 2 :
		for(i=0;i<m;i++)
		{
    	   	for (k=0;k<n;k++)
			   {
    	   		printf ("arr[%d][%d]=%d\t",i,k,arr[i][k]);
			   }
			printf ("\n");   
		}
		break;
		return 0;
	case 3: 
	count= 0;
	for(i=0;i<m;i++)
		{
    	   	for ( k=0;k<n;k++)
			   {
			     if(arr[i][k]%2==0&&arr[i][k]%3==0)
				   {
    	   		       printf ("so chia het cho 2 va 3 la arr[%d][%d]=%d\n",i,k,arr[i][k]);
    	   		       count++;
    	   	       }
			   }
		}
		printf ("gom co tat ca %d so chia het cho 2 va 3\n",count);
		break;
		return 0;
	case 6:
				printf ("trong mang gom cac so nguyen to la :\n");
				for(int i=0;i < n;i++){
					for(int j=0;j < m;j++)
				{
					count=0;
					for(int k=2;k<arr[i][j];k++)
					{
						if(arr[i][j] % k == 0)
					    {
							count=1;
							break;
					    }
					}
						if(count == 0 && arr[i][j] >=2)
						{
					        printf ("%d\n",arr[i][j]);
						}	
				}
			 }
	break;
	return 0;	

	case 9 :
		exit(0);	
    }
 }while("jj");
}
