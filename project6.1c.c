/*colan Connon project 6 part 1 */
#include <stdio.h>
#include<string.h>



int main(){
    int ii =0;
    char inputarray[1000];
    char ch;
    int a =0;
    int b =0;
    int c =0;
    int d =0;
    int e =0;
    int f = 0;
    int g =0;
    int h =0;
    int i = 0;
    int j = 0;
    int k =0;
    int l = 0;
    int m = 0;
    int n = 0;
    int o = 0;
    int p = 0;
    int q = 0;
    int r = 0;
    int s = 0;
    int t =0;
    int u = 0;
    int v =0;
    int w = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    /* create all variables and set to zero */

    printf("Enter a line of Text:");
    while((ch= getchar())!= '\n'){
        inputarray[ii++] = ch;
        ch = tolower(ch);
        /*get input by each character and then convert to lower case and keep count */
        if (ch == 'a'){
            a= a+1;
        }
        else if(ch == 'b'){
            b= b+1;
            }
        else if(ch == 'c'){
            c = c+1;
        }
        else if(ch == 'd'){
            d= d+1;
            }
        else if (ch == 'e'){
            e=e+1;
            }
        else if (ch == 'f'){
            f=f+1;
            }
        else if (ch == 'g'){
            g=g+1;
            }
        else if (ch == 'h'){
            h=h+1;
            }
        else if (ch == 'i')
        {
            i = i+1;
        }
        else if (ch == 'j'){
            j = j+1;}
        else if (ch == 'k'){
            k=k+1;
            }
        else if (ch == 'l'){
            l =l+1;
         }
        else if (ch == 'm'){
            m = m+1;
        }
        else if (ch == 'n')
        {
            n=n+1;
        }
        else if(ch == 'o')
        {
            o=o+1;
        }
        else if(ch == 'p')
        {
            p=p+1;
        }
        else if (ch == 'q')
            {
                q=q+1;
            }
        else if (ch == 'r')
        {
            r=r+1;
        }
        else if (ch == 's')
        {
            s=s+1;
        }
        else if (ch == 't')
        {
            t=t+1;
        }
        else if (ch == 'u')
        {
            u=u+1;
        }
        else if(ch == 'v')
        {
            v=v+1;
        }
        else if (ch == 'w')
        {
            w=w+1;
        }
        else if (ch == 'x')
        {
            x=x+1;
        }
        else if(ch == 'y')
        {
            y=y+1;
        }
        else if(ch =='z'){
            z=z+1;
            }
        }
    inputarray[ii]= '\0';

    /*print out all the info */
    printf("Table With Letter and how many times the letter was repeated:");
    printf("\n");
    printf("a:%d\n" , a);
    printf("b:%d\n", b);
    printf("c:%d\n", c);
    printf("d:%d\n", d);
    printf("e:%d\n" ,e);
    printf("f:%d\n",f);
    printf("g:%d\n", g);
    printf("h:%d\n", h);
    printf("i:%d\n" , i);
    printf("j:%d\n", j);
    printf("l:%d\n", k);
    printf("l:%d\n", l);
    printf("m:%d\n", m);
    printf("n:%d\n", n);
    printf("o:%d\n", o);
    printf("p:%d\n", p);
    printf("q:%d\n" , q);
    printf("r:%d\n", r);
    printf("s:%d\n", s);
    printf("t:%d\n", t);
    printf("u:%d\n" , u);
    printf("v:%d\n", v);
    printf("w:%d\n", w);
    printf("x:%d\n", x);
    printf("y:%d\n" ,y);
    printf("z:%d\n", z);

    return 0;
    }




