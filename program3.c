#include <stdio.h>
void main()
{
int num;
int i, key,element_found = 0;
printf("Enter number of elements: ");
scanf("%d", &num);
int arr[num];
printf("\nEnter elements in array:");
for (i = 0; i < num; i++)
{
scanf("%d", &arr[i]);
}
printf("\nEnter the key element that you would like to be searched: ");
scanf("%d", &key);
for (i = 0; i < num ; i++)
{
if (key == arr[i] )
{
element_found = 1;
break;
}
}
if (element_found == 1)
printf("we got the element at index %d",i);
else
printf("not found\n");
}