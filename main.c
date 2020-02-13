#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>
#include <stdint.h>

/* ---------------------------------------------------------
 * Prototypes 
 * 
 * ---------------------------------------------------------
 */
void create_file();
void load_and_compute();
void compute_data(uint8_t *buffer);

/* ---------------------------------------------------------
 * main 
 * 
 * ---------------------------------------------------------
 */
int main()
{
    printf("create file\n");
    //create_file();
    printf("compute data file\n");
    load_and_compute();

    return 0;
}

/* ---------------------------------------------------------
 * create file  
 * 
 * ---------------------------------------------------------
 */
void create_file()
{
}

/* ---------------------------------------------------------
 * load_and_compute 
 * 
 * ---------------------------------------------------------
 */
void load_and_compute()
{
}
