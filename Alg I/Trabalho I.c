    // Trabalho 1  - Algoritmos
    // Alunos:

    // Roberto Prado Ribeiro Silva - RA: 221022597
    // Vinicius Henrique de Oliveira Franzote - RA: 221024174

    #include <stdio.h>
    #include <stdlib.h>

    #define MAX 30

    int reprocessmentRoutine() {
        int control;

        do {
            printf("\n\n Gostaria de continuar?");
            printf("\n (0) - Nao");
            printf("\n (1) - Sim");
            printf("\n\n>> ");

            scanf("%d", &control);
        } while(control < 0 || control > 1);

        return control;
    }

    int showMenu() {
        int selectedOption;

        do {
            printf("\n\n Selecione uma opcao do Menu para continuar: ");
            printf("\n 1 - Trocar os elementos da Linha X pela Linha Y");
            printf("\n 2 - Trocar os elementos da Coluna X pela Coluna Y");
            printf("\n 3 - Trocar os elementos da Diagonal Principal com a Diagonal Secundaria");
            printf("\n 4 - Verificar se a Matriz e Simetrica");
            printf("\n 5 - Verificar se a Matriz e um Quadrado Magico");
            printf("\n 6 - Verificar se a Matriz e um Quadrado Latino");
            printf("\n 7 - Verificar se a Matriz e uma Matriz de Permutacao");
            printf("\n 8 - Sair do programa");
            printf("\n\n >> ");

            scanf("%d", &selectedOption);
        } while (selectedOption < 1 || selectedOption > 8);

        return selectedOption;
    }

    void getOrder(int *n, int *m) {
        do {
            printf("\nDigite o numero de linhas da Matriz principal (MAX = %d): ", MAX);
            scanf("%d", &*n);
        } while(*n < 1 || *n > MAX);

        do {
            printf("\nDigite o numero de colunas da Matriz principal (MAX = %d): ", MAX);
            scanf("%d", &*m);
        } while(*m < 1 || *m > MAX);
    }

    void read (int n, int m, int mat[][MAX]) {
        int lin, col;

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                printf("\nmat[%d][%d] = ", lin + 1, col + 1);
                
                scanf("%d", &mat[lin][col]);
            }   
        }
    }

    void show (int n, int m, int mat[][MAX]) {
        int lin, col;

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                printf("\t mat[%d][%d] = %d", lin + 1, col + 1, mat[lin][col]);
            }   

            printf("\n");
        }
    }

    void switchLines (int n, int m, int mat[][MAX]) {
        int lin, col, itemsLineX[n], itemsLineY[n], x, y;

        printf("\nDigite a linha X (1 - %d): ",n);
        scanf("%d", &x);

        printf("\nDigite a linha Y (1 - %d): ",n);
        scanf("%d", &y);

        for(lin = 0; lin < n; lin++) {
            if((lin + 1) == x) {
                for(col = 0; col < m; col++) {
                    itemsLineX[col] = mat[lin][col];
                }   
            }

            if((lin + 1) == y) {
                for(col = 0; col < m; col++) {
                    itemsLineY[col] = mat[lin][col];
                }   
            }
        }

        for(lin = 0; lin < n; lin++) {
            if((lin + 1) == x) {
                for(col = 0; col < m; col++) {
                    mat[lin][col] = itemsLineY[col];
                }   
            }

            if((lin + 1) == y) {
                for(col = 0; col < m; col++) {
                    mat[lin][col] = itemsLineX[col];
                }   
            }
        }
    }

    void switchColumns (int n, int m, int mat[][MAX]) {
        int lin, col, itemsColumnX[m], itemsColumnY[m], x, y;

        printf("\nDigite a col X (1 - %d): ",m);
        scanf("%d", &x);
        
        printf("\nDigite a col Y (1 - %d): ",m);
        scanf("%d", &y);

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if((col + 1) == x) {
                    itemsColumnX[lin] = mat[lin][col];
                }
            }   

            for(col = 0; col < m; col++) {
                if((col + 1) == y) {
                    itemsColumnY[lin] = mat[lin][col];
                }
            }   
        }

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if((col + 1) == x) {
                    mat[lin][col] = itemsColumnY[lin];
                }
            }   

            for(col = 0; col < m; col++) {
                if((col + 1) == y) {
                    mat[lin][col] = itemsColumnX[lin];
                }
            }   
        }
    }

    void switchDiagonals (int n, int m, int mat[][MAX]) {
        int lin, col, itemsMainDiagonal[n], itemsSecondaryDiagonal[n];

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if(lin == col) {
                    itemsMainDiagonal[lin] = mat[lin][col];
                }

                if((lin + col + 1) == n) {
                    itemsSecondaryDiagonal[lin] = mat[lin][col];
                }
            }   
        }

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if(lin == col) {
                    mat[lin][col] = itemsSecondaryDiagonal[lin];
                }

                if((lin + col + 1) == n) {
                    mat[lin][col] = itemsMainDiagonal[lin];
                }
            }   
        }
    }

    int verifySymmetrical(int n, int m, int mat[][MAX]) {
        int lin, col, isSymmetrical = 0;

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if(mat[lin][col] != mat[col][lin]) {
                    isSymmetrical++;
                } 
            }   
        }

        return (isSymmetrical == 0);
    }
   
    int verifyMagicSquare(int n, int m, int mat[][MAX]) {
        int lin, col, lineSum = 0, columnSum= 0, principalDiagonalSum = 0, secondaryDiagonalSum = 0, isMagicSquare = 1;

        // getPrincipalDiagonalSum
        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if(lin == col) {
                    principalDiagonalSum += mat[lin][col];
                }
            }   
        }

        // getSecondaryDiagonalSum
        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if((lin + col + 1) == n) {
                    secondaryDiagonalSum += mat[lin][col];
                }
            }   
        }

        if(principalDiagonalSum != secondaryDiagonalSum) {
            return 0;
        }

        // getLinesSum
        int aux = 0;
        for(lin = 0; lin < n; lin++) {
            aux = lineSum;
            if(aux != lineSum) {
                return 0;
            }

            lineSum = 0;
            for(col = 0; col < m; col++) {
                lineSum += mat[col][lin];
            }   
        }

        // getColumnsSum
        aux = 0;
        for(lin = 0; lin < n; lin++) {
            aux = columnSum;
            if(aux != columnSum) {
                return 0;
            }

            columnSum = 0;
            for(col = 0; col < m; col++) {
                columnSum += mat[lin][col];
            }   
        }

        if(principalDiagonalSum == secondaryDiagonalSum && principalDiagonalSum == lineSum && principalDiagonalSum == columnSum) {
            return 1;
        }

        return 0;
    }
    
    int findNumberInArray(int number, int arr[]) {
        int length = sizeof(arr) / sizeof(int), i;

        for(i = 0; i < length; i++) {
            if(number == arr[i]) 
                return 1;
        }

        return 0;
    }

    int verifyLatinSquare(int n, int m, int mat[][MAX]) {
        int lin, col, i, numbers[n], numberSum = 0, hasNumber = 0, lineHasAllNumbers = 0, columnHasAllNumbers = 0;

        for(i = 0; i < n; i++) {
            numbers[i] = i+1;
            numberSum += numbers[i];
        }

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if(findNumberInArray(mat[lin][col], numbers)) {
                    hasNumber += mat[lin][col];
                }
            }

            if(hasNumber/numberSum) {
                lineHasAllNumbers++;
            }

            hasNumber = 0;
        }

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if(findNumberInArray(mat[col][lin], numbers)) {
                    hasNumber += mat[col][lin];
                }
            }

            if(hasNumber/numberSum) {
                columnHasAllNumbers++;
            }

            hasNumber = 0;
        }

        return (lineHasAllNumbers == n);
    }

    int verifyPermutation(int n, int m, int mat[][MAX]) {
        int lin = 0, col = 0, isPermutationLines = 0, isPermutationColumns = 0, isOne = 0, isZero = 0;

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if(mat[lin][col] == 0) {
                    isZero++;
                }
                if(mat[lin][col] == 1) {
                    isOne++;
                }
            }

            if(isZero == (n-1) && isOne == 1) {
                isPermutationLines++;
            }

            isZero = 0;
            isOne = 0;
        }

        for(lin = 0; lin < n; lin++) {
            for(col = 0; col < m; col++) {
                if(mat[col][lin] == 0) {
                    isZero++;
                }
                if(mat[col][lin] == 1) {
                    isOne++;
                }
            }

            if(isZero == (m-1) && isOne == 1) {
                isPermutationColumns++;
            }

            isZero = 0;
            isOne = 0;
        }
        

        if(isPermutationColumns == m && isPermutationLines == n) {
            return 1;
        }

        return 0;
    }

    int main () {
        int reprocessment, menuOption, exitSystem, lines = 0, columns = 0, M[MAX][MAX];

        //Reprocessment
        do {
            exitSystem = 0;

            getOrder(&lines, &columns);
        
            read(lines, columns, M);

            show(lines, columns, M);

            menuOption = showMenu();

            switch(menuOption) 
            {
                case 1:
                    switchLines(lines, columns, M);
                    show(lines, columns, M);
                    break;
                case 2:
                    switchColumns(lines, columns, M);
                    show(lines, columns, M);
                    break;
                case 3:
                    if(lines != columns) {
                        printf("\nSua matriz nao e uma matriz quadrada, dessa forma nao possui diagonais.");
                    } else {
                        switchDiagonals(lines, columns, M);
                        show(lines, columns, M);
                    }
                    break;
                case 4:
                    if(lines != columns) {
                        printf("\nSua matriz nao e uma matriz quadrada, dessa forma nao possui simetria.");
                    } else {
                        if(verifySymmetrical(lines, columns, M)) {
                            printf("\nA matriz e uma matriz simetrica!");
                        } else {
                            printf("\nA matriz e nao e uma matriz simetrica!");
                        }
                    }
                    break;
                case 5:
                    if(lines != columns) {
                        printf("\nSua matriz nao e uma matriz quadrada, dessa forma nao pode ser um quadrado magico.");
                    } else {
                        if(verifyMagicSquare(lines, columns, M)) {
                            printf("\nA matriz e um quadrado magico!");
                        } else {
                            printf("\nA matriz e nao e um quadrado magico!");
                        }
                    }
                    break;
                case 6:
                    if(lines != columns) {
                        printf("\nSua matriz nao e uma matriz quadrada, dessa forma nao pode ser um quadrado latino.");
                    } else {
                        if(verifyLatinSquare(lines, columns, M)) {
                            printf("\nA matriz e um quadrado latino!");
                        } else {
                            printf("\nA matriz e nao e um quadrado latino!");
                        }
                    }
                    break;
                case 7:
                    if(lines != columns) {
                        printf("\nSua matriz nao e uma matriz quadrada, dessa forma nao pode ser uma matriz de permutacao.");
                    } else {
                        if(verifyPermutation(lines, columns, M)) {
                            printf("\nA matriz e uma matriz de permutacao!");
                        } else {
                            printf("\nA matriz e nao e uma matriz de permutacao!");
                        }
                    }
                    break;
                case 8:
                    exitSystem = 1;
                    break;
            }

            if(exitSystem != 1) {
                reprocessment = reprocessmentRoutine();
            }
        } while (reprocessment || ! exitSystem);

        return 0;
    }






