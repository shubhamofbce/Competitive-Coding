class Graph{
public:
    int v;
    list<int> *l;
    Graph(int V){
        v = V;
        l = new list<int>[v+1];
    }
    void addedge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void Print(){
        for(int i = 1;i<v+1;i++){
            cout<<i<<"->";
            for(auto x:l[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(int k,int ans)
    {
        queue<int> q;
        int *dist; bool *vis;;
        dist = new int[v+1];
        vis = new bool[v+1];
        q.push(k);
        vis[k]=1;
        int cnt= 0 ;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:l[node])
            {
                if(!vis[it])
                {
                    dist[it]=dist[node]+1;
                    vis[it]=1;
                    q.push(it);
                    //if(dist[it]==ans){cnt+=1;}
                }
            }
        }
        cout<<dist[ans]<<"\n";
    }
    




};
