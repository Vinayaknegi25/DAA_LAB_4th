#include <stdio.h>
#include <stdlib.h>
int* insert(int*,int);
int* search(int *,int,int);
int main()
{
    int no_it,no_elem,key,i,j,k;
    int *p=NULL;
    printf("\nInput: \n");
    scanf("%d",&no_it);
    for(i=0;i<no_it;i++)
    {
        scanf("%d",&no_elem);
        p=insert(p,no_elem);
        printf("\nKey");
        scanf("%d",&key);
        search(p,key,no_elem);
    }
}
int* insert(int* p,int no_elem)
{
    int i;
    p=(void*)malloc(no_elem*sizeof(int));
    for(i=0;i<no_elem;i++)
    {
        scanf("%d",p+i);
    }
    return p;
}
int* search(int *p,int key,int no_elem)
{
    for (int i=0;i<no_elem;i++)
    {
        if(key==*(p+i))
        {
            printf("Present %d",i+1);
            p=NULL;
            return p;
        }
    }
    printf("\nNOT PRESENT %d",key);
    p=NULL;
    return p;
}