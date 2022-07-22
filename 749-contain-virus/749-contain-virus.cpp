class Group{
    public:
    
    set<pair<int,int>>ne;
    set<pair<int,int>>affected;
    
    int w;
    
    Group(){
        w = 0;
    }
};



class Solution {
public:
    
    bool isValid(int i,int j,int n,int m){
        return i>=0 && j>=0 && i<n && j<m;
    }
    
    int dir[4][2]={
        {1,0},
        {0,1},
        {-1,0},
        {0,-1}
    };
    

    void dfs(vector<vector<int>>&in,int i,int j,int n,int m,vector<vector<bool>>&vis,Group *g){
        
        if(in[i][j]==-1) return;
        
        if(in[i][j] ==0 ){
            g->w++;
            g->ne.insert({i,j});
            return;
        }
        
        vis[i][j] = 1;
        
        if(in[i][j] == 1)
            g->affected.insert({i,j});
           
        
        for(int k=0;k<4;k++){
            
            int x = i+dir[k][0], y = j+dir[k][1];
            
            if(isValid(x,y,n,m) && !vis[x][y]) 
                dfs(in,i+dir[k][0],j+dir[k][1],n,m,vis,g);
        }
        
    }
    
    
    int containVirus(vector<vector<int>>& in) {
        
        int n = in.size(),m = in[0].size(),ans = 0;
        
        
        while(1){
            
            vector<Group *>v;
            
            vector<vector<bool>>visited(n,vector<bool>(m,0));
            
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(!visited[i][j] && in[i][j]==1){
                        
                        Group *g  = new Group();
                        dfs(in,i,j,n,m,visited,g);
                        
                        v.push_back(g);
                    }
                        
                }
            }
            
            
            if(v.size()==0) break;
            
            
            int mx = 0,index = 0;
            
            for(int i=0;i<v.size();i++){
                if(v[i]->ne.size()>mx){
                    mx = v[i]->ne.size();
                    index = i;
                }
            }
            
            Group * x = v[index];
            
            ans+=(x->w);
            
            
            for(auto itr:x->affected){
                in[itr.first][itr.second] = -1;
            }
            
            
            for(int i=0;i<v.size();i++){
                if(i==index) continue;
                x = v[i];
                for(auto itr:x->ne){
                    in[itr.first][itr.second] = 1;
                }
                
            }
            
 
        }
        
        return ans;
    }
};