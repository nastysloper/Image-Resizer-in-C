#include <stdio.h>
#include <stdint.h>

// 1 byte = 8 bit where an unsigned int will be stored

int main(void)
{
    // open raw file, if can't open, quit
    // declare a pointer to an output file and intialize it to NULL
    // declare a char array to hold the jpeg filename and initialize to "000.jpg"
    // declater a counter for jpegs found and inialize to 0
    // declare a block of 512 bytes
    // read through the card until end
    while (not end of card)
    {
        // test if start of jpeg is found using jpeg signature
        {
            // give a name to the found jpeg file
            // open output file, if can't open, quit
            // write to output and read next block from card
            // continue writing the last read block from card to output
            while (true)
            {
                // check end of jpeg by testing the start of the block against jpeg signature (in case of new jpeg)
                // or end of card (in case of last jpeg) by reading the next block
                if yes
                    break;
            }
            // close assemled .jpg file
            // increment jpeg files' counter
            // move back position indicator to the previous block on card ie 1 FAT back
            // (it's going to be re-read by the loop condition)
        }
    }
    // close card

    return 0;
}
