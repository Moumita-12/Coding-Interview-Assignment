bool dfs(int src, vector<vector<int> > &B, vector<int> &visited, vector<int> &dfsVis){
visited[src] = 1;
dfsVis[src] = 1;
for(auto e: B[src]){
if(visited[e] == 0){
if(dfs(e, B, visited, dfsVis)){
return true;
}
}else if(dfsVis[e]){
return true;
}
}
dfsVis[src] = 0;
return false;
}

int Solution::solve(int A, vector<vector<int> > &B) {
vector<int> visited(A+1, 0);
vector<int> dfsVis(A+1, 0);
vector<vector<int> > graph(A+1);
for(auto v: B){
graph[v[0]].push_back(v[1]);
v.clear();
}
for(int i = 1; i <= A; i++){
if(dfs(i,graph, visited, dfsVis)){
return true;
}
}
return false;
}


// Time: O(N+E), Space: O(N)
