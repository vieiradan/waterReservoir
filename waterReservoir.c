#include <stdio.h>
#include <math.h>

int main() {
  
  //cube volume formula V=a^3
  //reservoir has a cubic shape, therefore all sides have the same size
  float edge; // shown in cm
  float dailyConsumption; // in liters/day
  float volume;
  int daysLast, people;
  
  printf("Water Reservoir Program: ");
  printf("\nEnter the size of one side of the reservoir in cm: ");
  scanf("%f", &edge);

  printf("\nEnter the water average consumption in L/day per person: ");
  scanf("%f", &dailyConsumption);
  printf("Enter the amount of people living in the place: ");
  scanf("%i", &people);

  dailyConsumption=dailyConsumption*people; //daily consumpt. * people
  volume=pow(edge, 3); // volume in cm³
  volume=volume/1000; // volume in L
  printf("\nThe reservoir holds: %.2f L of water", volume);

  daysLast=volume/dailyConsumption;
  printf("\nThe water lasts %i days", daysLast);

  if(daysLast<2) {printf("\nHigh consumption of water");
  }
  else if(daysLast>=2 && daysLast<=7) {printf("\nModerate consumption of water");
  }
  else if(daysLast>7) {printf("\nReduced consumption of water");
  }
}
