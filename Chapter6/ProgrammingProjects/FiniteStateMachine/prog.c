/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Finite State Machine
*/
#include <stdio.h>
#include <ctype.h>

enum state { start, identifier, integer, floating, addop, minusop, multop, divop, assignop, stmttermop, build_id, build_num, build_frac, stop };

enum state transition(enum state, char);

void main()
{
    enum state current_state = start;
    char transition_char = ' ';

    do
    {
        if(current_state == identifier)
        {
            printf(" – Identifier\n");
            current_state = start;
        }
        else if(current_state == integer)
        {
            printf(" – Number\n");
            current_state = start;
        }

        else if(current_state == addop)
        {
            printf(" – Add Operator\n");
            current_state = start;
        }

        else if(current_state == minusop)
        {
            printf(" – Minus Operator\n");
            current_state = start;
        }
        else if(current_state == multop)
        {
            printf(" – Multiplication Operator\n");
            current_state = start;
        }
        else if(current_state == divop)
        {
            printf(" – Division Operator\n");
            current_state = start;
        }
        else if(current_state == assignop)
        {
            printf(" – Assignment Operator\n");
            current_state = start;
        }
        else if(current_state == stmttermop)
        {
            printf(" – Statement Termination Operator\n");
            current_state = start;
        }
        else if(current_state == floating)
        {
            printf(" – Floating Point Number\n");
            current_state = start;
        }

        scanf("%c", &transition_char);

        if (transition_char != ' ' || transition_char != '\n' || transition_char != '.')
            printf("%c", transition_char);

        current_state = transition(current_state, transition_char);
    } while (current_state != stop);
}

enum state transition(enum state current, char transition)
{
    if(current == start)
    {
        if(isdigit(transition))
            return build_num;

        if(isalpha(transition))
            return build_id;

        if(transition == '+')
            return addop;

        if(transition == '-')
            return minusop;

        if(transition == '*')
            return multop;

        if(transition == '/')
            return divop;

        if(transition == '=')
            return assignop;

        if(transition == ';')
            return stmttermop;

        if(transition == '.')
            return stop;

        if(transition == ' ')
            return start;
        else
            return start;
    }

    if(current == build_id)
    {
        if(isdigit(transition))
            return build_id;

        if(isalpha(transition) || transition == '_')
            return build_id;

        if(transition == ' ')
            return identifier;
    }

    if(current == build_num)
    {
        if(isdigit(transition))
            return build_num;

        if(transition == '.')
            return build_frac;

        if(transition == ' ')
            return integer;

    }

    if(current == build_frac)
    {
        if(isdigit(transition))
            return build_frac;

        if(transition == ' ')
            return floating;
    }

    return stop;
}