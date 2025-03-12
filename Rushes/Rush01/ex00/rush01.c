#include <unistd.h>

void swap(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = *a; 
	temp2 = *b;
	*a = temp2;
	*b = temp; 
}

void findfourabove(char *args, int x, int y, int matrix[4][4])
{
	if(*args == 52){
	while (y < 4){
		
		matrix[x][y] = 1 + y;
		y++;

	}
	}
}

int	count_views_right(int matrix[4][4], int x)
{
	int i = 0;
	int tallest = 0 ; 
	int count = 0;
	
	while(i<3) 
	{
		if(matrix[i][x] > tallest)
		{
			tallest = matrix[i][x];
			count++;
		}
		i++;
	}
	return count;
}

int	count_views_left(int matrix[4][4], int x)
{
	int i = 3;
	int tallest = 0 ; 
	int count = 0;
	
	while(i>-1) 
	{
		if(matrix[i][x] > tallest)
		{
			tallest = matrix[i][x];
			count++;
		}
		i--;
	}
	return count;
}

int	count_views_top(int matrix[4][4], int x)
{
	int i = 0;
	int tallest = 0 ; 
	int count = 0;
	
	while(i<3) 
	{
		if(matrix[x][i] > tallest)
		{
			tallest = matrix[x][i];
			count++;
		}
		i++;
	}
	return count;
}

int	count_views_bottom(int matrix[4][4], int x )
{
	int i = 3;
	int tallest = 0 ; 
	int count = 0;
	
	while(i>-1) 
	{
		if(matrix[x][i] > tallest)
		{
			tallest = matrix[x][i];
			count++;
		}
		i--;
	}
	return count;
}

void print(int matrix[4][4])
{
	int j = 0;
	int i = 0;
	j = 0; 
    	while (j < 4)
    	{
       		 i = 0;
        	while (i < 4)
        	{
           	 char printc = matrix[i][j] + '0';
           	 write(1, &printc, 1);
           	 i++;
        	}
        	write(1, "\n", 1);
        	j++;
    }


} 


void transposeMatrix(int **matrix) {
    int i = 0;
    while (i < 4) {
        int j = i + 1;  // Start from the next element in the row to avoid redundant swaps
        while (j < 4) {
            // Swap matrix[i][j] and matrix[j][i]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
            j++;
        }
        i++;
    }
}
int checker(int matrix[4][4], int first_four[70] ){
	int i = 0; 
	int x = 0; 
	while(x < 4)
	{
		first_four[i] = count_views_top(matrix, x);
		x++; 
		i++; 
	} 
	x = 0; 
	while(x < 4)
	{
		first_four[i] = count_views_bottom(matrix, x);
		x++; 
		i++; 
	}
	while(x < 4)
	{
		first_four[i] = count_views_left(matrix, x);
		x++; 
		i++; 
	} 
	x = 0; 
	while(x < 4)
	{
		first_four[i] = count_views_right(matrix, x);
		x++; 
		i++; 
	}
	return 0; 
}


void printTwoPositionCombinations(int matrix[4][4], int store[], char *args) {
    int row1 = 0, col1 = 0, row2, col2;
    int v = 0;
    int rowswap = 0;

    while (row1 < 4) {
        col1 = 0; 
      
        while (col1 < 4) {
            row2 = 0; 
            while (row2 < 4) {
                col2 = 0; 
                while (col2 < 4) {
                    
                    if (row1 == row2 && col1 == col2) {
                        col2++;
                        continue;
                    }
                    while (rowswap < 576){
                    
                    		int i = 0;
    				while (i < 4) {
        			int j = i + 1;  
       				 while (j < 4) {
            				int temp = matrix[i][j];
            			matrix[i][j] = matrix[j][i];
            			matrix[j][i] = temp;
            			j++;
            			swap(&matrix[row1][col1], &matrix[row2][col2]);
            			print(matrix);
            			write(1, "\n", 1);
            			checker(matrix, store); 
            			int z =0; 
				while(z < 16 ){
				if(*args == (store[z]+ 48))
				{
				v++; 
				}
				*args= *args+1;
				z++; 
		
				}
            			
       			 }
        		i++;
    			} 
   			rowswap++; 
                     }
                    
                    col2++; 
                }
                row2++; 
            }
            col1++; 
        }
        row1++; 
    }
 
    	if(v == 16)
	{
	write(1, "correct array", 12); 
	return;
	}else 
	{
	write(1, "NO", 2);
	write(1, "\n", 1);
	}
}


int main(int arg, char **args)
{
	args = args + 1;
	
	int matrix[4][4];
	int i = 0;
	int j = 0;
	int fill = 1;
	int store[70]; 
	
	if (arg != 2)
	{
		write(1, ":(", 3);
		write(1, "\n", 1);
		return 0;
	}
	
	// checker for out of range values
	int temparg = 16;
	while(temparg > 0)
	{
		if(**args == 32)
		{
			*args = *args +1; 
		}
		
		if( **args > 52 || **args < 49)
		{
		write(1, ":(", 3);
		write(1, "\n", 1);
		return 0;
		}
		*args = *args +1; 
		temparg--; 
	}  

	// reset position of args
	*args = *args - 15; 
	
    // Fill the matrix with numbers from 1 to 4 (row by row)
	while (j < 4)
	{
        i = 0;
        fill = 1;
        while (i < 4)
        {
            matrix[i][j] = fill;
            fill++;
            i++;
        }
        write(1, "\n", 1);
        j++;
        }
	 write(1, "\n", 1);   

	// changes our values 
	printTwoPositionCombinations(matrix, store, *args);
	
	
	
    return 0;
}
