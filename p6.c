#include<stdio.h>
int MAX(int a,int b){
return(a > b)?a:b;
}
int main(){
int n,w,i,W;
int wt[100],val[100];
int dp[100][100];

printf("enter the elements");
scanf("%d",&n);

printf("enter the weights");
for(i=0;i<n;i++){
scanf("%d",&wt[i]);
}
printf("enter the values");
for(i=0;i<n;i++){
scanf("%d",&val[i]);
}
printf("enter the capacity of knapsack");
scanf("%d",&W);

for(i=0;i<=n;i++){
for(w=0;w<=W;w++){

if(i==0 || w==0){
dp[i][w]=0;
}}
else if(wt[i-1]<=w)
dp[i]=MAX(val[i-1],dp[i-1][w-wt[i-1]],
dp[i-1][w]);
else
dp[i]=dp[i-1][w]; 
}
printf("maximum profit = %d",dp[n][W]);
return 0;
}
