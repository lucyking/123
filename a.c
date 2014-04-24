#include<stdlib.h>
#include<stdio.h>
#define N 6
typedef struct a{
	int data;
	struct a *next;
	}LNode;

LNode *h;
int i,j,k,y,alpha=0,q=0;
int color[N][N];
int s[N][N];
int list[N];


int main(){

	for(i=0;i<N;i++)
		list[i]=-1;

	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			s[i][j]=-1;
			color[i][j]=-1;
			}
	color[0][1]=0;
	color[0][2]=0;
	//color[0][3]=0;
	color[1][3]=0;
	color[2][4]=0;
	color[4][5]=0;


	alpha=0;
	printf("Begin->");
	bfs(0);
	printf("End\n");

}

int bfs(int x){
	for(y=0;y<N;y++){
		if(color[x][y]==0){
			printf("(%d,%d)->",x,y);
		color[x][y]=1;
		list[alpha++]=y;
		}
	}
	if(q<N&&list[q]>-1)
		bfs(list[q++]);

}





