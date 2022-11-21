//FCFS cpu scheduling algorithm.

#include<stdio.h>
#include<string.h>
struct process
{
    int at,bt,rt,wt,tat,start_time,finish_time;
    char pid[5];
}p[30];

void accept(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the pid,arrival time and burst time for the process %d",i);
        scanf("%s %d %d",&p[i].pid,&p[i].at,&p[i].bt);
    }
}

void display(int n)
{
    printf("|PID|\t|AT|\t|BT|\t|FT|\t|RT|\t|WT|\n\n");
    for(int i=0;i<n;i++)
    {
        printf("|%s|\t|%d|\t|%d|\t|%d|\t|%d|\t|%d|\n\n",p[i].pid,p[i].at,p[i].bt,p[i].finish_time,p[i].rt,p[i].wt);
    }
}

void sort(int n)
{
    char temp1[10];
    int temp2,temp3;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i].at>p[j].at)
            {
                strcpy(temp1,p[i].pid);
                strcpy(p[i].pid,p[j].pid);
                strcpy(p[j].pid,temp1);

                temp2=p[i].at;
                p[i].at=p[j].at;
                p[j].at=temp2;

                temp3=p[i].bt;
                p[i].bt=p[j].bt;
                p[j].bt=temp3;
            }
        }
    }
}

void gantt_chart(int n)
{
    int time1=0;
    for(int i=0;i<n;i++)
    {
        int temp=p[i].bt;
        while(temp!=0)
        {
            temp--;
            time1++;
        }
        p[i].finish_time=time1;
        p[i].rt=p[i-1].finish_time-p[i].at;
        p[i].wt=p[i-1].finish_time-p[i].at;
        p[i].tat=p[i].wt+p[i].bt;
        if(temp==0)
        printf("%d|%s|%d\t",p[i-1].finish_time,p[i].pid,p[i].finish_time);
    }
}

void calculate_avg(int n)
{
    float tot_wt=0,tot_tat=0;
    for(int i=0;i<n;i++)
    {
        tot_wt=tot_wt+p[i].wt;
        tot_tat=tot_tat+p[i].tat;
    }
    printf("TOTAL WT:%f\n",tot_wt);
    printf("TOTAL TAT:%f\n",tot_tat);
    printf("\nAVERAGE WAIT TIME:%f\nAVERAGE TURN AROUND TIME:%f\n",tot_wt/n,tot_tat/n);
}

int main()
{
    int n;
    do{
        printf("ENTER NUMBER OF PROCES\n");
        scanf("%d",&n);
        if(n<=20)
        {
            accept(n);
            printf("\nDISPLAY TABLE");
            display(n);
            sort(n);
            printf("After sorting\n");
            display(n);
            printf("GANTT CHART\n");
            gantt_chart(n);
            printf("\n\n");
            printf("CALCULATION TABLE\n");
            display(n);
            calculate_avg(n);
        }
        else
        printf("please enter process number less than 20!!\n");
      }
      while(n!=0);
}