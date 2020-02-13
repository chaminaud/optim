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
    FILE *fp;
    srand(time(NULL)); // Initialization, should only be called once.
    fp = fopen("data", "w");
    for (int i = 0; i < 5000 * 5000 * 3; i++)
    {
        char r = (char)rand() % 256; // Returns a pseudo-random integer between 0 and RAND_MAX.
        fwrite(&r, 1, 1, fp);
    }
    fclose(fp);
}

/* ---------------------------------------------------------
 * load_and_compute 
 * 
 * ---------------------------------------------------------
 */
void load_and_compute()
{
    FILE *fp;
    size_t buff_size = 5000 * 5000 * 3;
    struct timeval st, et;

    uint8_t *buffer = (uint8_t *) malloc(buff_size);

    fp = fopen("data", "r");
    fread(buffer, 1, buff_size, fp);
    fclose(fp);

    gettimeofday(&st, NULL);
    compute_data(buffer);
    gettimeofday(&et, NULL);

    int elapsed = ((et.tv_sec - st.tv_sec) * 1000000) + (et.tv_usec - st.tv_usec);
    printf("counting time: %d micro seconds\n", elapsed);
}
