#include <stdio.h>
#include <stdlib.h>

#define PASSING_GRADE 50

int main() {
  int classes = 3;
  int students = 10;

  for (int i = 0; i < classes; i++) {
    int passed = 0, failed = 0, highest = 0, lowest = 100, total = 0;

    for (int j = 0; j < students; j++) {
      int grade = rand() % 100 + 1;
      total += grade;

      if (grade >= PASSING_GRADE) {
        passed++;
      } else {
        failed++;
      }

      if (grade > highest) {
        highest = grade;
      }

      if (grade < lowest) {
        lowest = grade;
      }
    }

    float average = (float)total / students;

    printf("class %d\n", i + 1);
    printf("the number of  pass students: %d\n", passed);
    printf(" number of failed students: %d\n", failed);
    printf(":the highest %d\n", highest);
    printf("the lowest: %d\n", lowest);
    printf("the average .2%f\n\n", average);
  }

  return 0;
}