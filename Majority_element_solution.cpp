int majorityelement(vector<int>&arr)
{
int ans,c=0;
int n=arr.size();
for(int i=0;i<arr.size();i++)
{
if(c==0)
ans=arr[i];
if(ans==arr[i])
c++;
else
c--;
}
c=0;

for(int val:arr)
{
if(val==ans)
c++;
}
if(c>n/2)
return ans;
return -1;
}
