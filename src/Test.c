/**
 * @file test.c
 * @author Nicholas Florian
 * @date January 2019
 * @brief tests for CalendarParser
 */

#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "CalendarParser.h"
#include "Plus.h"
#include "ScaffoldInterface.h"

//headers
void property_test1(scaffoldInterface* si);
void property_test1_unit1(scaffoldInterface* si, scaffoldTest* st);
void property_test1_unit2(scaffoldInterface* si, scaffoldTest* st);
void property_test1_unit3(scaffoldInterface* si, scaffoldTest* st);
void property_test1_unit4(scaffoldInterface* si, scaffoldTest* st);
void property_test1_unit5(scaffoldInterface* si, scaffoldTest* st);
void property_test1_unit6(scaffoldInterface* si, scaffoldTest* st);
void property_test1_unit7(scaffoldInterface* si, scaffoldTest* st);

/********************************************************************/

void date_test1(scaffoldInterface* si);
void date_test1_unit1(scaffoldInterface* si, scaffoldTest* st);
void date_test1_unit2(scaffoldInterface* si, scaffoldTest* st);
void date_test1_unit3(scaffoldInterface* si, scaffoldTest* st);
void date_test1_unit4(scaffoldInterface* si, scaffoldTest* st);
void date_test1_unit5(scaffoldInterface* si, scaffoldTest* st);
void date_test1_unit6(scaffoldInterface* si, scaffoldTest* st);

/********************************************************************/

void system_test1(scaffoldInterface* si);
void system_test1_unit1(scaffoldInterface* si, scaffoldTest* st);
void system_test1_unit2(scaffoldInterface* si, scaffoldTest* st);

/********************************************************************/

int main(int argc, char **argv){

	// variables
	scaffoldInterface* si;
	int checksi;


	// create scaffold interface
	checksi = initializeScaffoldInterface(argv[1], &si);


	// run main testing interfaces
	_printStartOfInterface(si);

	property_test1(si);
	date_test1(si);
	system_test1(si);
	//


	// compelete
	_printEndOfInterface(si);
	deleteScaffoldInterface(si);

	return 0;
}

/********************************************************************/

void property_test1(scaffoldInterface* si){

	// variables
	scaffoldTest* st;


	// run testing
	initializeScaffoldTest(si, &st);
	_printStartOfTest(st);

	property_test1_unit1(si, st);
	property_test1_unit2(si, st);
	property_test1_unit3(si, st);
	property_test1_unit4(si, st);
	property_test1_unit5(si, st);
	property_test1_unit6(si, st);
	property_test1_unit7(si, st);


	// complete
	_printEndOfTest(si, st);
	deleteScaffoldTest(st);

}

void property_test1_unit1(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* us;

	initializeScaffoldUnit(si, &us);
	_printStartOfUnit(us);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	Property* property = NULL;


	property = malloc(sizeof(Property));

	deleteProperty(property);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,us,1);
	deleteScaffoldUnit(us);
}

void property_test1_unit2(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* su;


	initializeScaffoldUnit(si, &su);
	_printStartOfUnit(su);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	Property* property = NULL;

	property = malloc(sizeof(Property) + (sizeof(char) * 12));

	strcpy(property->propName, "NAME");
	strcpy(property->propDescr,"DESCRIPTION");


	deleteProperty(property);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,su,1);
	deleteScaffoldUnit(su);
}

void property_test1_unit3(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* su;


	initializeScaffoldUnit(si, &su);
	_printStartOfUnit(su);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	Property* propertyA = NULL;
	Property* propertyB = NULL;
	Property* propertyC = NULL;

	int val;


	propertyC = malloc(sizeof(Property) + (sizeof(char) * 12));

	strcpy(propertyC->propName, "NAME");
	strcpy(propertyC->propDescr,"DESCRIPTION");


	// results
	val = compareProperties(propertyA, propertyC);
	printf("\t\tFirst Null Value:  \t%d\n",val);

	val = compareProperties(propertyA, propertyB);
	printf("\t\tTwo Null Values:   \t%d\n",val);

	val = compareProperties(propertyC, propertyB);
	printf("\t\tSecond Null Value: \t%d\n",val);







	deleteProperty(propertyA);
	deleteProperty(propertyB);
	deleteProperty(propertyC);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,su,1);
	deleteScaffoldUnit(su);
}

