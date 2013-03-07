#include "stdafx.h"
#include <iostream>

using namespace std;

void main()
{
	int size;
	cin>>size; 
	int * arr;
	int min=0,c;
	arr=new int[size];
	for (int i=0,i<size,i++)
		arr[i]=rand() %10 +1;
	for (int i=0,i<size,i++)
	{
		for (int j=0,j<(size-1,j++)
		{
		min=arr[i];
		c=i;
			if (min<arr[j])
			{
			 min=arr[j];
			c=j;
			}
		}
	arr[c]=arr[i];
	arr[i]=min;
	}



}

