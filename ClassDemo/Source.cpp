#include <iostream>
#include <iomanip>
#include <string>
#define pause system("pause")
#define cls	system("cls")
using namespace std;

string* names[200];
int NameCount = 0;
void DisplayBanner();

int main()
{
	char More = 'y';

	//do loop
	do
	{
		DisplayBanner();
		//create a new string and assign to pointer array
		string* newname = new string;
		//prompt for string value
		cout << "Enter an name: ";
		cin >> *newname;
		//Store the value in the array using *
		names[NameCount] = newname;
		//keep up with the total number of strings created
		NameCount++;
		//--->Missing Remark--- Prompt for more names?
		cout << "More names? 'y' or 'n'"; cin >> More;
		cls;
	}
	//end loop while no more strings entered
	while (More != 'n');
	
	//Display the original listing of strings using *
	cout << "-----------------------------------" << endl;
	cout << "Names Unsorted: " << endl;
	cout << "-----------------------------------" << endl;
	for (int i = 0; i < NameCount; i++)
	{
		cout << *names[i] << endl;
	}
	cout << "-----------------------------------" << endl;
	cout << endl;
	pause;
	//Bubble Sort strings into ascending order A-Z
	// Sorting strings Ascending using bubble sort 
	for (int j = 0; j < NameCount - 1; j++)
	{
		for (int i = j + 1; i < NameCount; i++)
		{
			if (*names[j]> *names[i]) 
			{
				string * temp = names[i];
				temp= names[j];
				names[j]=names[i];
				names[i]= temp;
			}
		}
	}
	cout << endl;
	
	//Display new sorted list
	cout << "-----------------------------------" << endl;
	cout << "Names Sorted A to Z: " << endl;
	cout << "-----------------------------------" << endl;
	for (int i = 0; i < NameCount; i++)
	{
		cout << *names[i] << endl;
	}
	cout << "-----------------------------------" << endl;
	cout << endl;
	pause;

	//Bubble Sort strings into ascending order Z-A
	// Sorting strings Descending using bubble sort 
	for (int j = 0; j < NameCount - 1; j++)
	{
		for (int i = j + 1; i < NameCount; i++)
		{
			if (*names[j] < *names[i])
			{
				string * temp = names[i];
				temp = names[j];
				names[j] = names[i];
				names[i] = temp;
			}
		}
	}
	//Display new Descending sorted list
	cout << "-----------------------------------" << endl;
	cout << "Names Sorted Z to A: " << endl;
	cout << "-----------------------------------" << endl;
	for (int i = 0; i < NameCount; i++)
	{
		cout << *names[i] << endl;
	}
	cout << "-----------------------------------" << endl;
	cout << endl;
	pause;
	//Delete all string variables created with new
	for (int i = 0; i < NameCount; i++)
	{
		delete names[i];
	}
	cout << "-----------------------------------" << endl;
	cout << "Memory DeAllocated" << endl;
	cout << "-----------------------------------" << endl;
	pause;
}

void DisplayBanner()
{
	cout << "\t\tName Sorting [Metallica Version]\n" << endl;
	cout << "o==[]::::::::::::::::>" << endl;
	cout << "\n   (\\ /)\n   (•.•)\n  (\") (\")" << endl;
	cout << "\nCurrent Name List: " << endl;
	//Display new Descending sorted list
	if (NameCount > 0)
	{
		cout << "-----------------------------------"<< endl;
		for (int i = 0; i < NameCount; i++)
		{
			cout << "\t\t" << *names[i] << endl;
		}
		cout << "-----------------------------------" << endl;
	}
}