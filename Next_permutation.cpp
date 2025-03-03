void permu(vector<int>&a)
{
int n=a.size();
int pivot=-1;
for(int i=n-2;i>=0;i--)
{
if(a[i]<a[i+1])
{
pivot=i;
break;
}
}
if(pivot==-1)
{
int start=0,end=n-1;
while(start<=end)
{
swap(a[start],a[end]);
start++;end--;
}}
for(int j=n-1;j>=0;j--)
{
if(a[j]>a[pivot])
swap(a[j],a[pivot]);
}
int s=pivot+1,e=n-1;
while(s<=e)
{
swap(a[s],a[e]);
s++;e--;
}
}
