#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		long long num;
		long long k;
		std::cin>>num>>k;
		long long array[num];
		for(long long index=0;index<num;index++)
		{
				std::cin>>array[index];
		}
		std::sort(array,array+num);
		long long counter=0;
		for(long long index=0;index<num;index++)
		{
				long long left=index+1,right=num-1,mid;
				while(left<=right)
				{
						mid=(left+right)/2;
						if(((array[mid]-array[index])>=k)&&((array[mid-1]-array[index])<k))
						{
								long long position;
								position=mid;
								counter+=num-mid;
								break;
						}
						if(array[mid]-array[index]<k)
						{
								left=mid+1;
						}
						if(array[mid]-array[index]>=k&&array[mid-1]-array[index]>=k)
						{
								right=mid-1;
						}
				}
		}
		std::cout<<counter;
		return 0;
}
		
