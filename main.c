#include<stdio.h>
#include<math.h>
#define MAX 100
int totaldigits(int k ,int m){
    while(m!=0)
    {
         m/=10;
          k++;
}
  return k;
}

int nearestsquare(int number){
  int i=1,p=0,k;
   while(k>=0){
                        i++;
            k=number-(i*i);
              p++; 
           
}
       return p*p;
       
       
    }
    
    
    
 

int main(){
    int r,k,count=0, n,x,c,s=1,d,f,a,b,i,arr[MAX],a1,k1,x1,c1,a2,p,diff,j,m,arr1[MAX],t=0,i1=1,r1=0,fa;
  printf ("Enter the number for which you want to find the root\t");
  scanf ("%d", &n);
c=totaldigits(count,n);
 k=c-2;
 a=pow(10,k);
 x=n/a;
 a1=n%a;
c1=totaldigits(count,a1);
   b=nearestsquare(x);

 for(i=1;i<=c1;i++){
 arr[i]= a1%10;
 a1=a1/10;
        }
        r=sqrt(b);
        j=c1;
   while(j!=0){
       diff=x-b;
       x=diff*10+arr[j];
       r1=x/(2*r);
       b=r*r1*2;
       r=r*10+r1;
       diff=x-b;
       j--;
       x=diff*10+arr[j];
       b=r1*r1;
       j--;
        }
        
         printf("%d ",r);
       
    }








