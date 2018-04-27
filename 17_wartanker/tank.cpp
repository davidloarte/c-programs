#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <ncurses.h>
#include <locale.h>

#define DELTA_T 0.1

typedef struct {
    double x;
    double y;
} Coord;

typedef struct{
    Coord pos;
    Coord dir;
    Coord vel;
    Coord acc;
} Movil;

typedef struct {
    Movil cuerpo;
    int vida;
    int ammo;
} Player;

void titulo() {
    system("clear");

    for (int i=0; i<5; i++)
        printf("\n");
        printf("\t");
    system("toilet --gay -fpaga TANK");
    sleep(2);
}

void pintar(Player jugador[2]){
    mvprintw(LINES - jugador[0].cuerpo.pos.y,
            jugador[0].cuerpo.pos.x, "▞█████▚");
    mvprintw(LINES - jugador[1].cuerpo.pos.y,
            jugador[1].cuerpo.pos.x, "▞█████▚");

}
Coord preguntar_disparo(int turno){
    Coord resultado;
    double vel, alpha;

    mvprintw( 1, 2, "Jugador %i ", turno % 2 + 1 ),
    mvprintw( 2, 2, "Velocidad: " );
    scanw(" %lf", &vel);
    mvprintw( 3, 2, "Angulo: " );
    scanw(" %lf", &alpha);

    resultado.x = vel * cos(alpha / 360. * 2 * M_PI);
    resultado.y = vel * sin(alpha / 360. * 2 * M_PI);

    return resultado;
};

void disparar(Movil bala){
    Coord ini;
    do{
        ini = bala.pos;
    bala.vel.x += bala.acc.x *DELTA_T;
    bala.vel.y += bala.acc.y *DELTA_T;
    bala.pos.x += bala.vel.x *DELTA_T;
    bala.pos.y += bala.vel.y *DELTA_T;

    mvprintw(LINES - ini.y, ini.x, " ");
    mvprintw(LINES - bala.pos.y, bala.pos.x, "o");
    refresh();
    usleep(100000 * DELTA_T);
    }while(bala.pos.y > 0);
}

int main(){
    int turno = 0;
    Movil bala = {{0., 0.}, {0., 0.},{0.,-9.8}, {0.,0.}};


    Player jugador[2] = {
        {{ {5.,0.}, {1.,0.}, {0., 0.}, {0., 0.} }, 100, 20},
        {{ {65.,0.}, {-1.,0.}, {0., 0.}, {0., 0.} }, 100, 20}
    };

    setlocale(LC_ALL,"");
    //titulo();
    initscr();
    curs_set(0);

    while (1){
        pintar(jugador);
        refresh();
        bala.vel = preguntar_disparo(turno);
        bala.pos = jugador[turno % 2].cuerpo.pos;
        disparar(bala);
        turno++;
    }

    curs_set(1);
    endwin();
    return EXIT_SUCCESS;
}
