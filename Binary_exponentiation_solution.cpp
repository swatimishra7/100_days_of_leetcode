double binexpo(int n, int p)
{
double ans=1,num=n;
long binform=p;
 if(n==1)
 return 1.0;
 if(p==0)
 return 1.0;
 if(p==1)
 return num;
 if(n==-1 && p%2==0)
 return 1.0;
 if(n==-1 && p%2!=0)
 return -1.0;
 if(p<0)
 {
 num=1.0/n;
 binform=-binform;
 }
 else
 {
 while(binform>0)
 {
 if(binform%2==1)
 ans*=num;
 binform=binform/2;
 num=num*num;
 }}
 return ans;
 
 }
