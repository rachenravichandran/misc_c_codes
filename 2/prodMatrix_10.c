#include <stdio.h>
#include "arrayFunctions.h"

/*
	File name : prodMatric_10.c
	Day 	  : 2
	Purpose   : Find the product of two matrices
*/

int main()
{
	int a[25][25],b[25][25],c[25][25],i,j,m1,n1,m2,n2,k;
	puts("Enter the order of matrix A:");
	scanf("%d %d",&m1,&n1);
	puts("Enter the order of matrix B:");
	scanf("%d %d",&m2,&n2);
        if(m2!=n1)
     	{
		puts("Product is not possible");
		return 0;
	}
	puts("Enter the elements of matrix A");
	readArray(a,m1,n1);
	puts("Enter the elements of matrix B");
	readArray(b,m2,n2);
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
		     c[i][j]=0;
                     for(k=0;k<n1;k++)
		     {
			c
                        c[i][j] += a[i][k] * b[k][j];
                     }
                }
        }
        puts("Matrix A is :");
        printArray(a,m1,n1);
        puts("Matrix B is :");
        printArray(b,m2,n2);
        puts("The product of two matrices are:");
        printArray(c,m1,n2);
        return 0;
}
-- INSERT --                 
                        c[i][j] += a[i][k] * b[k][j];
                     }
                }
        }
        puts("Matrix A is :");
        printArray(a,m1,n1);
        puts("Matrix B is :");
        printArray(b,m2,n2);
        puts("The product of two matrices are:");
        printArray(c,m1,n2);
        return 0;
}
-- INSERT --                 
                        c[i][j] += a[i][k] * b[k][j];
                     }
                }
        }
        puts("Matrix A is :");
        printArray(a,m1,n1);
        puts("Matrix B is :");
        printArray(b,m2,n2);
        puts("The product of two matrices are:");
        printArray(c,m1,n2);
        return 0;
}
-- INSERT --                 [i][j] += a[i][k] * b[k][j];
                     }
		}
	}
	puts("Matrix A is :");
	printArray(a,m1,n1);
	puts("Matrix B is :");
	printArray(b,m2,n2);
	puts("The product of two matrices are:");
	printArray(c,m1,n2);
	return 0;
	}[i][k] * b[k][j];
                     }
                }
        }
        puts("Matrix A is :");
        printArray(a,m1,n1);
        puts("Matrix B is :");
        printArray(b,m2,n2);
        puts("The product of two matrices are:");
        printArray(c,m1,n2);
        return 0;
}
-- INSERT --                 
                        c[i][j] += a[i][k] * b[k][j];
                     }
                }
        }
        puts("Matrix A is :");
        printArray(a,m1,n1);
        puts("Matrix B is :");
        printArray(b,m2,n2);
        puts("The product of two matrices are:");
        printArray(c,m1,n2);
        return 0;
}
-- INSERT --                 
                        c[i][j] += a[i][k] * b[k][j];
                     }
                }
        }
        puts("Matrix A is :");
        printArray(a,m1,n1);
        puts("Matrix B is :");
        printArray(b,m2,n2);
        puts("The product of two matrices are:");
        printArray(c,m1,n2);
        return 0;
}
-- INSERT --                 

