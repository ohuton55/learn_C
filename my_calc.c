#include <stdio.h>
#include <ctype.h>      // for using char type
#include <string.h>     // for using strlen
#include <stdlib.h>     // for dynamic allocation

int add(int i, int ii);
int minus(int i, int ii);
int multiple(int i, int ii);
int division(int i, int ii);
int calc(int i1, int i2, char op);

int result = 0;
int main(void)
{
    int i1 = 0;
    int i2 = 0;

    char input[100];
    printf("Please enter: ");
    scanf("%s", input);

    char op[10];
    // char posi_mp_di[10];
    int cnt = 1, p_cnt;
    for (int i = 0; i < strlen(input); i++){
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' ){
            op[cnt - 1] = input[i];
            cnt++;
            if (input[i] == '*' || input[i] == '/'){
                // posi_mp_di[i - 0] = input[i];
                p_cnt++;
            }
            // posi_mp_di[i - 1] = '_';
        }
    }

    if (cnt == 1){
        puts("please contain + or - or * or /.");
        return 1;
    }

    int *input_num = malloc(cnt * sizeof(int));
    int *calced_mp_di_num = calloc(p_cnt, sizeof(int));
    if (input_num == NULL || calced_mp_di_num == NULL) { return 1; }
    
    char *token = strtok(input, &op[0]);
    int index = 0;

    while (token) {
        input_num[index] = atoi(token);     // convert char to int
        index++;
        token = strtok(NULL, &op[index]);  // return next token pointer
    }

    int prev_posi_flag;
    // for (int i = 0; i < strlen(posi_mp_di); i++){
    //     if (posi_mp_di[i] == '_') { prev_posi_flag = 0; continue; }
    //     if (prev_posi_flag == 0 ){
    //         puts("calc 0 or prev_flag=0");
    //         calc(input_num[i], input_num[i + 1], posi_mp_di[i]);
    //         calced_mp_di_num[i] = result;
    //         printf("result: %d", result);
    //     } else {
    //         puts("calc prev_flag=1");
    //         calc(result, input_num[i + 1], posi_mp_di[i]);
    //         calced_mp_di_num[i] = result;
    //         printf("result: %d", result);
    //     }
    //     prev_posi_flag = 1;
    // }

    for (int i = 0; i < cnt - 1; i++){
        printf("op[%d] = %c\n", i, op[i]);
        if (op[i] != '*' || op[i] != '/'){ prev_posi_flag = 0; continue; }
        int calc_num = prev_posi_flag == 0 ? input_num[i] : result;
        calc(calc_num, input_num[i + 1], op[i]);    // result dokoireruka
        prev_posi_flag = 1;
    }


    result = input_num[0];
    for (int i = 0; i < strlen(op); i++){
        calc(result, input_num[i + 1], op[i]);
    }
    
    free(input_num);
    free(calced_mp_di_num);

    printf("result : %d", result);

    return 0;
}

int add(int i, int ii) { result = i + ii; return 0; }
int minus(int i, int ii) { result = i - ii; return 0; }
int multiple(int i, int ii) { result = i * ii; return 0; }
int division(int i, int ii) { result = i / ii; return 0; }
int calc(int i1, int i2, char op)
{
    switch (op) {
        case '+':
            add(i1, i2);
            break;
        case '-':
            minus(i1, i2);
            break;
        case '*':
            multiple(i1, i2);
            break;
        case '/':
            division(i1, i2);
            break;
    }
}