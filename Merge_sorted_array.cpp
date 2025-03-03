void mergearr(vector<int>&a,vector<int>&b,int m, int n)
{
    int i=m-1,j=n-1,index=m+n-1;
    while(i>=0 && j>=0)
    {
        if(a[i]>b[j])
        {
            a[index]=a[i];
            i--;
            index--;
        }
        else
        {
            a[index]=b[j];
            j--;
            index--;
        }
    }
    while(j>=0)
    {
        a[index]=b[j];
        index--;
        j--;
    }
    return ;
}
