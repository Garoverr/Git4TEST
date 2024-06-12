/*
** EPITECH PROJECT, 2024
** 
** File description:
** 
*/

#include <unistd.h>
#include <stdio.h>

int main(__attribute__((unused))int argc, __attribute__((unused)) char *argv[])
{
    char *abdel = "Holla senior";

    write(1, "Hello World !\n",14);
    printf("okkk%s\n", abdel);
    return 0;
}
