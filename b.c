#define N 4
#include<stdio.h>
    int color[N][N];//0:un_visit 
                    //1:in_visit
                    //2:all_visit
    int counter;
    int s[N][N];//graph
    int i,j;
    int list[N],k=0;


void main(){
    for(i=0;i<N;i++){      //build gra
        for(j=0;j<N;j++){
            color[i][j]=-1;
        }
    }


   color[0][1]=0;              //assegement 
  // color[1][2]=0;
 //  color[2][2]=0;
   color[3][2]=0;
  // color[2][3]=0;
  // color[3][0]=0;

   counter=0;
bfs_visit(0);

}
/*------Fx_Start-------*/

/*-------Fx: dfs_visit---------*/

int bfs_visit(int x){
	for(j=0;j<N;j++){      
		if(color[x][j]==0){
			color[x][j]=1;
			printf("%d->",s[x][j]);
			counter++;
			list[k++]=j;
		}
		for(j=k;j-counter>0;j--){      
			bfs_visit(list[j]);

		}
		counter=0;

	}
}













