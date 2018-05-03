#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>

#define VMax 9
#define DELTA_T 0.001

#define N 3

typedef struct{
    double x;
    double y;
} Coord2;

typedef struct {
    bool vivo;
    Coord2 pos;
    Coord2 vel;
    Coord2 acc;
} Sprite;

void iniciar(Sprite que[N]){
    for (int i=0; i<N; i++){
        que[i].pos.x = 0;
        que[i].pos.y = 0;
        que[i].vel.x = rand() % VMax + 1.;
        que[i].vel.y = rand() % VMax + 1.;
        que[i].acc.x = 0.;
        que[i].acc.y = -9.8;
    }

}

void actualizar(Sprite movil[N]) {
    static int vez = 0;
    mvprintw(0,0,"Iteracion %i", ++vez);
    for (int i=0; i<N; i++){
        movil[i].vel.x += (movil[i].acc.x * DELTA_T);
        movil[i].vel.y += (movil[i].acc.y * DELTA_T);
        movil[i].pos.x += (movil[i].vel.x * DELTA_T);
        movil[i].pos.x += (movil[i].vel.y * DELTA_T);
        attron(COLOR_GREEN);
        mvprintw(1+i, 0, "objeto %i: %2.lf, %2.lf", i, movil[i].pos.x, movil.pos.y);
        attron(COLOR_PAIR(1));
    }
}

void pintar(Sprite dibu[N]) {
    for (int i=0; i<N; i++){
        mvpritw( LINES / 2 - dibu[i]pos.y, COLS / 2 + dibu[i].pos.x, "*");
    }
    //mvprintw( (dibu[0].pos.y + dibu[1].pos.y + dibu[2] ), "*")
    refresh();
}

int main(){
    Sprite obj[N];

    initscr();
    curs_set(0);
    srand(time(NULL));
    iniciar(obj);
    if (!has_colors())
        retuen EXIT_FAILURE;


    while(1){
        actualizar(obj);

        start_color();
        initpair
    }

    endwin();
    curs_set(1);
    return EXIT_SUCCESS;

}
