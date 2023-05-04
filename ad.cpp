#include<iostream>
using namespace std;
class question{
	private:
	       int n, i, j;
	       int matrix[101][101];
           int max_value[101], min_value[101];
           int saddle_point_x = -1, saddle_point_y = -1;
	public:
		void init(){
			scanf("%d", &n);
           int matrix[n][n];
           int max_value[n], min_value[n];
           int saddle_point_x = -1, saddle_point_y = -1;
		}
		void count(){
			 for(i = 0;i < n; i++){
        max_value[i] = -32768;
        min_value[i] = 32767;
        for(j = 0; j< n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0;i < n; i++){
        for(j = 0; j< n; j++){
            if(matrix[i][j]  > max_value[i]){
                max_value[i] = matrix[i][j];
            }
            if(matrix[j][i] < min_value[i]){
                min_value[i] = matrix[j][i];
            }
        }
    }
    for(i = 0;i < n; i++){
        for(j = 0; j< n; j++){
            if(max_value[i] == min_value[j]){
                saddle_point_x = i;
                saddle_point_y = j;
                break;
            }
        }
    }
    if(saddle_point_x != -1){
        cout<<saddle_point_x<<" "<<saddle_point_y;
    }else{
        cout<<"NO";
    }
		}
		
};
int main()
{
   question how;
   how.init();
   how.count();
   return 0;
}
