/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

struct student {
	char name[10];
	int score;
};
void copy_string(char d[], char s[]) {
	int c = 0;

	while (s[c] != '\0') {
		d[c] = s[c];
		c++;
	}
	d[c] = '\0';
}

void * scoresDescendingSort(struct student *students, int len) {
	int i, j, temp, k;
	char temch[10];
	for (i = 0; i < (len - 1); i++)
	{
		for (j = 0; j < (len - i - 1); j++)
		{
			if (students[j].score < students[j + 1].score)
			{
				temp = students[j].score;
				students[j].score = students[j + 1].score;
				students[j + 1].score = temp;

				copy_string(temch, students[j].name);
				copy_string(students[j].name, students[j + 1].name);
				copy_string(students[j + 1].name, temch);


			}
		}
	}
	return NULL;
}