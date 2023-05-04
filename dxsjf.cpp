 #include<iostream>
using namespace std;
#define MAX_INDEX 101
class question{
	private:
		int a, b, i,flag, maxIndex = 0;
        int polynomial[2][MAX_INDEX];
    public:
	   	void input(){
		 for(i = 0; i < MAX_INDEX; i++){
	      polynomial[0][i] = 0;
	      polynomial[1][i] = 0;
	        }
	    for (i = 0; i < 2; i++) {
	   	scanf("%d %d", &a, &b);
	    polynomial[i][a] = b;
	   	if(a > maxIndex) maxIndex = a;
	    	while(a != 0){
	    		scanf("%d %d", &a, &b);
	    		polynomial[i][a] += b; 
			}
	    }
	    maxIndex = maxIndex > MAX_INDEX - 1?MAX_INDEX - 1:maxIndex;
			}
		void count(){
			int flag = 0;
        for(i = maxIndex; i > 1;i--){
    	int temp = polynomial[0][i] + polynomial[1][i];
    	if(temp != 0){
    		if(flag == 1 && temp>0){
    		cout<<"+";
			}
			flag = 1;
    		if(abs(temp)>1){
    		cout<<temp<<"x"<<i;
			}else if(temp == 1){
			cout<<"X"<<i;
			}else{
			cout<<"-x"<<i;
			}		
 		}
        }
			 int temp_0 = polynomial[0][0]+ polynomial[1][0];
             int temp_1 = polynomial[0][1]+ polynomial[1][1];
		    if(temp_1!=0){
		    	if(flag == 1 && temp_1>0){
		    	cout<<"+";
				}
				flag = 1;
		    	if(abs(temp_1) >1){
		    		cout<<temp_1<<"x";
				}else if(temp_1== 1){
					cout<<"x";
				}else{
					cout<<"-x";
				} 			
			}
			if(flag){
				cout<<"+";
			}
	   cout<<temp_0;
		}
};
int main()
{
	question how;
	how.input();
	how.count();
}

