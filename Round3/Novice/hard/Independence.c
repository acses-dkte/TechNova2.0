/*
  Link yaha hai - https://www.codechef.com/problems/INDEPENDENCE?tab=statement
*/

#include <stdio.h>
const char* flag(int o, int w, int g){
    int max_flag = o;
    if(max_flag < w){max_flag = w;}
    if(max_flag < g){max_flag = g;}
    
    int other_flag = o + w + g - max_flag;
    if(max_flag > other_flag + 1){
        return "NO";
    }else{
        return "YES";
    }
    
}
int main(void) {
	// your code goes here
	int t,o,w,g;
	scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&o,&w,&g);
        printf("%s\n" , flag(o,w,g));
    }
}

