#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13

using namespace std;
#include "funciones.h"
#include "FuncionCapitan.h"

int main()
{
    int opcion,ronda,ronda2, RondAc=1, tope_nombres, suma, Record=0,tiradas_record;
    int Dados=5,ValorDado[5],ListaPuntos[10],ListaTiradas[10],TiradaActual=0;
    bool Juego=true;
    char NombreJugador[10][20];
    char CapitanRecord[20];
    strcpy(CapitanRecord,"-");
    textcolor(11,0);
    system("mode con: cols=148 lines=75");
    do{
        opcion=MenuJuego();
        poner_en_cero(ValorDado,5);
        poner_en_cero(ListaPuntos,10);
        poner_en_cero(ListaTiradas,10);
        switch (opcion)
        {
            case 1:
            {
                RondAc=1;
                ronda=NombreYRonda(NombreJugador,opcion,&tope_nombres);
                ronda2=ControlRondas(ronda);
                ronda=ronda2;
                while(RondAc<=ronda)
                {
                    int jugador=0;
                    int i=0;
                    while(i<tope_nombres)
                    {
                        Dados=5;
                        TiradaActual=1;
                        while(TiradaActual<=3)
                        {
                            TurnosJugadores(RondAc,ListaPuntos[i],NombreJugador,i,TiradaActual,ValorDado,opcion);
                            suma=ObtenerDados(ValorDado,&Dados,ListaPuntos,i,opcion,&TiradaActual);
                            AcumularTiradas(ListaTiradas,i,opcion,suma);
                            SeguirJugando(ValorDado,&TiradaActual,ListaPuntos,i,suma);
                            TiradaActual++;
                        }
                        poner_en_cero(ValorDado,5);
                        i++;
                        jugador=i;
                        if(i>=tope_nombres)
                        {
                            if((RondAc+1)<=ronda)
                            {
                                jugador=0;
                                EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,(RondAc+1),opcion);
                            }
                        }
                        else
                        {
                            EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,RondAc,opcion);
                        }
                    }
                    RondAc++;
                }
                DeterminarGanador(ListaPuntos,NombreJugador,ListaTiradas,tope_nombres,&Record,CapitanRecord,&tiradas_record,opcion);
            }
            break;
            case 2:
            {
                RondAc=1;
                ronda=NombreYRonda(NombreJugador,opcion,&tope_nombres);
                ronda2=ControlRondas(ronda);
                ronda=ronda2;
                while(RondAc<=ronda)
                {
                    int jugador=0;
                    int i=0;
                    while(i<tope_nombres)
                    {
                        Dados=5;
                        TiradaActual=1;
                        while(TiradaActual<=3)
                        {
                            TurnosJugadores(RondAc,ListaPuntos[i],NombreJugador,i,TiradaActual,ValorDado,opcion);
                            suma=ObtenerDados(ValorDado,&Dados,ListaPuntos,i,opcion,&TiradaActual);
                            AcumularTiradas(ListaTiradas,i,opcion,suma);
                            SeguirJugando(ValorDado,&TiradaActual,ListaPuntos,i,suma);
                            TiradaActual++;
                        }
                        poner_en_cero(ValorDado,5);
                        i++;
                        jugador=i;
                        if(i>=tope_nombres)
                        {
                            if((RondAc+1)<=ronda)
                            {
                                jugador=0;
                                EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,(RondAc+1),opcion);
                            }
                        }
                        else
                        {
                            EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,RondAc,opcion);
                        }
                    }
                    RondAc++;
                }
                DeterminarGanador(ListaPuntos,NombreJugador,ListaTiradas,tope_nombres,&Record,CapitanRecord,&tiradas_record,opcion);
            }
            break;
            case 3:
            {
                nombrar_maquinas(NombreJugador);
                RondAc=1;
                ronda=NombreYRonda(NombreJugador,opcion,&tope_nombres);
                ronda2=ControlRondas(ronda);
                ronda=ronda2;
                while(RondAc<=ronda)
                {
                    int jugador=0;
                    int i=0;
                    while(i<tope_nombres)
                    {
                        Dados=5;
                        TiradaActual=1;
                        while(TiradaActual<=3)
                        {
                            TurnosJugadores(RondAc,ListaPuntos[i],NombreJugador,i,TiradaActual,ValorDado,opcion);
                            suma=ObtenerDados(ValorDado,&Dados,ListaPuntos,i,opcion,&TiradaActual);
                            AcumularTiradas(ListaTiradas,i,opcion,suma);
                            SeguirJugando(ValorDado,&TiradaActual,ListaPuntos,i,suma);
                            TiradaActual++;
                        }
                        ResultadosBots(NombreJugador,ListaPuntos,jugador,opcion,suma);
                        poner_en_cero(ValorDado,5);
                        i++;
                        jugador=i;
                        if(i>=tope_nombres)
                        {
                            if((RondAc+1)<=ronda)
                            {
                                jugador=0;
                                EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,(RondAc+1),opcion);
                            }
                        }
                        else
                        {
                            EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,RondAc,opcion);
                        }
                    }
                    RondAc++;
                }
                DeterminarGanador(ListaPuntos,NombreJugador,ListaTiradas,tope_nombres,&Record,CapitanRecord,&tiradas_record,opcion);
            }
            break;
            case 4:
            {
                nombrar_maquinas(NombreJugador);
                RondAc=1;
                ronda=NombreYRonda(NombreJugador,opcion,&tope_nombres);
                ronda2=ControlRondas(ronda);
                ronda=ronda2;
                while(RondAc<=ronda)
                {
                    int jugador=0;
                    int i=0;
                    while(i<tope_nombres)
                    {
                        Dados=5;
                        TiradaActual=1;
                        while(TiradaActual<=3)
                        {
                            TurnosJugadores(RondAc,ListaPuntos[i],NombreJugador,i,TiradaActual,ValorDado,opcion);
                            suma=ObtenerDados(ValorDado,&Dados,ListaPuntos,i,opcion,&TiradaActual);
                            AcumularTiradas(ListaTiradas,i,opcion,suma);
                            SeguirJugando(ValorDado,&TiradaActual,ListaPuntos,i,suma);
                            TiradaActual++;
                        }
                        ResultadosBots(NombreJugador,ListaPuntos,jugador,opcion,suma);
                        poner_en_cero(ValorDado,5);
                        i++;
                        jugador=i;
                        if(i>=tope_nombres)
                        {
                            if((RondAc+1)<=ronda)
                            {
                                jugador=0;
                                EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,(RondAc+1),opcion);
                            }
                        }
                        else
                        {
                            EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,RondAc,opcion);
                        }
                    }
                    RondAc++;
                }
                DeterminarGanador(ListaPuntos,NombreJugador,ListaTiradas,tope_nombres,&Record,CapitanRecord,&tiradas_record,opcion);
            }
            break;
            case 5:
            {
                mostrar_record(Record,CapitanRecord,tiradas_record);
            }
            break;
            case 6:
            {
                RondAc=1;
                ronda=NombreYRonda(NombreJugador,opcion,&tope_nombres);
                ronda2=ControlRondas(ronda);
                ronda=ronda2;
                while(RondAc<=ronda)
                {
                    int jugador=0;
                    int i=0;
                    while(i<tope_nombres)
                    {
                        Dados=5;
                        TiradaActual=1;
                        while(TiradaActual<=3)
                        {
                            TurnosJugadores(RondAc,ListaPuntos[i],NombreJugador,i,TiradaActual,ValorDado,opcion);
                            suma=ObtenerDados(ValorDado,&Dados,ListaPuntos,i,opcion,&TiradaActual);
                            AcumularTiradas(ListaTiradas,i,opcion,suma);
                            SeguirJugando(ValorDado,&TiradaActual,ListaPuntos,i,suma);
                            TiradaActual++;
                        }
                        poner_en_cero(ValorDado,5);
                        i++;
                        jugador=i;
                        if(i>=tope_nombres)
                        {
                            if((RondAc+1)<=ronda)
                            {
                                jugador=0;
                                EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,(RondAc+1),opcion);
                            }
                        }
                        else
                        {
                            EntreTurnos(NombreJugador,jugador,ListaPuntos,ListaTiradas,RondAc,opcion);
                        }
                    }
                    RondAc++;
                }
                DeterminarGanador(ListaPuntos,NombreJugador,ListaTiradas,tope_nombres,&Record,CapitanRecord,&tiradas_record,opcion);
            }
            break;
            case 7:
            {
                system("cls");
                Juego=false;
            }
            break;
        }
    }while(Juego==true);

    return 0;
}
