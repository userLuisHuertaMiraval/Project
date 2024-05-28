#include <stdio.h>
#define True 1 
#define False 0

int lr1(void)
{
float L; // расстояние между пунктами
float v1; // пешеход 1
float v2; // пешеход 2
float t; // время до встречи
printf("L = "); // вывод на экран подсказки: L =
scanf("%f", &L); // ввод с клавиатуры значения переменной L
printf("t = "); // вывод на экран подсказки: t =
scanf("%f", &t); // ввод с клавиатуры значения переменной t
// решение задачи
v1 = 1; // скорость первого пешехода
v2 = ((L / t) - v1); // вычисление искомой скорости 2
printf("v2 = %f\n", v2); // вывод на экран значения переменной v2
return 0;
}


int lr2(void)
{
float x;
float n;
printf ("introduce x \n");
scanf ("%f", &x);
printf ("introduce n \n");
scanf ("%f", &n);
float suma;
float sign;
int i;
float numerator;
float denominator;
float fraction;
suma = 0;
sign = 1;
i = 0;
numerator = x;
denominator = 1;
fraction = numerator/denominator;
while ( i < n )
{
suma = suma + fraction*sign;
sign = -sign;
numerator = numerator*x;
denominator = denominator + 1;
fraction = numerator/denominator;
i = i + 1;
}//Recursive Function estudiar que significa y saber como utilizarlo
//what is stack overflow(error) es muy comun en el lenguaje de programacion
printf("suma = %f", suma);
return 0;
}

int lr3(void)
{
  int c;
  float summ = 0;
  float n = 0;
  int cnt = 0;
  float res;
  printf("Введите поток (Enter => Ctrl+D => Enter для завершения): ");
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '.' || c == '\n' || c == ',')
    {
      summ = summ + cnt;
      n = n + 1;
      cnt = 0;
    }
    else   
    {
      cnt = cnt + 1;
    }
  } 
  res = summ/n;
  printf("res=%f\n", res);
  return 0;
}




int cnt(char str[])
{
  int number = 0, i = 0;
  while (str[i] != '\n')
  {
    number++; 
    i++;
  }
  return number;
}
void reverse(char *a, char *b)
{
  char temp = *a;
  *a = *b;
  *b= temp;
}

int lr4(void)
{
  char str[30];
  int len, k, j;
  fgets(str, 30, stdin);
  len = cnt(str); 
  for (j = 0; j < len / 2 + 1; j++)  
  {
    reverse(&str[j], &str[len - j]);
  }
  puts(str);
  return 0;
}




#include <stdio.h>
#define N 10
int lr5(void)
{
    int arr[N];
    int i;
    int n;

   scanf("%d", &n);
   for (i = 0; i < N; i++) 
     scanf("%d", &arr[i]);

   int end = 0; 
   int start = 0;

   int sum = 0;
   while (end < n)
     {
       sum += arr[end];
       end++;
     }
   int min = sum;
   int minStartIndex = 0;
   end++;
   start++;
   while (end < N)
     {
       sum += arr[end];
       sum -= arr[start-1];

       if (sum < min)
       {
         min = sum;
         minStartIndex = start;
       }

       end++;
       start++;
     }

      i = minStartIndex;
      while (i < minStartIndex + n)
        {
          arr[i] = 0;
          i++;
        }
      i = 0;
      while (i < N)
        {
          printf("%d", arr[i]);
          i++;
        }

  return 0;
}




  void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int lr6(void) 
{
    int R = 5; // Размер массива (количество строк)
    int K = 4; // Количество столбцов
    int arr[N][K];

    // Заполнение массива и вывод его до изменений
    printf("Исходный массив:\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < K; j++) {
            arr[i][j] = rand() % 10; // Заполнение случайными числами от 0 до 9
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int sum[R];
    for (int i = 0; i < N; i++) {
        sum[i] = 0;
        for (int j = 0; j < K; j++) {
            sum[i] += arr[i][j];
        }
    }

    // Сортировка сумм строк методом пузырька
    bubble_sort(sum, N);

    // Обнуление строки с минимальной суммой элементов
    for (int i = 0; i < R; i++) {
        if (sum[0] == 0) {
            break; // Если строка с минимальной суммой уже нулевая, то выходим из цикла
        }
        if (sum[i] == sum[0]) {
            for (int j = 0; j < K; j++) {
                arr[i][j] = 0;
            }
            break;
        }
    }

    // Вывод массива после изменений
    printf("\nМассив после обнуления строки с минимальной суммой:\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}




int findPositionOfRightmostSetBit(int M) {
    int position = 1;
    int mask = 1;

    while ((M & mask) == 0) {
        position++;
        mask = mask << 1;
    }

    return position;
}

int lr7(void) {
    int M;
    printf("Введите целое число M: ");
    scanf("%d", &M);

    if (M == 0) {
        printf("Введенное число равно нулю.\n");
    } else {
        int position = findPositionOfRightmostSetBit(M);
        printf("Позиция младшей единицы в числе %d: %d\n", M, position);
    }

    return 0;
}

