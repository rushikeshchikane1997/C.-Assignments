 #include<stdio.h>
   
   int main ()
   
 {
		 int num, sum=0;

 		printf("enter the any no and find its sum ");
		scanf("%d", &num);

        while(num!=0)
		{	
			
			sum = sum + (num % 10);

			num = num/10;
			  

		}

   
		printf("sum of its digit is %d", sum);
  
  
  
    return 0;
   }




































