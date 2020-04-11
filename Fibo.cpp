#include<iostream>
#include<thread>
#include<chrono>

using namespace std;
using namespace std::chrono;
void fib(int n)
{
	int *arr=new int [n]; 
	arr[0]=0;
	arr[1]=1;
	if(n==1){
		cout<<"element"<<arr[0]<<" is generated and stored in array"<<"\n";
	}
	else if(n==2){

	cout<<"element "<<arr[0]<<" is generated and stored in array"<<"\n";
	cout<<"element "<<arr[1]<<" is generated and stored in array"<<"\n";	
	}
	else
   { 
	cout<<"element "<<arr[0]<<" is generated and stored in array"<<"\n";
	cout<<"element "<<arr[1]<<" is generated and stored in array"<<"\n";
	for(int i=2;i<n;i++)
	{  
    int ele=arr[i-1]+arr[i-2];
						    
							arr[i]=arr[i-1]+arr[i-2];
	
	cout<<"element "<<ele<<" is generated and stored in array"<<"\n";
						}
	cout<<"The resultant fibonacci series is"<<endl;
	
						for(int i=0;i<n;i++)
						 {
						cout<<arr[i]<<" ";
					    }
					    cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter a number to print fibonacci"<<"\n";
	cin>>n;
	
	auto starttime = high_resolution_clock::now();
	std::thread t1(fib,n);
	t1.join();
	auto stoptime=high_resolution_clock::now();
	auto duration=duration_cast<microseconds>(stoptime-starttime);
	cout<<endl;
    cout<< "Time taken in execution in  sec: "<<duration.count()/1000000<<endl;
return 0;
}

