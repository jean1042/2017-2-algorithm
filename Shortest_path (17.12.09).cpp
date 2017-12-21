#include <iostream>
#include <fstream>
using namespace std;
enum Boolean{FALSE, TRUE};
#define nmax 100
#define MAX 100000

int 
   adjacant[10][10]={
{0, 1500, 250, MAX, MAX, MAX, MAX, MAX, MAX, MAX},
{1500, 0, 1000, 1200, 1400, MAX, MAX, MAX, MAX, MAX},
{250, 1000, 0, MAX, MAX, MAX, MAX, 1400, MAX, 900},
{MAX, 1200, MAX, 0, MAX, MAX, 800, 500, 1000, MAX},
{MAX, 1400, MAX, MAX, 0, 1200, MAX, MAX, MAX, MAX},
{MAX, MAX, MAX, MAX, 1200, 0, 300, MAX, MAX, MAX},
{MAX, MAX, MAX, 800, MAX, 300, 0, MAX, 300, MAX},
{MAX, MAX, 1400, 500, MAX, MAX, MAX, 0, 1700, 1000},
{MAX, MAX, MAX, 1000, MAX, MAX, 300, 1700, 0, MAX},
{MAX, MAX, 900, MAX, MAX, MAX, MAX, 1000, MAX, 0}
};


class Graph{
public:
Graph(void){set();};
void ShortestPath(const int n, const int v);
int choose(const int a);
void set();

int length[nmax][nmax];
int dist[nmax];
bool s[nmax];
};

void Graph::ShortestPath(const int n, const int v){

for(int i=0; i<n; i++){
 s[i] = false, dist[i] = length[v][i];
}
s[v] = true;
dist[v] = 0;

for (int i=0; i<n-2; i++){
 int u = choose(n);
 s[u] = true;
 for(int w=0; w<n; w++)
  if(!s[w])
        if(dist[u] + length[u][w] < dist[w])
    dist[w] = dist[u] + length[u][w];
}
}

int Graph::choose(const int a){
for(int u=1; u<a; u++)if(!s[u]){
 for(int i=1; i<a-2; i++){
  if(!s[i+1]){
  if(dist[u]>dist[i+1])u=i+1;
  else if(dist[u]==dist[u+i])u=i;
  }   
 }
 return u;
}
return 0; 
}


void Graph::set()
{
for(int j=0; j<10; j++){
 for(int k=0; k<10; k++){
 length[j][k]=adjacant[j][k];
 }
}
}


void main(void)

{

Graph A;

A.ShortestPath(10,0);
cout<<"디늉1에서 디늉2까지의 최단거리는 "<<A.dist[1]<<endl;
cout<<"디늉1에서 디늉3까지의 최단거리는 "<<A.dist[2]<<endl;
cout<<"디늉1에서 디늉4까지의 최단거리는 "<<A.dist[3]<<endl;
cout<<"디늉1에서 디늉5까지의 최단거리는 "<<A.dist[6]<<endl;
cout<<"디늉1에서 디늉6까지의 최단거리는 "<<A.dist[7]<<endl;
cout<<"디늉1에서 디늉7까지의 최단거리는 "<<A.dist[8]<<endl;
cout<<"디늉1에서 디늉8까지의 최단거리는 "<<A.dist[9]<<endl;
}