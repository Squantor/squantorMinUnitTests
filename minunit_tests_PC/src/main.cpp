/*
MIT License

Copyright (c) 2019 Bart Bilos

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <autoreg.hpp>
#include <stdio.h>
#include <iostream>

void (*autoregTable[1000])(void);
int autoregTableIndex = 0;

void autoreg_construct_impl(const char *name, void (*autoreg_func)(void))
{
    autoregTable[autoregTableIndex] = autoreg_func;
    autoregTableIndex++;
}

AUTOREG_ADD(foo)
{
    printf("executing foo\n");
}

AUTOREG_ADD(bar)
{
    printf("executing bar\n");
}

int autoregRun(int argc, char *argv[])
{
    for(int i = 0; i < autoregTableIndex; i++)
    {
        void (*autoregFunc)(void) = autoregTable[i];
        autoregFunc();
    }
    return 0;
}

int main(int argc, char *argv[])
//int main()
{
    AUTOREG_RUN(argc, argv);
    return 0;
}