void property_test1_unit4(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* su;


	initializeScaffoldUnit(si, &su);
	_printStartOfUnit(su);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	Property* propertyA = NULL;
	Property* propertyB = NULL;
	Property* propertyC = NULL;

	int val;


	propertyA = malloc(sizeof(Property) + (sizeof(char) * 6));

	strcpy(propertyA->propName, "ALPHA");
	strcpy(propertyA->propDescr,"ALPHA");


	propertyB = malloc(sizeof(Property) + (sizeof(char) * 5));

	strcpy(propertyB->propName, "BETA");
	strcpy(propertyB->propDescr,"BETA");


	propertyC = malloc(sizeof(Property) + (sizeof(char) * 8));

	strcpy(propertyC->propName, "CHARLIE");
	strcpy(propertyC->propDescr, "CHARLIE");



	// results
	val = compareProperties(propertyC, propertyB);
	printf("\t\tC and B: \t%d\n", val);

	val = compareProperties(propertyA, propertyA);
	printf("\t\tA and A: \t%d\n", val);

	val = compareProperties(propertyA, propertyB);
	printf("\t\tA and B: \t%d\n", val);



	deleteProperty(propertyA);
	deleteProperty(propertyB);
	deleteProperty(propertyC);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,su,1);
	deleteScaffoldUnit(su);
}

void property_test1_unit5(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* su;


	initializeScaffoldUnit(si, &su);
	_printStartOfUnit(su);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	Property* 	property = NULL;
	char*	 	string;

	string = printProperty(property);

	printf("\t\tString: \"%s\"\n", string);
	free(string);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,su,1);
	deleteScaffoldUnit(su);
}

void property_test1_unit6(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* su;


	initializeScaffoldUnit(si, &su);
	_printStartOfUnit(su);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	Property* 	property = NULL;
	char*	 	string;

	property = malloc(sizeof(Property) + (sizeof(char) * 12));

	strcpy(property->propName, "NAME");
	strcpy(property->propDescr,"DISCRIPTION");

	string = printProperty(property);

	printf("\t\tString: \"%s\"\n", string);

	deleteProperty(property);
	free(string);


	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,su,1);
	deleteScaffoldUnit(su);
}

void property_test1_unit7(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* su;


	initializeScaffoldUnit(si, &su);
	_printStartOfUnit(su);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	Property* 	property = NULL;
	char*	 	string;

	property = malloc(sizeof(Property));
	string = printProperty(property);

	printf("\t\tString: \"%s\"\n", string);
	free(string);

	deleteProperty(property);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,su,0);
	deleteScaffoldUnit(su);
}

/********************************************************************/

void date_test1(scaffoldInterface* si){

	// variables
	scaffoldTest* st;


	// run testing
	initializeScaffoldTest(si, &st);
	_printStartOfTest(st);

	date_test1_unit1(si, st);
	date_test1_unit2(si, st);
	date_test1_unit3(si, st);
	date_test1_unit4(si, st);
	date_test1_unit5(si, st);
	date_test1_unit6(si, st);


	// complete
	_printEndOfTest(si, st);
	deleteScaffoldTest(st);

}

void date_test1_unit1(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* us;

	initializeScaffoldUnit(si, &us);
	_printStartOfUnit(us);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	DateTime* dateTime = NULL;


	dateTime = malloc(sizeof(DateTime));

	deleteProperty(dateTime);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,us,1);
	deleteScaffoldUnit(us);
}

