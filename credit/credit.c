#include<cs50.h>
#include<stdio.h>

int main(void)
{   int msum,t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,m1,m2,m3,m4,m5,m6,m7,tt1=0,tt2=0,tt3=0,tt4=0,tt5=0,tt6=0,tt7=0;
    int long long cc,n,n1,n2,n3,n4,n5,n6;
    printf ("Number:" ) ;
    cc = get_long_long();

    n=cc/10;
    int lno=n%10;
    printf("%d\n",lno);
    m1=2*lno;
    if (m1>9)
       { t1= m1/10;
        tt1=m1%10;}
    else t1=m1;


    n1=cc/1000;
    int lno1= n1%10;
    printf("%d\n",lno1);
    m2=2*lno1;
    if (m2>9)
        {t2= m2/10;
        tt2=m2%10;}
    else t2=m2;

    n2=cc/100000;
    int lno2= n2%10;
    printf("%d\n",lno2);
    m3=2*lno2;
    if (m3>9)
        {t3= m3/10;
        tt3=m3%10;}
    else t3=m3;

    n3=cc/10000000;
    int lno3= n3%10;
    printf("%d\n",lno3);
    m4=2*lno3;
    if (m4>9)
        {t4= m4/10;
        tt4=m4%10;}
    else t4=m4;

    n4=cc/1000000000;
    int lno4= n4%10;

    printf("%d\n",lno4);
    m5=2*lno4;
    if (m5>9)
        {t5= m5/10;
        tt5=m5%10;}
    else t5=m5;

    n5=cc/100000000000;
    int lno5= n5%10;
    printf("%d\n",lno5);
    m6=2*lno5;
    if (m6>9)
        {t6= m6/10;
        tt6=m6%10;}
    else t6=m6;

    n6=cc/10000000000000;
    int lno6= n6%10;
    printf("%d\n",lno6);
    m7=2*lno6;
    if (m7>9)
        {t7= m7/10;
        tt7=m7%10;}
    else t7=m7;

    msum=(t1+tt1+t2+tt2+t3+tt3+t4+tt4+t5+tt5+t6+tt6+t7+tt7);
    printf("%d\n", msum);

    int long long p0=cc/1;
    int pno0=p0%10;
    printf("%d\n",pno0);

    int long long p=cc/100;
    int pno=p%10;
    printf("%d\n",pno);

    int long long p1=cc/10000;
    int pno1=p1%10;
    printf("%d\n",pno1);

    int long long p2=cc/1000000;
    int pno2=p2%10;
    printf("%d\n",pno2);

    int long long p3=cc/100000000;
    int pno3=p3%10;
    printf("%d\n",pno3);

    int long long p4=cc/10000000000;
    int pno4=p4%10;
    printf("%d\n",pno4);

    int long long p5=cc/1000000000000;
    int pno5=p5%10;
    printf("%d\n",pno5);

    int long long p6=cc/100000000000000;
    int pno6=p6%10;
    printf("%d\n",pno6);

    int sum= msum+pno0+pno+pno1+pno2+pno3+pno4+pno5+pno6;
    printf("%d\n",sum);

    if(sum%10==0)
    {printf("AMEX \n");}

    else
    printf("INVALID");
}