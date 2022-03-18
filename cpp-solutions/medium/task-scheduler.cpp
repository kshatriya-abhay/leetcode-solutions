class Comp
{ 
public: 
    bool operator() (const pair<char,int>& p1, const pair<char,int>& p2) 
    { 
        return p1.second < p2.second; 
    } 
};
bool comp(pair<char, int> a, pair<char, int> b){
    return min(a.second, b.second);
}
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0) return tasks.size();
        int ans = 0;
        unordered_map<char, int> t_count;
        priority_queue<pair<char,int>, vector<pair<char,int>>, Comp> ready_q;
        queue<pair<pair<char,int>,int>> coolq;
        for(int i=0; i<tasks.size(); i++){
            t_count[tasks[i]]++;
        }
        for(auto it = t_count.begin(); it!=t_count.end(); it++){
            ready_q.push(make_pair(it->first, it->second));
        }
        // while(!ready_q.empty()){
        //     cout<<ready_q.top().first<<ready_q.top().second<<" ";
        //     ready_q.pop();
        // }
        while(!ready_q.empty() || !coolq.empty()){
            if(!ready_q.empty()){
                pair<char,int> curr = ready_q.top();
                //cout<<curr.first<<curr.second<<" ";
                curr.second--;
                ready_q.pop();
                if(curr.second > 0){
                    //cout<<"#"<<ans+n<<" ";
                    coolq.push(make_pair(curr,ans + n));
                }
            }
            //if(!coolq.empty()) cout<<coolq.front().second<<","<<ans<<" ";
            while(!coolq.empty() && (coolq.front().second == ans)){
                ready_q.push(coolq.front().first);
                coolq.pop();
            }
            ans++;
        }
        return ans;
    }
};