# include <stdio.h>
# include <stdlib.h>


int main(void) {
    printf("\nWelcome to my robopro functions project\n\nprogrammed by @ysr075 on GitHub");
    while(1) {
        int choose;
        printf("\n\n1.AND / 2.OR / 3.NOT / 4.EXIT: ");
        scanf("%d", &choose);
        if (choose == 1) {
            int interfacesAND;
            printf("\nHow many interfaces (2-8): ");
            scanf("%d", &interfacesAND); 
            if (interfacesAND == 2) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesAND == 3) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesAND == 4) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesAND == 5) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } 
                int IF5; 
                printf("IF5: ");
                scanf("%d", &IF5);
                if (IF5 < 0 || IF5 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesAND == 6) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } 
                int IF5; 
                printf("IF5: ");
                scanf("%d", &IF5);
                if (IF5 < 0 || IF5 > 1) {
                    exit(0);
                } 
                int IF6;
                printf("IF6: ");
                scanf("%d", &IF6);
                if (IF6 < 0 || IF6 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesAND == 7) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } 
                int IF5; 
                printf("IF5: ");
                scanf("%d", &IF5);
                if (IF5 < 0 || IF5 > 1) {
                    exit(0);
                } 
                int IF6;
                printf("IF6: ");
                scanf("%d", &IF6);
                if (IF6 < 0 || IF6 > 1) {
                    exit(0);
                } 
                int IF7;
                printf("IF7: ");
                scanf("%d", &IF7);
                if (IF7 < 0 || IF7 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesAND == 8) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } 
                int IF5; 
                printf("IF5: ");
                scanf("%d", &IF5);
                if (IF5 < 0 || IF5 > 1) {
                    exit(0);
                } 
                int IF6;
                printf("IF6: ");
                scanf("%d", &IF6);
                if (IF6 < 0 || IF6 > 1) {
                    exit(0);
                } 
                int IF7;
                printf("IF7: ");
                scanf("%d", &IF7);
                if (IF7 < 0 || IF7 > 1) {
                    exit(0);
                } 
                int IF8;
                printf("IF8: ");
                scanf("%d", &IF8);
                if (IF8 < 0 || IF8 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesAND < 2 || interfacesAND > 8) {
                exit(0);
            }
        } else if (choose == 2) {
            int interfacesOR;
            printf("\nHow many interfaces (2-8): ");
            scanf("%d", &interfacesOR); 
            if (interfacesOR == 2) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesOR == 3) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesOR == 4) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesOR == 5) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } 
                int IF5;
                printf("IF5: ");
                scanf("%d", &IF5);
                if (IF5 < 0 || IF5 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesOR == 6) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } 
                int IF5;
                printf("IF5: ");
                scanf("%d", &IF5);
                if (IF5 < 0 || IF5 > 1) {
                    exit(0);
                } 
                int IF6;
                printf("IF6: ");
                scanf("%d", &IF6);
                if (IF6 < 0 || IF6 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesOR == 7) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } 
                int IF5;
                printf("IF5: ");
                scanf("%d", &IF5);
                if (IF5 < 0 || IF5 > 1) {
                    exit(0);
                } 
                int IF6;
                printf("IF6: ");
                scanf("%d", &IF6);
                if (IF6 < 0 || IF6 > 1) {
                    exit(0);
                } 
                int IF7;
                printf("IF7: ");
                scanf("%d", &IF7);
                if (IF7 < 0 || IF7 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else if (interfacesOR == 8) {
                int IF1;
                printf("\nIF1: ");
                scanf("%d", &IF1);
                if (IF1 < 0 || IF1 > 1) {
                    exit(0);
                }
                int IF2;
                printf("IF2: ");
                scanf("%d", &IF2);
                if (IF2 < 0 || IF2 > 1) {
                    exit(0);
                }
                int IF3;
                printf("IF3: ");
                scanf("%d", &IF3);
                if (IF3 < 0 || IF3 > 1) {
                    exit(0);
                } 
                int IF4;
                printf("IF4: ");
                scanf("%d", &IF4);
                if (IF4 < 0 || IF4 > 1) {
                    exit(0);
                } 
                int IF5;
                printf("IF5: ");
                scanf("%d", &IF5);
                if (IF5 < 0 || IF5 > 1) {
                    exit(0);
                } 
                int IF6;
                printf("IF6: ");
                scanf("%d", &IF6);
                if (IF6 < 0 || IF6 > 1) {
                    exit(0);
                } 
                int IF7;
                printf("IF7: ");
                scanf("%d", &IF7);
                if (IF7 < 0 || IF7 > 1) {
                    exit(0);
                } 
                int IF8;
                printf("IF8: ");
                scanf("%d", &IF8);
                if (IF8 < 0 || IF8 > 1) {
                    exit(0);
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 1) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 1 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 0 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 1 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 1 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 1 && IF4 == 1 && IF5 == 1 && IF6 == 0 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 0 && IF2 == 0 && IF3 == 0 && IF4 == 0 && IF5 == 0 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else if (IF1 == 1 && IF2 == 0 && IF3 == 0 && IF4 == 1 && IF5 == 1 && IF6 == 1 && IF7 == 0 && IF8 == 0) {
                    printf("\nlamp aan.");
                } else {
                    printf("\nlamp uit.");
                }
            } else {
                exit(0);
            }
        } else if (choose == 3) {
            int IF1;
            printf("\nIF1: ");
            scanf("%d", &IF1);
            if (IF1 == 1) {
                printf("\nlamp uit.");
            } else if (IF1 == 0) {
                printf("\nlamp aan.");
            } else {
                exit(0);
            }
        } else if (choose == 4) {
            exit(0);
        } else {
            exit(0);
        }
    }
    return 0;
}