void date_test1_unit2(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* us;

	initializeScaffoldUnit(si, &us);
	_printStartOfUnit(us);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	DateTime* dateTime = NULL;

	dateTime = malloc(sizeof(DateTime));
	strcpy(dateTime->date, "19980905");

	deleteProperty(dateTime);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,us,1);
	deleteScaffoldUnit(us);
}

void date_test1_unit3(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* us;

	initializeScaffoldUnit(si, &us);
	_printStartOfUnit(us);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/



	DateTime* dateTimeA = NULL;
	DateTime* dateTimeB = NULL;
	DateTime* dateTimeC = NULL;

	int val;


	dateTimeC = malloc(sizeof(DateTime) + (sizeof(char) * 12));

	strcpy(dateTimeC->date, "19980509");
	strcpy(dateTimeC->time,"172345");
	dateTimeC->UTC = 1;


	// results
	val = compareProperties(dateTimeA, dateTimeC);
	printf("\t\tFirst Null Value:  \t%d\n",val);

	val = compareProperties(dateTimeA, dateTimeB);
	printf("\t\tTwo Null Values:   \t%d\n",val);

	val = compareProperties(dateTimeC, dateTimeB);
	printf("\t\tSecond Null Value: \t%d\n",val);

	free(dateTimeC);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,us,1);
	deleteScaffoldUnit(us);
}

void date_test1_unit4(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* us;

	initializeScaffoldUnit(si, &us);
	_printStartOfUnit(us);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/



	DateTime* dateTimeA = NULL;
	DateTime* dateTimeB = NULL;
	DateTime* dateTimeC = NULL;

	int val;


	dateTimeA = malloc(sizeof(DateTime));

	strcpy(dateTimeA->date, "19900101");
	strcpy(dateTimeA->time,"12345");


	dateTimeB = malloc(sizeof(DateTime));

	strcpy(dateTimeB->date, "20000101");
	strcpy(dateTimeB->time,"12345");


	dateTimeC = malloc(sizeof(DateTime));

	strcpy(dateTimeC->date, "20100101");
	strcpy(dateTimeC->time, "12345");



	// results
	val = compareProperties(dateTimeC, dateTimeB);
	printf("\t\t2010 and 2000: \t%d\n", val);

	val = compareProperties(dateTimeA, dateTimeA);
	printf("\t\t1990 and 1990: \t%d\n", val);

	val = compareProperties(dateTimeA, dateTimeB);
	printf("\t\t1990 and 2000: \t%d\n", val);



	deleteDate(dateTimeA);
	deleteDate(dateTimeB);
	deleteDate(dateTimeC);


	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,us,1);
	deleteScaffoldUnit(us);
}

void date_test1_unit5(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* su;


	initializeScaffoldUnit(si, &su);
	_printStartOfUnit(su);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	DateTime* 	dateTime = NULL;
	char*	 	string;

	string = printProperty(dateTime);

	printf("\t\tString: \"%s\"\n", string);
	free(string);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,su,1);
	deleteScaffoldUnit(su);
}

void date_test1_unit6(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* su;


	initializeScaffoldUnit(si, &su);
	_printStartOfUnit(su);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	DateTime* 	dateTimeA = NULL;
	DateTime* 	dateTimeB = NULL;

	char*	 	stringA;
	char*		stringB;


	dateTimeA = malloc(sizeof(DateTime));
	strcpy(dateTimeA->date, "19900101");
	strcpy(dateTimeA->time, "12345");
	dateTimeA->UTC = 1;

	stringA = printDate(dateTimeA);

	printf("\t\tString: \"%s\"\n", stringA);


	dateTimeB = malloc(sizeof(DateTime));
	strcpy(dateTimeB->date, "19900101");
	strcpy(dateTimeB->time,"12345");
	dateTimeB->UTC = 0;

	stringB = printDate(dateTimeB);

	printf("\t\tString: \"%s\"\n", stringB);

	deleteDate(dateTimeA);
	deleteDate(dateTimeB);

	free(stringA);
	free(stringB);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,su,1);
	deleteScaffoldUnit(su);
}

