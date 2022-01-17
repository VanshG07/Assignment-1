#include <stdio.h>

void union_sets()
{
    int m,n,i,j,k;
    printf("Please enter no of elements :\n");
    printf("No of elements in set a: \n");
    scanf("%d",&m);
    printf("No of elements in set b: \n");
    scanf("%d", &n);
    int a[m],b[n];
    
    printf("Set a : \n");
    for(i=0;i<m;i++){
    scanf("%d",&a[i]);}

    printf("Set b : \n");
    for(j=0;j<n;j++){
    scanf("%d",&b[j]);}
    printf("SET a : \n");
    printf("{ ");
    for(int i = 0; i <m ; i++){
      printf("%d ", a[i]);
    }
    printf(" }");
    printf("\nSET b : \n");
    printf("{ ");
    for(int i = 0; i<n; i++){
      printf("%d ", b[i]);
    }
    printf(" }");
    printf("\nunion :");
    printf("{ ");
    for(i=0;i<m;i++){
    printf("%d  ",a[i]);}
    for(j=0;j<n;j++)
    {   k=1;
        for(i=0;i<m;i++)
        {
            if(a[i]==b[j])
           { k=0;
            break;}
        }
        if(k==1)
        printf(" %d ",b[j]);
    }
    printf(" }");
}
void differene_sets()
{
  int m,n,i,j,k;
    printf("Please enter no of elements( m>n)\n");
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    printf("Set a : \n");
    for(i=0;i<m;i++){
    scanf("%d",&a[i]);}
    printf("Set b : \n");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    printf("SET a : \n");
    printf("{ ");
    for(int i =0; i<m; i++){
      printf("%d ", a[i]);
    }
    printf(" }");
    printf("\nSET b : \n");
    printf("{ ");
    for(int i =0; i<n; i++){
      printf("%d ", b[i]);
    }
    printf(" }");
    printf("\nDifference between set a and set b :\n");
    printf("{ ");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {  k=1;
        if(a[i]==b[j])
        {
          k=0;
          break;
        }
      }
      if(k==1)
      printf("%d ",a[i]);
    }
    printf(" }");

}
void intersection_sets()
{
     int m,n,i,j;
    printf("Please enter no of elements : \n");
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    printf("Set a :\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Set b :\n");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    printf("Set a :\n");
    for(i =0; i<m; i++){
      printf("%d ", a[i]);
    }
    printf("\nSet b :\n");
    for(int i =0; i<n; i++){
      printf("%d ",b[i]);
    }
    printf("\nIntersection is : \n");
    printf("{ ");
    for(i=0;i<m;i++)
  {

        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf(" %d ",a[i]);
                
            }
        }

    }
    printf(" }");
}
void symetric_difference_sets()
{
  int m,n,i,j,k;
    printf("Please enter no of elements ==\n");
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    printf("Set a : \n");

    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Set b : \n");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    printf("\nSet a :\n");
    printf("{ ");
    for(i=0; i<m;i++){
      printf("%d ", a[i]);
    }
    printf(" }");
    printf("\n Set b :\n");
    printf("{ ");
    for(i=0;i<n; i++){
      printf("%d ",b[i]);
    }
    printf(" }");
    printf("\nsymmetric difference :\n");
    printf("{ ");
  
    for(i=0;i<n;i++)
    { k=1;
      for(j=0;j<m;j++)
      {
        if(a[j]==b[i])
        {
          k=0;
          break;
        }
      }
      if(k==1){
      printf("%d ",b[i]);}
    }
    for(i =0; i<m;i++){
      k=1;
      for(j=0; j<n; j++){
        if(a[i]==b[j]){
          k =0;
          break;
        }
      }
      if(k==1){
           printf(" %d ", a[i]);
      }
    }
    printf(" }");
}



int main ()
{
int operation =1;
while(operation!=0 && operation< 5){
  printf("\n ENTER OPERATION:");
    printf("\n1.union\n2.intersection\n3.difference\n4.symmetric difference\n");
    scanf("%d",&operation);
    
    switch(operation)
    {
        case 1:
        union_sets();
        break;
        case 2:
        intersection_sets();
        break;
        case 3:
        differene_sets();
        break;
        case 4:
        symetric_difference_sets();
        break;
    

    }
}

    return 0;
  }