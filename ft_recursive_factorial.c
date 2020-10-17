#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb) 		//function definition
{
	if(nb < 0)				//condition if number is less than 0
		return(0);
	if(nb ==0 || nb == 1)			//condition if number is either 0 or 1 , return 1
		return(1);
	return nb * ft_recursive_factorial(nb - 1);	//condition if number is other than 0 or 1 - 
							// suppose if number is 3 - then it returns 3*ft_recursive_factorial(3 - 1)
												 // 3*ft_recursive_factorial(2)
												//  3*2*ft_recursive_factorial(1)
												//  3*2*1 = 6
}
 
