#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define MIN_NUM_ASCII 48		//Define Ascii value of 0 from which our numeric range starts
#define MAX_NUM_ASCII 57		//Define Ascii value of 9 to which our numeric range ends 

#define MIN_ALPHA_ASCII 65		//Define ASCII value of A from which our Alpha range starts
#define MAX_ALPHA_ASCII 70		//Define ASCII value of F to which our Alpha range ends


int main(){
    char str[11];		//declare a array which will store characters in the form of string
    bool toss;

    srand(time(NULL));
 	
    int k;
	for(k=0;k<50;k++){			//This loop will itrate the whole process 50 times
	
	int length = rand() % 8 + 3;	//Generates a random length between 3 to 10
	
    printf("The Highest Base of ");
	
	int i;
    for (i=0;i<length;i++)		//loop to store and print random characters in each index of array
    {
	toss = rand() % 2;			//it will choose the number will numerical or alphabet and it is random in each turn
	if(toss==true)
        str[i] = rand() % ((MAX_ALPHA_ASCII - MIN_ALPHA_ASCII) + 1) + MIN_ALPHA_ASCII;		//if toss is true than str store random alphabet from ASCII value 65-70
	
	else   
		str[i] = rand() % ((MAX_NUM_ASCII - MIN_NUM_ASCII) + 1) + MIN_NUM_ASCII;	//if toss is false than str store random numerical from ASCII value 48-57
	
	
    printf("%c", str[i]);			//it will print the the alphanumerical string that is store in str 

	}
	
	int max = str[0];		//initiate and store the first value of Alphanumeric string in variable max
	int j;					
	for(j=0;j<length;j++){		//loop to get the maximum value in the alphanumeric string and store it in high
		if(str[j]>max){
			max = str[j];		//if find a value which is greater than 1st value in array than it will store in max variable and loops runs again
		}
	
	}
		
	//printf("  Max value of array is %c",max);		//we can use it to find maximum value in our Alphanumeric Character in Array
	
	char val = max;					//initiate character variable val and store integer max value in it
	if (val == 'A' || val == 'B' || val == 'C' || val == 'D' || val == 'E' || val == 'F') //if max Character is Alphabet then this code will print
		printf(" is %d\n",(val-55)+1);		//This will print the Highest base value in string
	
	else if(val == '9'){					//if our maximum vlaue in array is 9 then this code will execute 
		printf(" is 10\n");					//print 10 as Highest base value
	}
	else 											//if max Character is Numeric then this code will run
		printf(" is %c\n",val+1);						//This will print the Highest base value in string
}

}



	

