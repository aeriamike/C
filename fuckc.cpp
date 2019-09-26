#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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



int main(){
	
	int op = 0;	
							// Current operation to be performed
	Car carBase;			// carBase an empty node
	
	//carBase.next = NULL;	// initialize the list to empty
	
	
	printf("========================\n");
	printf("====Used car database===\n");
	printf("========================\n");
	
	while (op != 4){
		
		printf("Enter an operation\n");
		printf("1 - Car acquired. Add a new entry for it.\n");
		printf("2 - Car sold. Remove its entry. \n");
		printf("3 - Query. Look up a Car's information.\n");
		printf("4 - Quit.\n");
		
		scanf("%d", &op);
		
		if (op == 1)
		 	AddEntry(&carBase);
	    else if (op == 2)
		 	DeleteEntry(&carBase);
	    else if (op == 3) 
		    Search(&carBase);
		else if (op == 4) 
		     printf("Goodbye.\n\n");
		else 
			 printf("Invalid option. Try again.\n\n");
	}
	
	return 0;
}



Car *scanlist (Car *headPointer, int searchID){
	
	Car *previous;
	Car *current;
	
	
	//point to start of list
	previous = headPointer;
	current = headPointer -> next;
	
	/* Traverse list -- scan until we find a node with a */ 
    /* vehiclelD greater than or equal to searchID */ 
    
    while ((current != NULL) && current -> vehicleID < searchID) {
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
	
	scanf("%d %s %s %d %d %lf", 
			&newNode->vehicleID, newNode->manufacturer, newNode->model,
			 &newNode->year, &newNode->milleage, &newNode->cost);
			 
	prevNode = ScanList(headPointer, newNode -> vehicleID);
	nextNode = prevNode ->next;
	
	if((nextNode == NULL) || (nextNode -> vehicleID != newNode -> vehicleID)){
		
		prevNode -> next = newNode;
		newNode -> next = nextNode;
		printf("Entry added. \n\n");
	}else{
		
		Printf("That car already exists in the database!\n");
		printf("Entry not added.\n\n");
		free(newNode);
	}
}

void DeleteEntry(Car *headPointer){
	
	int vehicleID;
	Car *delNode;
	Car *prevNode;
	
	printf("enter the vehicle ID of the car to delete: \n");
	scanf("%d", &vehicleID);
	
	prevNode = ScanList (headPointer, vehicleID);
	delNode  = prevNode -> next;
	
	// Either the car does not exist or
	// delNode points to the car to be deleted.
	
	if(delNode != NULL && delNode->vehicleID == vehicleID) {
		prevNode -> next = delNode -> next;
		printf ("Vehicle with ID %d deleted. \n\n", vehicleID);
		free(delNode);
	}else{
		printf("The vehicle was not found in the database\n");
	}
	
}

void Search (Car *headPointer){
	int vehicleID;
	Car *searchNode;
	Car *prevNode;
	
	printf("Enter the vehicle ID number of the car to search for: \n");
	scanf ("%d, &vehicleID");
	
	prevNode = ScanList(headPointer, vehicleID);
	searchNode = prevNode ->next;
	
	if (searchNode != NULL && searchNode -> vehicleID == vehicleID){
		printf("vehicle ID: %d\n", searchNode ->vehicleID);
		printf("make	  : %s\n", searchNode ->manufacturer);
		printf("model	  : %s\n", searchNode ->model);
		printf("year 	  : %d\n", searchNode -> year);
		printf("mileage   : %d\n", searchNode -> milleage);
		
		printf("cost	   : $%10.2f\n\n", searchNode->cost);
		
		
	}
	else{
		printf("The vehicle ID %d was not found in the database.\n\n", 
					vehicleID);
	}
	
}
	
	






