#include <locale>
#include <iostream>
#include <ncurses.h>

void cpp_menu();
void c_menu();


int main() {
    //    std::wcout << "User-preferred locale setting is " << std::locale("").name().c_str() << '\n';
  cpp_menu();
}

void cpp_menu() {
    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "Russian");
    //const wchar_t *mesg = L"Просто строка";    
   WINDOW *w;
    std::string list[5] = { "Пош", "Work", "Spr", "Logs", "Other" };
    //char item[7];
    int ch, i = 0, width = 7;
    
    initscr(); // initialize Ncurses
    w = newwin( 10, 12, 1, 1 ); // create a new window
    box( w, 0, 0 ); // sets default borders for the window
// now print all the menu items and highlight the first one
    for( i=0; i<5; i++ ) {
        if( i == 0 ) 
            wattron( w, A_STANDOUT ); // highlights the first item.
        else
            wattroff( w, A_STANDOUT );
        //sprintf(item, "%-6s",  list[i]);
        //std::cout << list[i];
        mvwprintw( w, i+1, 2, "%s", list[i] );
    }
    int k=1;
    printw("Значение i=%d",k);/*     
    wrefresh( w ); // update the terminal screen
 
    i = 0;
    noecho(); // disable echoing of characters on the screen
    keypad( w, TRUE ); // enable keyboard input for the window.
    curs_set( 0 ); // hide the default screen cursor.
     
       // get the input
    while(( ch = wgetch(w)) != 'q'){ 
/*         
                // right pad with spaces to make the items appear with even width.
            //sprintf(item, "%-6s",  list[i]); 
//            std::cout << list[i];
            mvwprintw( w, i+1, 2, "%s", list[i] ); 
              // use a variable to increment or decrement the value based on the input.
            switch( ch ) {
                
                case KEY_UP:
                            i--;
                            i = ( i<0 ) ? 4 : i;
                            break;
                case KEY_DOWN:
                            i++;
                            i = ( i>4 ) ? 0 : i;
                            break;
            }
            // now highlight the next item in the list.
            wattron( w, A_STANDOUT );
             
            //sprintf(item, "%-6s",  list[i]);
//            std::cout << list[i];

            mvwprintw( w, i+1, 2, "%s", list[i]);
            wattroff( w, A_STANDOUT );
            
    }
 
    delwin( w );
    endwin();
}
/*
void c_menu() {
   WINDOW *w;
    char list[5][7] = { "Crack", "Work", "Spr", "Logs", "Other" };
    char item[7];
    int ch, i = 0, width = 7;
    
    initscr(); // initialize Ncurses
    w = newwin( 10, 12, 1, 1 ); // create a new window
    box( w, 0, 0 ); // sets default borders for the window
     
// now print all the menu items and highlight the first one
    for( i=0; i<5; i++ ) {
        if( i == 0 ) 
            wattron( w, A_STANDOUT ); // highlights the first item.
        else
            wattroff( w, A_STANDOUT );
        sprintf(item, "%-7s",  list[i]);
        mvwprintw( w, i+1, 2, "%s", item );
    }
 
    wrefresh( w ); // update the terminal screen
 
    i = 0;
    noecho(); // disable echoing of characters on the screen
    keypad( w, TRUE ); // enable keyboard input for the window.
    curs_set( 0 ); // hide the default screen cursor.
     
       // get the input
    while(( ch = wgetch(w)) != 'q'){ 
         
                // right pad with spaces to make the items appear with even width.
            sprintf(item, "%-7s",  list[i]); 
            mvwprintw( w, i+1, 2, "%s", item ); 
              // use a variable to increment or decrement the value based on the input.
            switch( ch ) {
                case KEY_UP:
                            i--;
                            i = ( i<0 ) ? 4 : i;
                            break;
                case KEY_DOWN:
                            i++;
                            i = ( i>4 ) ? 0 : i;
                            break;
            }
            // now highlight the next item in the list.
            wattron( w, A_STANDOUT );
             
            sprintf(item, "%-7s",  list[i]);
            mvwprintw( w, i+1, 2, "%s", item);
            wattroff( w, A_STANDOUT );
    }
 
    delwin( w );
    endwin();
        
}
*/