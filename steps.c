#include <stdio.h>
#include <stdlib.h>
#define ULL unsigned long long int
int main()
{
    ULL sum;
    ULL with[3];
    ULL without[3];
    int i,val=1000000007;
    int N;
    scanf("%d",&N);
    if (N==1){
        printf("-1");
        return 0;
    }
    without[0]=with[0]=1;
    without[1]=with[1]=1;
    without[2]=with[2]=2;
    for(i=3;i<=N;i++){
        sum=with[1]+with[2]+without[0];
        with[0]=with[1];
        with[1]=with[2];
        with[2]=sum%val;
        sum=without[2]+without[1];
        without[0]=without[1];
        without[1]=without[2];
        without[2]=sum%val;
        
    }
    printf("%llu",with[2]);
    return 0;
}
