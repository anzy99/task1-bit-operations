#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "Equality.h"
#include <math.h>

int fastPowExec (int number, int pow, int * result){
	int err=0;
	int binarySymbolsInPow;
	int currentPow;
	int currentResult=1;
	binarySymbolsInPow=ceil(log2(pow));
	int i;
	for (i=0;i<binarySymbolsInPow;i++)
	{
		currentPow=((pow >> (binarySymbolsInPow-i-1)) & 1);
		currentResult=currentResult*currentResult;
		if (currentPow==1)
		{
			currentResult=currentResult*number;
		}
				
	}
	* result=currentResult;
	
	return err;
}
