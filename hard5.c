#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct carType Car;

struct carType {
	int vehicleID;			//Unique identifier for a car
	char manufacturer[20];	// Manufacturer
	char model[20];		    // Model Name
	int year;			    // Year of Manufacture
	int milleage;		    // in miles
	double cost;		    // in dollars $ XX. XX
	
	Car *next;				// points to car_node
};

Car *ScanList (Car *headPointer, char searchNAME){
	
	Car *previous;
	Car *current;
	
	
	//point to start of list
	previous = headPointer;
	current = headPointer -> next;
	
	/* Traverse list -- scan until we find a node with a */ 
    /* vehiclelD greater than or equal to searchID */ 
    
    while ((current != NULL) && strcmp( current -> model, searchNAME )==1) {
    	previous = current;
    	current  = current -> next;
	}
	
	/* The variable previous points to node prior to the */
    /* node being searched for. Either current->vehicleID */
	/* equals searchID or the node does not exist. */
	
	return previous;
}

void AddEntry (Car *headPointer){
	
	Car *newNode; //Points to the new car info
	Car *nextNode; //Points to car to follow new one
	Car *prevNode; //Points to car before this one
	
	/*Dynamically allocate memory fot this new entry. */
	
	newNode = (Car *)malloc(sizeof(Car));
	
	if (newNode == NULL) {
		
		printf("Error: could not allocate a new node");
		exit (1);
	}
	
	printf("Enter the following info about the car. \n");
	printf("Separate each field by white space: \n");
	printf("vechnicle_id make model year mileage cost\n");
	
	scanf("%d", 
			&newNode->vehicleID);
	scanf("%s", 
			 newNode->manufacturer);
	gets(newNode->manufacturer);
	scanf("%s", 
			newNode->model);
	gets(newNode->model);		
								 
	prevNode = ScanList (headPointer, newNode->model);
	nextNode = prevNode ->next;
	
	if((nextNode == NULL) || strcmp(nextNode -> model, newNode -> model)==1){
		
		prevNode -> next = newNode;
		newNode -> next = nextNode;
		printf("Entry added. \n\n");
	}else{
		
		printf("That car already exists in the database!\n");
		printf("Entry not added.\n\n");
		free(newNode);
	}
}



void Search (Car *headPointer){
	//int vehicleID;
	
	char truth[20];
	
	Car *searchNode;
	Car *prevNode;
	
	printf("Enter the vehicle ID number of the car to search for: \n");
	//scanf("%d", &vehicleID);
	scanf("%s",truth);
	gets(truth);
	
    prevNode = ScanList(headPointer, truth);
	searchNode = prevNode ->next;
	
	if (searchNode != NULL && strcmp (searchNode -> model, truth)==1){
		printf("vehicle ID: %d\n", searchNode ->vehicleID);
		printf("make	  : %s\n", searchNode ->manufacturer);
		printf("model	  : %s\n", searchNode ->model);
		
		
	}
	else{
		printf("0");
	}
	
}
	


int main(){
	
	int op = 0;	
							// Current operation to be performed
	Car carBase;			// carBase an empty node
	
	carBase.next = NULL;	// initialize the list to empty
	
	
	printf("========================\n");
	printf("====Used car database===\n");
	printf("========================\n");
	
	while (op != 4){
		
		printf("Enter an operation\n");
		printf("1 - Car acquired. Add a new entry for it.\n");
		printf("3 - Query. Look up a Car's information.\n");
		printf("4 - Quit.\n");
		
		scanf("%d", &op);
		
		if (op == 1)
		 	AddEntry(&carBase);
	    else if (op == 3) 
		    Search(&carBase);
		else if (op == 4) 
		     printf("Goodbye.\n\n");
		else 
			 printf("Invalid option. Try again.\n\n");
	}
	
	return 0;
}




