//KomalBhamare
//write a program to insert an element in array
//24-01-2023
#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[20],i,n,pos,size;
	clrscr();
	cout<<"enter the size of array:-";
	cin>>size;
	cout<<"enter "<<size<<" arry element:-";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nenter the element to insert:-";
	cin>>n;
	cout<<"at what position:-";
	cin>>pos;
	for(i=size;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[i]=n;
	size++;
	cout<<"\nthe new array:-\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
getch();
}

output:-

enter the size of array:-1                                                      
enter 1 arry element:-2                                                         
                                                                                
enter the element to insert:-1                                                  
at what position:-1                                                             
                                                                                
the new array:-                                                                 
2 1