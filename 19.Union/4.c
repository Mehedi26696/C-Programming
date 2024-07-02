#include <stdio.h>

// Rgb color structure declaration
struct color_rgb
{
    unsigned char r;    // Red value
    unsigned char g;    // Green value
    unsigned char b;    // Blue value
};

// Rgba color structure declaration
struct color_rgba
{
    unsigned char r;    // Red value
    unsigned char g;    // Green value
    unsigned char b;    // Blue value
    float    a;    // Opacity value
};


/**
 * Union definition to store color
 */
union color 
{
    struct color_rgb  rgb;      // rgb color value
    struct color_rgba rgba;     // rgba color value
    
    unsigned int value;         // integer color value
    char name[20];              // String name of color
};

int main()
{
    // Declare color variable 
    union color console_color;

    // Print size of union variable
    printf("Size of color variable = %d\n\n", sizeof(console_color));

    printf("Enter space separated rgb color value: ");
    scanf("%d %d %d", &console_color.rgb.r, 
                      &console_color.rgb.g, 
                      &console_color.rgb.b);
    printf("Color in rgb format: %d %d %d\n\n", 
                      console_color.rgb.r, 
                      console_color.rgb.g, 
                      console_color.rgb.b);
    
    printf("Enter space separated rgba color value: ");
    scanf("%d %d %d %f", &console_color.rgba.r, 
                         &console_color.rgba.g, 
                         &console_color.rgba.b, 
                         &console_color.rgba.a);
    printf("Color in rgba format: %d %d %d %.2f\n\n", 
                         console_color.rgba.r, 
                         console_color.rgba.g, 
                         console_color.rgba.b, 
                         console_color.rgba.a);

    printf("Enter integer color value: ");
    scanf("%d", &console_color.value);
    printf("Color in integer format: %d\n\n", console_color.value);

    printf("Enter string color value: ");
    getchar(); // Eat extra new line character
    gets(console_color.name);
    printf("Color in string format: %s\n\n", console_color.name);


    return 0;
}

