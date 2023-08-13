#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    scanf("%d%d",&n,&k);
    int scores[n];
    for(int i=0; i<n;i++){
        scanf("%d",&scores[i]);
    }
     int cout=0;
     int kth_score= scores[k-1];
     for(int i=0; i<n; i++){
        if(scores[i]>=kth_score && scores[i]>0){
            cout++;
        }
     }

    printf("%d\n",cout);
    return 0;
}

