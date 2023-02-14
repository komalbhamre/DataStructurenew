//KomalBhamare
//27-01-2023
//write a program for deletion of array element 
#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[20],size,i,j,elem;
	clrscr();
	cout<<"enter size of array:-";
	cin>>size;
	cout<<"enter element of an array:-"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element you want to delete:-";
	cin>>elem;
	for(i=0;i<size;i++)
	{
		if(arr[i]==elem)
		{
			for(j=i;j<size-1;j++)
			{
				arr[j]=arr[j+1];
			}
		}
	}
	cout<<"element in array:-";
	for(i=0;i<size-1;i++)
	{
		cout<<arr[i]<<"  ";
	}
getch();
}

output:-
enter size of array:-5                                                          
enter element of an array:-                                                     
1 2 3 4 5                                                                       
enter element you want to delete:-2                                             
element in array:-1  3  4  5     