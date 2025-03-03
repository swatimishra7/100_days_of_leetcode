pair<int,int>spiralmat(vector<vector<int>>&mat,int target)
{
int start=0,end=mat.size()-1;
while(start<=end)
{
int mid=start+(end-start)/2;
int s=0,e=mat[0].size()-1;
if(mat[mid][s]<=target && target<=mat[mid][e])
{
while(s<=e)
{
int m=s+(e-s)/2;
if(target==mat[mid][m])
return {mid, m};
else if(target>=mat[mid][m])
s=m+1;
else
e=m-1;
}}
else if(target>mat[mid][e])
start=mid+1;
else
end=mid-1;
}
return {-1,-1};
}
