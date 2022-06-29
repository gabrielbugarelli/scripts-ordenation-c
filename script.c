#include <stdio.h>
#include <stdlib.h>

void main()
{
  int disorderedVector[] = {1, 9, 3, 6, 2, 3, 5, 7, 3, 5};
  int vectorSize = 10;

  void bubbleSortOrdination(int vector[], int vectorNumber)
  {
    int assistant = 0;

    for (int i = 0; i < vectorNumber; i++) {
      for (int j = 0; j < vectorNumber; j++) {

        if(vector[j] > vector[j+1]) {
          assistant = vector[j];
          vector[j] = vector[j+1];
          vector[j+1] = assistant;
        }
      }

      vectorNumber--;
    }
  }

  void selectionSortOrdination(int vector[], int vectorNumber)
  {
    int smaller, assistant;

    for (int i = 0; i < vectorNumber - 1; i++)
    {
      smaller = i;

      for (int j = i + 1; j < vectorNumber; j++)
      {
        if (vector[smaller] > vector[j])
        {
          smaller = j;
        }
      }

      if (i != smaller)
      {
        assistant = vector[i];
        vector[i] = vector[smaller];
        vector[smaller] = assistant;
      }
    }
  }

  void insertSortOrdination(int vector[], int vectorNumber)
  {
  }

  bubbleSortOrdination(disorderedVector, vectorSize);

  for (int i = 0; i < vectorSize; i++) {
    printf("%d | ", disorderedVector[i]);
  }

  system("pause");
}

