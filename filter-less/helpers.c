#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //comb through every column
    for (int i = 0; i < height; i++)
    {
        //comb through every row
        for (int j = 0; j < width; j++)
        {

            //convert pixels to float
            float Red = image[i][j].rgbtRed;
            float Blue = image[i][j].rgbtBlue;
            float Green = image[i][j].rgbtGreen;

            //find the average value
            int average = round((Red + Blue + Green) / 3);
            image[i][j].rgbtRed = image[i][j].rgbtBlue = image[i][j].rgbtGreen = average;

        }

    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    //comb through every column
    for (int i = 0; i < height; i++)
    {
        //comb through every row
        for (int j = 0; j < width; j++)
        {

            //convert pixels to float
            float Red = image[i][j].rgbtRed;
            float Blue = image[i][j].rgbtBlue;
            float Green = image[i][j].rgbtGreen;

            //find the updated pixel value
            int sepiaRed = round(0.393 * Red + 0.769 * Green + 0.189 * Blue);
            int sepiaGreen = round(0.349 * Red + 0.686 * Green + 0.168 * Blue);
            int sepiaBlue = round(0.272 * Red + 0.534 * Green + 0.131 * Blue);

            //update if is any of the colors is > than 255, lock it at 255
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }

            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }

            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            //update pixle values again
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;

        }

    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
