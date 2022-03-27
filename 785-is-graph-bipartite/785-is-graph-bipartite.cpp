class Solution {
public:
    
    bool bfs(int node,vector<vector<int>>& graph,vector<int>& color){
        queue<int>q1;
        q1.push(node);
        color[node]=0;
        while(!q1.empty()){
            int n=q1.front();
            q1.pop();
            for(auto it: graph[n]){
                if(color[it]==-1){
                    color[it]=1-color[n];
                    q1.push(it);
                }
                else if (color[it]==color[n]) return false;
            }
        }
        return true;
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1) if(!bfs(i,graph,color)) return false;
        }
        return true;
        
    }
};