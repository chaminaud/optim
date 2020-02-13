
#include <stdint.h>


/* ---------------------------------------------------------
 * create file  
 * 
 * ---------------------------------------------------------
 */
uint32_t red[255];
uint32_t green[255];
uint32_t blue[255];

void compute_data(uint8_t *buffer)
{
    for (int i=0; i < 5000*5000*3; i++)
    {
        red[buffer[i]] += 1;
        green[buffer[i+1]] += 1;
        blue[buffer[i+2]] += 1;
    }
}