int main(){
    int using = 1;

    while (using)
    {
        printf("A: enter your 10*10 matrix\n");
        printf("B: checking if there a path beetween 2 numbers\n");
        printf("C: calcualting the shortest path beetween 2 numbers\n");
        printf("D: Exit this program\n");

        char choice_of_charcter;
        scanf(" %c", &choice_of_charcter);

        switch (choice_of_charcter)
        {
        case 'A':
            getting_matrix(int matrix[10][10]);
            x=int((matrix[10][10]))
            break;

        case 'B':
            /* Enter the sub-menu */
            check_path(int matrix[10][10]);
            break;
        case 'C':
            /* Enter the sub-menu */
            claculate_short_path(int matrix[10][10]);
            break;
        case 'D':
            using = 0;  /* This will cause the loop to end */
            break;

        default:
            printf("Invalid charcter, please try again.\n");
            break;
        }
    }
   }
   
