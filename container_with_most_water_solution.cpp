class solution {
public:
int container(vector<int>height)
{
int maxwater=0;int left=0;int right=height.size()-1;
while(left<right)
{
int length=min(height.at(left),height. at(right));
int width=right-left;
int area=length*width;
maxwater=max(maxwater,area);
if(height.at(left)<height.at(right))
left++;
else
right--;
}
return maxwater;
}
};
