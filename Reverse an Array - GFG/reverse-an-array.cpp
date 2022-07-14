#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int arr[100];
	
	while(T--)
	{
	    
	    int N;
	    cin>>N;
	
	
	for(int i=0;i<N;i++)
	{
	    cin>>arr[i];
	}
	
	for(int i=0;i<N/2;i++ )
	{
	    int temp=arr[i];
	    arr[i]=arr[N-i-1];
	    arr[N-i-1]=temp;
	}
	
	for(int i=0;i<N;i++)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	    
	}
	
return 0;
}