/********************************************************************/

void system_test1(scaffoldInterface* si){

	// variables
	scaffoldTest* st;


	// run testing
	initializeScaffoldTest(si, &st);
	_printStartOfTest(st);

	system_test1_unit1(si, st);
	system_test1_unit2(si, st);

	// complete
	_printEndOfTest(si, st);
	deleteScaffoldTest(st);

}

void system_test1_unit1(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* us;

	initializeScaffoldUnit(si, &us);
	_printStartOfUnit(us);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	Event* event;

	Alarm* alarm;

	Property* propertyA;
	Property* propertyB;
	Property* propertyC;

	DateTime dateTimeStart;
	DateTime dateTime;



	strcpy(dateTime.date,"19980509");
	strcpy(dateTime.time, "123456");
	dateTime.UTC = 0;

	strcpy(dateTimeStart.date , "20190118");
	strcpy(dateTimeStart.time, "123456");
	dateTimeStart.UTC = 1;



	propertyA = malloc(sizeof(Property) + (sizeof(char) * 100));
	strcpy(propertyA->propName, "ALPHA");
	strcpy(propertyA->propDescr,"All ardvarks allow almonds.");

	propertyB = malloc(sizeof(Property) + (sizeof(char) * 100));
	strcpy(propertyB->propName, "BETA");
	strcpy(propertyB->propDescr,"Bitches ain't shit.");

	propertyC = malloc(sizeof(Property) + (sizeof(char) * 100));
	strcpy(propertyC->propName, "CHARLIE");
	strcpy(propertyC->propDescr, "Cant care.");



	alarm = malloc(sizeof(Alarm));
	strcpy(alarm->action, "RINGERYDINGERY");
	alarm->trigger = malloc(sizeof(char) * 100);
	strcpy(alarm->trigger, "Only on a blood moon");
	alarm->properties = initializeList(
			printProperty,
			deleteProperty,
			compareProperties);
	insertFront(alarm->properties, propertyA);



	event = malloc(sizeof(Event));
	strcpy(event->UID, "uid1@example.com");
	event->creationDateTime = dateTimeStart;
	event->startDateTime = dateTime;
	event->properties = initializeList(
			printProperty,
			deleteProperty,
			compareProperties);
	insertFront(event->properties, propertyB);
	insertFront(event->properties, propertyC);
	event->alarms= initializeList(
			printAlarm,
			deleteAlarm,
			compareAlarms);
	insertFront(event->alarms, alarm);


	char* string = printEvent(event);
	printf("%s",string);

	free(string);
	deleteEvent(event);

	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,us,1);
	deleteScaffoldUnit(us);
}

void system_test1_unit2(scaffoldInterface* si, scaffoldTest* st){

	// variables
	scaffoldUnit* us;

	initializeScaffoldUnit(si, &us);
	_printStartOfUnit(us);

	/*--------------------------------------------------------------------*
	 * UNIT TESTING GOES HERE											  *
	 *--------------------------------------------------------------------*/

	/*
	Event* event = NULL;
	deleteEvent(event);
	event = malloc(sizeof(event));
	deleteEvent(event);*/

	char* fuckame;


	Calendar *calendar;
	ICalErrorCode error = 0;

	error = createCalendar("assests/testCalSimpleNoUTC.ics", &calendar);
	printf("ICAL ERROR %d", error);


	if(error != OK)
		printf("FUCK");
	else {

		fuckame = printCalendar(calendar);

		printf("\n\n\%s\n", fuckame);
		free(fuckame);
		deleteCalendar(calendar);
	}




	/*--------------------------------------------------------------------*/

	// complete
	_printEndOfUnit(st,us,1);
	deleteScaffoldUnit(us);
}

