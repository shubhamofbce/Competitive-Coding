#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Code Of DSu

int findparent(int parent[],int n){
    if(parent[n]==-1){
    return n;
    }
    return findparent(parent,parent[n]);
}

void Union(int parent[],int qa,int qb){
    int pa = findparent(parent,qa);
    int pb = findparent(parent,qb);

    if(pa!=pb){
    parent[pa] = pb;
    }


}
int main()
{
    int parent[5];
    memset(parent,-1,sizeof(parent));
    for(int i = 0;i<3;i++){
    int x,y;
    cin>>x>>y;
    int px = findparent(parent,x);
    int py = findparent(parent,y);
    if(px!=py){
    Union(parent,px,py);
    }
    }
    for(auto x:parent){
    cout<<x<<" ";
    }

    return 0;
}
