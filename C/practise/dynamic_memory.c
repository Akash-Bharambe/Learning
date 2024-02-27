#include <stdio.h>
#include <stdlib.h>
int main()
{
      int num, i = 0;
      char *id;
      while (i < 3)
      {
            printf("\nEnter number of characters in Employee Id: ");
            scanf("%d", &num);
            id = (char *)malloc((num + 1) * sizeof(num));
            printf("Enter Employee Id: ");
            scanf("%s", id);
            printf("Employee id: %s", id);
            free(id);
            i++;
      }

      return 0;
}