#include <stdio.h>
#include <math.h>

// Adjoint of a 3*3 Matrix program

void Co_factor_Matrix(int *array,int matrix[3][3],int cofactor[3][3])
{
 int i,j,p,q,t;
  for (i=0;i<3;i++)
   { 
    for(j=0;j<3;j++)
      {
        t=0;
          for(p=0;p<3;p++)
          {
            for(q=0;q<3;q++)
            {
              if(p==i||q==j)
              {
                continue;
                     }
              else
              {  
                array[t]=matrix[p][q];
            //   printf("%d, %d, %d, %d\n", t,p,q,array[t]);
                t++;
                  }   
                     }
                        }
       // printf("%d %d %d %d\n", array[0],array[1],array[2],array[3]);
      cofactor[i][j]=pow(-1.0,(i+j+2))*(array[0]*array[3]-array[1]*array[2]);
          printf("%d\t", cofactor[i][j]);
          }
      printf("\n");
     }
}

void Adjoint_Matrix(int adjoint[3][3],int cofactor[3][3])
{ 
  int i,j;
for (i=0;i<3;i++)
   { 
    for(j=0;j<3;j++)
        {
          adjoint[i][j]=cofactor[j][i];
          printf("%d\t", adjoint[i][j]);
        }
    printf("\n");
  }
}

void Original_print(int matrix[3][3])
{  int i,j;
for (i=0;i<3;i++)
 { for(j=0;j<3;j++)
    {
      printf("%d\t", matrix[i][j]);
           }
            printf("\n");
              }
          printf("\n");
            } 

int main ()
{
    int i,j;
    
    int matrix[3][3]={{1,7,6},{2,3,4},{6,8,0}};
    
    
    int cofactor[3][3],adjoint[3][3];
    int array[4];
    
    printf("The original Matrix\n");
    Original_print(matrix);
   
    printf("The cofactor matrix :\n");
    Co_factor_Matrix(array,matrix,cofactor);     

    printf("The adjoint matrix:\n");
    Adjoint_Matrix(adjoint,cofactor);
                 
        return 0;
        
        }
               
                      
               
          
          
            
       

