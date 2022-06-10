class Solution {
    // U D R L
    int dx[4]= {-1, +1, 0, 0};
    int dy[4]= {0, 0, +1, -1};
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n= image.size(), m= image[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        fill(image, sr, sc, newColor, vis);
        return image;
    }
    void fill(vector<vector<int>>&image, int sr, int sc, int newc, vector<vector<int>>& vis){
        
        int prevColor= image[sr][sc]; // --> thsi value will always equal to the original image[sr][sc] value.
        image[sr][sc]= newc;
        vis[sr][sc]=1;
        for(int i=0; i<4; i++){
            int newsr= sr+ dx[i];
            int newsc= sc+ dy[i];
            if(newsr>= image.size()|| newsr<0 || newsc>= image[0].size() || newsc<0) {
                continue;
            }
            if(image[newsr][newsc]== prevColor and !vis[newsr][newsc]){
                fill(image, newsr, newsc, newc, vis);
            }
        }
    }
};
//``````````````````without visited array````````````````````````````````````
class Solution {
    // U D R L
    int dx[4]= {-1, +1, 0, 0};
    int dy[4]= {0, 0, +1, -1};
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {       
        if(image[sr][sc]== newColor) return image;
        int n= image.size(), m= image[0].size();
        // vector<vector<int>> vis(n, vector<int>(m, 0));
        fill(image, sr, sc, newColor);
        return image;
    }
    void fill(vector<vector<int>>&image, int sr, int sc, int newc){
        
        int prevColor= image[sr][sc];
        image[sr][sc]= newc;
        // vis[sr][sc]=1;
        for(int i=0; i<4; i++){
            int newsr= sr+ dx[i];
            int newsc= sc+ dy[i];
            if(newsr>= image.size()|| newsr<0 || newsc>= image[0].size() || newsc<0) {
                continue;
            }
            if(image[newsr][newsc]== prevColor){
                fill(image, newsr, newsc, newc);
            }
        }
    }
};
//``````````````````````````````````````````````
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {       
        int initialCol= image[sr][sc];
        fill(image, sr, sc, initialCol, newColor);
        return image;
    }
    void fill(vector<vector<int>>&image, int sr, int sc, int initial, int newc){
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || image[sr][sc]!=initial || image[sr][sc]== newc)  return;
        // if the current col is not equal to the inital color then return or if the cur col is same as the new color which we need to fill, then return cuz if we go to that cell, then an infinite loop will start. 
        image[sr][sc]= newc;
        
        fill(image, sr+1, sc, initial, newc);
        fill(image, sr-1, sc, initial, newc);
        fill(image, sr, sc+1, initial, newc);
        fill(image, sr, sc-1, initial, newc);
    }
};
