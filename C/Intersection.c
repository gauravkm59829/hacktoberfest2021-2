#include <stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    
     int m;
    scanf("%d\n",&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
   
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d ",&b[i]);
    }
    
    int c[n+m];
    int z=n+m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                c[i]=a[i];
                z--;
            }
        }
    }
    
    for(int i=0;i<z;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
