#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){
        //1
        float lift_a_car(const int stick_length, const int human_weight, const int car_weight);
        printf("%.4f\n", lift_a_car(2, 80, 1400));
        // prints: 0.1100
        printf("%.4f\n", lift_a_car(4, 90, 1650));
        // prints: 0.2100 

        //2
        float unit_price(const float pack_price, const int rolls_count, const int pieces_count);
        printf("%.4f\n", unit_price(4.79, 16, 150));
        // prints: 0.2000
        printf("%.4f\n", unit_price(5.63, 20, 200));
        // prints: 0.1400

        //3
        int collatz(const int number);
        printf("%d\n", collatz(20));
        // prints: 8
        printf("%d\n", collatz(35));
        // prints: 14

        //4
        int opposite_number(const int n, const int number);
        printf("%d\n", opposite_number(10, 2));
        // prints: 7
        printf("%d\n", opposite_number(12, 9));
        // prints: 3
        
        //5
        void counter(const int input[], const int array_size, int result_array[2]);
        int input[5] = {1,2,3,4,5}; 
        int result_array[2];
        counter(input, 5, result_array);
        printf("%d %d\n", result_array[0], result_array[1]);
        // prints: 9 6

        //6
        unsigned long sum_squared(const int line);
        printf("%lu\n", sum_squared(1));
        // prints: 2
        printf("%lu\n", sum_squared(4));
        // prints: 70
        printf("%lu\n", sum_squared(33));
        // prints: 7219428434016265740 

        //7
        int array_min(const int input_array[], const int array_size);
        int array_max(const int input_array[], const int array_size);
        int input_array[] = {1,2,3,4,5};
        printf("%d\n", array_min(input_array, 5));
        // prints: 1
        printf("%d\n", array_max(input_array, 5));
        // prints: 5
        printf("%d\n", array_max(NULL, 5));
        // prints: -1 

        //8
        unsigned long special_counter(const int input_array7[], const int array_size);
        int input_array7[] = {11,12,13,14,15};
        printf("%lu\n", special_counter(input_array7, 5));
        // prints: 379


        //9
        int special_numbers(const int input_array2[], const int array_size, int result_array2[]);
        int input_array2[] = {16,17,4,3,5,2};
        int result_array2[6];
        int count = special_numbers(input_array2, 6, result_array2);
        for(int i = 0; i < count; i++){
        printf("%d ", result_array2[i]);
        }
        printf("\n");
        // prints: 17 5 2
    return 0;
}    






    //1
     float lift_a_car(const int stick_length, const int human_weight, const int car_weight){  // default
     return round((stick_length * human_weight / ((float)human_weight + car_weight)) * 100) / 100;     
     }

    //2
     float unit_price(const float pack_price, const int rolls_count, const int pieces_count){ // default
     return round(( pack_price / rolls_count / pieces_count * 100) * 100) / 100;
     }

    //3
     int collatz(const int number){ //легко ніби та просто
         int g = 1;
         int a = number; 
         while(a !=1){ 
            if ( a%2  == 0){ a /= 2;
             } 
            else { a = a * 3 + 1; 
        }
             g++;
     }
         return g;
 }

    //4 
      int opposite_number(const int n, const int number){ 
          int g = 0;
          if(number >= (n/2)){ // якщо намбер більше або дорівнює кількості / 2 то 
              g += number; // присвоєння суми
              g -= (n/2); // присвоєння різниці
          } 
          else { // а в іншому випадку
              g += number; // присвоєння суми
              g += (n/2);// присвоєння суми а не різниці
          } 

          return g;     
        }
    //5
    void counter(const int input[], const int array_size, int result_array[2]){
        for (int g = 0; g < array_size; g++){ //ціле число доріввнює 0 якщо воно менше за еррей сайз то +1 
            if(g % 2 !=0){ result_array[1] += input[g]; // остача ділення НЕ дорівнює 0 то 2 число в масиві  x = x +y;
            } else { result_array[0] += input[g];} // в іншому випадку 1 число в масиві x = x +y;
         }
     } 

    //6
    unsigned long int sum_squared(const int line){ //найважча програма з 9
    unsigned long long int squared = 0;
	unsigned long long int *a;
         // memory allocation - виділити пам'ять в деякому розмірі щоб не було використано багато оперативної пам'яті
	    a = (unsigned long long int*) malloc ((line + 1) * sizeof(unsigned long long int)); // malloc системний виклик який отримує пам'ять
            for (int wg = 0; wg <= line; wg++){          //sizeof показує яку показує яку кількість памяті буде використано тобто лонг лонг цілого числа
		         a[wg] = 1;                             
	        }                                            //
	        for (int wg = 0; wg <= line; wg++){          //
		        for (int gw = wg - 1; gw > 0; gw--){     //
			         a[gw] += a[gw - 1];                 //
		        }                                        // нічого нового прості for які описував сам собі вище або нижче пошукай 
    	    }                                            //
	        for (int wg = 0; wg <= line; wg++){          //
		         squared += a[wg] * a[wg];               //
	        }                                            //
            // якщо указатель = 0 то free(a) нічого не робить
	        free(a); // звільняє пам'ять яка була виділена для системного виклику типу malloc
	    return squared; // ну і звичайна кінцівка
    }

    //7.1
    int array_min(const int input_array[], const int array_size){
    int minimalCena = 10000000;
        for(int g = 0; g <= array_size -1; g++){
            if(input_array[g] < minimalCena){
            minimalCena = input_array[g];
            }
        }
        return minimalCena;
    } 
   //7.2 
   int array_max(const int input_array[], const int array_size){
   int maximalCena = 0;
     for(int wp = 0; wp <= array_size -1; wp++){
        if(input_array[wp] > maximalCena){
            maximalCena = input_array[wp];
        }
    }
    return maximalCena; 
} 

    //8
    unsigned long special_counter(const int input_array7[], const int array_size){
    unsigned long rslt = 0; 
        for (int gg = 0; gg < array_size; gg++){ //ціле число дорівнює 0 якщо воно менше за еррей сайз то +1 
            if(gg % 2 != 0) {                    //остача ділення НЕ дорівнює 0 то x = x + 2*2
                rslt = rslt + pow(input_array7[gg], 2);
                }
            }
        for (int wp = 0; wp < array_size; wp++){ //ціле число дорівнює 0 якщо воно менше за еррей сайз то +1
            if(wp % 2 == 0){ // якщо дорівнює 0 то ==
                rslt += input_array7[wp]; //x = x + y[wp];
                } 
            }
            return rslt; 
    } 
    
    //9
    int special_numbers(const int input_array2[], const int array_size, int result_array2[]){
        int Special_check = 0; // new int
        int invo = 0;          // one more
        for(int g = 0; g < array_size; g++){ //ціле число дорівнює 0 якщо воно менше за еррей сайз то +1 
            for(int gg = g + 1; gg < array_size; gg++){ // x = y але /*він кожен раз збільшується на 1*/ + 1 ну і далі по стандарту
                Special_check += input_array2[gg];// x = x + y[gg];
            }
            if(input_array2[g] > Special_check){ // якщо кожен з чисел масиву g менший за Special_check то
                result_array2[invo] = input_array2[g]; // вступає інше ціле число 
                invo++;
                }
                Special_check = 0;
        }
        return invo;
    }
    


    

  
 

