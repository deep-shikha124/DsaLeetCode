class Solution {
public:
   void fill(vector<vector<int>>& image, int x, int y, int r, int c, int nc, int color)
    {
        if(x < 0 || y < 0 || x > r || y > c || image[x][y] != color)
            return;
        
        image[x][y] = nc;
        fill(image,x-1,y,r,c,nc,color);   
        fill(image,x+1,y,r,c,nc,color);    
        fill(image,x,y-1,r,c,nc,color);    
        fill(image,x,y+1,r,c,nc,color);    
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int r = image.size()-1;
        int c = image[0].size()-1;
    
        int color = image[sr][sc];
        if(color == newColor)
            return image;
        
        fill(image,sr,sc,r,c,newColor,color);
        
		 return image;
    }
};