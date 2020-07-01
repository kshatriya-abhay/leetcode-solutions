class Solution {
public:
    bool isPathCrossing(string path) {
        int l = path.length();
        for(int j=0; j<l; j++){
            int x = 0;
            int y = 0;
            for(int i = j; i<l; i++){
                if(path[i] == 'N') x++;
                else if(path[i] == 'S') x--;
                else if(path[i] == 'E') y++;
                else if(path[i] == 'W') y--;
                if((x == 0)&&(y==0)) return true;
            }
        }
        return false;
    }
};