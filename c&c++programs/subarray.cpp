#include <bits/stdc++.h>
using namespace std;

vector<int> find(vector<int> a,int n,int s){
	vector<int> b; //output vector
	int cur_sum=0;
	for(int i=0;i<n;i++){
		cur_sum=a[i];//cur_suming element
		for(int j=i+1;j<n;j++){
			//add next element contigeously 
			cur_sum=cur_sum+a[j]; 
			// if current sum  is eaqual to the sum value
			if(cur_sum==s){ 
				//insert array index of the cur_sum element in sub array
				b.push_back(i); 
				//insert array index of the last element in sub array
				b.push_back(j); 
				return b;
			}
			if(cur_sum>s)
				break;
		}
	}
	// if no such sub array exists
	b.push_back(-1); 
	return b;
} 

int main() {
	//code
	int s,n,no;
	cout<<"enter array length & Sum respectively"<<endl;
	scanf("%d%d",&n,&s);

	vector<int> a; //input array

	cout<<"enter array elements........"<<endl;
	for(int j=0;j<n;j++){
		scanf("%d",&no);
		a.push_back(no); //inserting array elements
	}

	vector<int> b=find(a,n,s);
	if(b[0]==-1)
		printf("subarray not found");
	else{
		cout<<"Subarray is: ";
		for(int i=b[0];i<=b[1];i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}	    
	return 0;
}

