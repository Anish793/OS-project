//Name:Anish Kumar Gupta
//Section K17KV Roll.no:65
// Reg.No:11717201
#include<stdio.h>
#include<unistd.h>
struct scheduling
{
    int p,arr,brt,rnt,tempp,pr;
};

void sortarrival(struct scheduling a[],int pro)
{
    int i,j;
    struct scheduling temp;
    int y;
    for(i=0;i<pro;i++)
    {
        for(j=i+1;j<pro;j++)
        {
            if(a[i].arr > a[j].arr)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    return;
}
//for prioirity scheduling

void sortpriority(struct scheduling c[],int pro)
{
    int i,j;
    struct scheduling temp;
    int y;
    for(i=0;i<pro;i++)
    {
        for(j=i+1;j<pro;j++)
        {
            if(c[i].pr > c[j].pr)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
            
        }
        
    }
    return;
}
