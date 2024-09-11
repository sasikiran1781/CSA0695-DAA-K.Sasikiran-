// MATRIX MULTIPLICATION

#include<stdio.h>

int main()
{
    int r,c,i,j,k;
    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&r);
    printf("ENTER NUMBER OF COLUMNS : ");
    scanf("%d",&c);
    int x[r][c],y[r][c],z[r][c];
    printf("\nFIRST MATRIX\n");
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("ENTER ELEMENT : ");
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nSECOND MATRIX\n");
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("ENTER ELEMENT : ");
            scanf("%d",&y[i][j]);
        }
    }
    printf("\nMULTIPLIED MATRIX : \n");    
    for(i=0;i<r;i++)    
    {    
       for(j=0;j<c;j++)    
       {    
          z[i][j]=0;    
          for(k=0;k<c;k++)    
          {    
             z[i][j]=z[i][j]+x[i][k]*y[k][j];    
          }    
       }    
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }
}