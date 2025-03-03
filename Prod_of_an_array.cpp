vector<int>prod(vector<int>&arr)
{
vector<int>ans(arr.size(),1);
int prefix=1,suffix=1;
for(int i=0;i<arr.size();i++)
{
if(i==0)
ans[0]=prefix;
else
{
prefix=prefix*arr[i-1];
ans[i]=prefix;
}
}
for(int j=arr.size()-1;j>=0;j--)
{
if(j==arr.size()-1)
ans[j]=ans[j]*suffix;
else
{
suffix=suffix*arr[j+1];
ans[j]=ans[j]*suffix;
}}
return ans;
}
