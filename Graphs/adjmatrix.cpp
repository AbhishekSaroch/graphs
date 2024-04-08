#include<iostream>
#include<vector>
using namespace std;


int main(){
  int n;
  cout<<"Enter the number of nodes"<<endl;
  cin>>n;

  int e;
  cout<<"Enter the number of edges"<<endl;
  cin>>e;

  // Initialises the adj matrix with all elements as zero
  vector<vector<int>>adj(n,vector<int>(n,0));

  for(int i=0;i<n;i++){
    int u,v;
    cin>>u>>v;
    adj[u][v]=1;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<adj[i][j]<<" ";
    }
  }
  return 0;
}