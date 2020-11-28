#include<patientanalysis.h>
int patientanalysis(char a[100]){	
	if(strcmp(a,"fever")==0)
	{
		return 1;
	}
		else if(strcmp(a,"malaria")==0)
	{
		return 2;
	}
		else if(strcmp(a,"covid")==0)
	{
		return 3;
	}
		else if(strcmp(a,"diarrhea")==0)
	{
		return 4;
	}
		else if(strcmp(a,"dengue")==0)
	{
		return 5;
	}
		else if(strcmp(a,"tuberculosis")==0)
	{
		return 6;
	}		
		else if(strcmp(a,"arthritis")==0)
	{
		return 7;
	}
		else if(strcmp(a,"mouth ulcer")==0)
	{
		return 8;
	}
		else if(strcmp(a,"polio")==0)
	{
		return 9;	
    	}
    else{
    	printf("**please choose the disease name from the above list of diseases** \n");
	}
}	
