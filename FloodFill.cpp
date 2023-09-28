#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

	void fill(vector<vector<int>>& image,int sr,int sc,int oldColor,int newColor){
		if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size()){
			return;
		}
		if(image[sr][sc]!=oldColor){
			return;
		}
		if(image[sr][sc]==newColor){
			return;
		}
		image[sr][sc]=newColor;
		fill(image,sr+1,sc,oldColor,newColor);
		fill(image,sr-1,sc,oldColor,newColor);
		fill(image,sr,sc+1,oldColor,newColor);
		fill(image,sr,sc-1,oldColor,newColor);
	}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
		int oldColor = image[sr][sc];
		if(oldColor==color){
			return image;
		}
		fill(image,sr,sc,oldColor,color);
		return image;
    }
};

int main(){
	Solution s;
	vector<vector<int>>image={{1,1,1},{1,1,0},{1,0,1}};
	int sr=1,sc=1,color=2;
	s.floodFill(image,sr,sc,color);
		
	for(int i=0;i<image.size();i++){
		for(int j=0;j<image[i].size();j++){
			cout<<image[i][j];
		}
		cout<<endl;
	}
}