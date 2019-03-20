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

void priorityy(struct scheduling c[],int u)
{    int i,time1;
    
    printf("\n********************************************\n");
    printf("  Priority Scheduling(non-premptive)   ");
    printf("\n********************************************2\n\n");
    
    for(i=0;i<u;i++)
    {
        c[i].p = i;
    }
    
    printf("Gantt Chart:\n");
    sortarrival(c,u);
    time1=c[0].arr;
    int z=c[0].arr;
    printf("%d",time1);
    for(i=0;i<u;i++)
    {
        time1=time1+c[i].brt;
        printf(" -> [P%d] <- %d",c[i].p,time1);
        
        break;
    }
    
    
    sortpriority(c,u);
    
    
    
    for(i=0;i<u;i++)
    {    if(z==c[i].arr)
    {
        continue;
    }
        time1=time1+c[i].brt;
        printf(" -> [P%d] <- %d",c[i].p,time1);
    }
    
    
}



void fcfs(struct scheduling b[],int k)
{
    
    int i,time;
    printf("\n***************************************\n");
    printf("           First Come First Serve        ");
    printf("\n***************************************\n\n");
    for(i=0;i<k;i++)
    {
        b[i].p = i;
    }
    sortarrival(b,k);
    time=b[0].arr;
    
    printf("Gantt Chart:\n");
    printf("%d",time);
    for(i=0;i<k;i++)
    {
        time=time+b[i].brt;
        printf(" -> [P%d] <- %d",b[i].p,time);
    }
}

