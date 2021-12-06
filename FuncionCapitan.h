#ifndef FUNCIONCAPITAN_H_INCLUDED
#define FUNCIONCAPITAN_H_INCLUDED

#include "funciones.h"

/*
PRE: -
POST: Muestra el menu principal del juego.
      Acomoda la posicion de la flecha en caso de sobrepasar los limites.
*/
int MenuJuego()
{
    int Menuop=1;
    int Tecla;
    bool repite=true;
    do{
        system("cls");
        recuadro(10,3,130,12,11,0);
        recuadro(10,3,130,2,11,0);
        gotoxy(65,4);
        cout<<"BIENVENIDO MARINERO."<<endl;
        gotoxy(20,7);
        cout<<"1. MARINERO VS MARINERO."<<endl;
        gotoxy(20,8);
        cout<<"2. MARINEROS VS MARINEROS."<<endl;
        gotoxy(20,9);
        cout<<"3. MARINERO VS MAQUINA."<<endl;
        gotoxy(20,10);
        cout<<"4. MARINERO VS MAQUINAS."<<endl;
        gotoxy(20,11);
        cout<<"5. PUNTACION MAS ALTA."<<endl;
        gotoxy(20,12);
        cout<<"6. MODO SIMULADO."<<endl;
        gotoxy(20,13);
        cout<<"7. ABANDONAR LA EMBARCACION."<<endl;

        gotoxy(16,6+Menuop);cout<<"=>";
        do{
            Tecla=getch();
        }while(Tecla!=TECLA_ARRIBA&&Tecla!=TECLA_ABAJO&&Tecla!=ENTER);

        switch (Tecla)
        {
            case TECLA_ARRIBA:
            Menuop--;
            if (Menuop<1)
            {
                Menuop=7;
            }
            break;
            case TECLA_ABAJO:
            Menuop++;
            if (Menuop>7)
            {
                Menuop=1;
            }
            break;
            case ENTER:
            repite=false;
            break;
        }
   }while(repite);
    return Menuop;
}

/*
PRE: Recibe el numero de dado y su posicion.
POST: Imprime una imagen del dado.
*/
void imprimir_dados(int caso, int x1, int y1)
{
    switch(caso)
    {
        case 1:
            gotoxy(x1,y1++);
            cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187;
            gotoxy(x1,y1++);
            cout<<(char)186<<"       "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<"   O   "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<"       "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188;
        break;
        case 2:
            gotoxy(x1,y1++);
            cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187;
            gotoxy(x1,y1++);
            cout<<(char)186<<"       "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<" O   O "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<"       "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188;
        break;
        case 3:
            gotoxy(x1,y1++);
            cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187;
            gotoxy(x1,y1++);
            cout<<(char)186<<" O     "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<"   O   "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<"     O "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188;
        break;
        case 4:
            gotoxy(x1,y1++);
            cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187;
            gotoxy(x1,y1++);
            cout<<(char)186<<" O   O "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<"       "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<" O   O "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188;
        break;
        case 5:
            gotoxy(x1,y1++);
            cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187;
            gotoxy(x1,y1++);
            cout<<(char)186<<" O   O "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<"   O   "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<" O   O "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188;
        break;
        case 6:
            gotoxy(x1,y1++);
            cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187;
            gotoxy(x1,y1++);
            cout<<(char)186<<" O   O "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<" O   O "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)186<<" O   O "<<(char)186;
            gotoxy(x1,y1++);
            cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188;
        break;
    }
}

/*
PRE: Recibe la matriz de nombres.
POST: Asigna nombres predeterminados a las maquinas.
*/
void nombrar_maquinas(char NombreJugador1[10][20])
{
    strcpy(NombreJugador1[1],"BOT1");
    strcpy(NombreJugador1[2],"BOT2");
    strcpy(NombreJugador1[3],"BOT3");
    strcpy(NombreJugador1[4],"BOT4");
    strcpy(NombreJugador1[5],"BOT5");
    strcpy(NombreJugador1[6],"BOT6");
    strcpy(NombreJugador1[7],"BOT7");
    strcpy(NombreJugador1[8],"BOT8");
    strcpy(NombreJugador1[9],"BOT9");
}

/*
PRE: Recibe la matriz de nombres, la opcion elegida por el jugador en el menu y el tope, que es la cantidad de nombres.
POST: Pide al usuario ingresar la cantidad de jugadores y los nombres de los jugadores y/o maquinas.
*/
int NombreYRonda(char NombreJugador1[10][20], int opcion, int *tope)
{
    int NumeroRondas;
    int nombre_maquinas=1;
    *tope=0;
    system("cls");

    recuadro(10,3,130,15,11,0);
    recuadro(10,3,130,2,11,0);

    gotoxy(55,4);
    cout<<"LEVEN ANCLAS, ES HORA DE ZARPAR MARINEROS."<<endl;

    if((opcion==1) || (opcion==3) || (opcion==6))
    {
        *tope=2;
        if(opcion==3)
        {
            gotoxy(20,7);
            cout<<"QUIERE NOMBRAR A LAS MAQUINAS? (1 =  SI || 0 = NO)";
            gotoxy(20,9);
            cin>>nombre_maquinas;
            while(nombre_maquinas>1 || nombre_maquinas<0)
            {
                gotoxy(20,7);
                cout<<"                                                         ";
                gotoxy(20,7);
                cout<<"(1 =  SI || 0 = NO)";
                gotoxy(20,9);
                cin>>nombre_maquinas;
            }
        }
    }
    else if(opcion == 2)
    {
        gotoxy(20,7);
        cout<<"INGRESE CUANTOS JUGADORES VAN A JUGAR";
        gotoxy(20,9);
        cin>>*tope;
        while(*tope>10 || *tope<3)
        {
            gotoxy(20,9);
            cout<<"                    ";
            gotoxy(20,7);
            cout<<"SOLO PUEDE HABER ENTRE 3 Y 10 JUGADORES";
            gotoxy(20,9);
            cin>>*tope;
        }
    }
    else
    {
        gotoxy(20,7);
        cout<<"INGRESE CONTRA CUANTAS MAQUINAS QUIERE JUGAR";
        gotoxy(20,9);
        cin>>*tope;
        while(*tope>9 || *tope<2)
        {
            gotoxy(20,9);
            cout<<"                    ";
            gotoxy(20,7);
            cout<<"SOLO PUEDE HABER ENTRE 2 Y 9 MAQUINAS";
            gotoxy(20,9);
            cin>>*tope;
        }
        *tope=*tope+1;

        gotoxy(20,7);
        cout<<"QUIERE NOMBRAR A LAS MAQUINAS? (1 =  SI || 0 = NO)";
        gotoxy(20,9);
        cin>>nombre_maquinas;
        while(nombre_maquinas>1 || nombre_maquinas<0)
        {
            gotoxy(20,9);
            cout<<"                                                         ";
            gotoxy(20,7);
            cout<<"(1 =  SI || 0 = NO)";
            gotoxy(20,9);
            cin>>nombre_maquinas;
        }
    }
    int i = 0;
    if(opcion==1||opcion==3||opcion==6)
    {
        gotoxy(20,7);
        cout<<"INGRESEN SUS NOMBRES CADETES (MAXIMO 20 CARACTERES)."<<endl;
        while(i<*tope)
        {
            gotoxy(20,9);
            cout<<"                    ";
            gotoxy(20,9);
            cin>>NombreJugador1[i];
            i++;
            if(nombre_maquinas==0)
            {
                i=(*tope);
            }
        }
        gotoxy(20,12);
        cout<<"CUANTAS RONDAS SE ANIMAN A JUGAR?: "<<endl;
        gotoxy(20,14);
        cin>>NumeroRondas;
    }
    else
    {
        gotoxy(20,11);
        cout<<"INGRESEN SUS NOMBRES CADETES (MAXIMO 20 CARACTERES)."<<endl;
        while(i<*tope)
        {
            gotoxy(20,13);
            cout<<"                    ";
            gotoxy(20,13);
            cin>>NombreJugador1[i];
            i++;
            if(nombre_maquinas==0)
            {
                i=(*tope);
            }
        }
        gotoxy(20,15);
        cout<<"CUANTAS RONDAS SE ANIMAN A JUGAR?: "<<endl;
        gotoxy(20,17);
        cin>>NumeroRondas;
    }

    gotoxy(60,19);
    system("pause");

    return NumeroRondas;
}

/*
PRE: Recibe el numero de rondas.
POST: Evalua si la cantidad de rondas a jugar ingresada por el usuario es menor a 1, y si lo es le pide al usuario que ingrese el numero de rondas de nuevo.
*/
int ControlRondas (int NumeroRondas){
    while(NumeroRondas<1)
    {
        system("cls");
        recuadro(10,3,130,8,11,0);
        recuadro(10,3,130,2,11,0);
        gotoxy(45,4);
        cout<<"MARINEROS DEBEN INGRESAR UNA CANTIDAD DE RONDAS MAYOR A 0.";
        gotoxy(20,7);
        cout<<"INGRESEN NUEVAMENTE LA CANTIDAD DE RONDAS: ";
        gotoxy(20,9);
        cin>>NumeroRondas;
    }

    return NumeroRondas;
}

/*
PRE: Recibe la ronda actual, los puntos ganados, el nombre del jugador, la tirada, el valor del dado y la opcion elegida por el usuario.
POST: Muestra un recuadro con el nombre, la ronda, los puntos, las tiradas realizadas, y los objetivos cumplidos.
*/
void TurnosJugadores (int RondaAc,int GananPuntos,char nombrejugador[10][20],int i,int Tirada, int ValorDado[], int opcion)
{
    if(opcion == 1 || opcion == 2 || opcion == 6 || ((opcion == 3 || opcion == 4) && i==0))
    {
        system("cls");
        recuadro(10,3,130,41,11,0);
        recuadro(10,3,130,2,11,0);
        if(opcion==1)
        {
            gotoxy(65,4);
            cout<<"MODO MARINERO VS MARINERO.";
        }
        else if(opcion==2)
        {
            gotoxy(65,4);
            cout<<"MODO MARINERO VS MARINEROS.";
        }
        else if(opcion==3)
        {
            gotoxy(65,4);
            cout<<"MODO MARINERO VS MAQUINA.";
        }
        else if(opcion==4)
        {
            gotoxy(65,4);
            cout<<"MODO MARINERO VS MAQUINAS.";
        }
        else if(opcion==6)
        {
            gotoxy(65,4);
            cout<<"MODO SIMULADO.";
        }
        gotoxy(20,7);
        cout<<"TURNO DE: "<<nombrejugador[i];
        gotoxy(65,7);
        cout<<"RONDA NUMERO: "<<RondaAc;
        gotoxy(100,7);
        cout<<"ORO ADQUIRIDO: "<<GananPuntos<<" PUNTOS";
        gotoxy(11,8);
        cout<<"_________________________________________________________________________________________________________________________________";
        gotoxy(20,10);
        cout<<"TIRADA ACTUAL: "<<Tirada<<endl;
        gotoxy(11,11);
        cout<<"_________________________________________________________________________________________________________________________________";
        gotoxy(20,30);
        cout<<"|    OBJETIVOS    |";
        gotoxy(20,31);
        cout<<"-------------------";
        if(ValorDado[0]==6)
        {
            gotoxy(20,32);
            cout<<"| BARCO:      | X |";
        }
        else
        {
            gotoxy(20,32);
            cout<<"| BARCO:      | - |";
        }
        if(ValorDado[1]==5)
        {
            gotoxy(20,33);
            cout<<"| CAPITAN:    | X |";
        }
        else
        {
            gotoxy(20,33);
            cout<<"| CAPITAN:    | - |";
        }
        if(ValorDado[2]==4)
        {
            gotoxy(20,34);
            cout<<"| TRIPULACION:| X |";
        }
        else
        {
            gotoxy(20,34);
            cout<<"| TRIPULACION:| - |";
        }
        gotoxy(20,35);
        cout<<"-------------------";
        gotoxy(11,27);
        cout<<"_________________________________________________________________________________________________________________________________";
    }
}

/*
PRE: Recibe una lista y su tamaño.
POST: Inicializa la lista en 0.
*/
void poner_en_cero(int lista[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        lista[i]=0;
    }
}

/*
PRE: Recibe el valor del dado, el vector de tiradas, la cantidad de dados, los puntos y el numero de jugador.
POST: Suma los puntos al jugador si cumple con las condiciones de haber obtenido un 6-5-4, y lo carga al vector de puntos del jugador.
*/
int SumarPuntos(int ValorDado[], int vector_tirada[], int Dados, int ListaPuntos[], int jugador)
{
    int suma=0;
    if(ValorDado[0]==6 && ValorDado[1]==5 && ValorDado[2]==4)
    {
        for(int i=0;i<Dados;i++)
        {
            if(vector_tirada[i]!=0)
            {
                suma+=vector_tirada[i];
            }
        }
    }
    ListaPuntos[jugador]+=suma;
    return suma;
}

/*
PRE: Recibe el valor del dado, la cantidad de dados, los puntos, el numero de jugador, la opcion elegida por el usuario en el menu y la tirada actual.
POST: Si la opcion de jugada es contra la maquina, y el turno es de una maquina, calcula los puntos obtenidos por esta de forma aleatoria entre 2 y 12.
      Si el turno es de un jugador obtiene los valores de los dados de forma aleatoria segun la cantidad de dados restantes,
      y si los dados forman 6-5-4 se resta la cantidad de dados segun cuantos se obtengan (6 resta uno, 6-5 resta dos, 6-5-4 resta tres).
*/
int ObtenerDados(int ValorDado[],int *Dados,int ListaPuntos[],int jugador,int opcion,int *TiradaActual)
{
    int suma=0;
    int obtiene_puntos;
    int vector_tirada[*Dados];
    poner_en_cero(vector_tirada,*Dados);
    int i;
    int y1,x1;
    int valordedado;
    srand(time(0));

    y1=18,x1=20;

    if((opcion==3 || opcion==4) && jugador!=0)
    {
        obtiene_puntos=rand()%(2);
        {
            if(obtiene_puntos==1)
            {
                suma=(rand()%(12-2+1)+2);
                ListaPuntos[jugador]+=suma;
            }
            else
            {
                suma=0;
                ListaPuntos[jugador]+=suma;
            }
        }
        *TiradaActual=3;
    }
    else if(((opcion==3 || opcion==4) && jugador==0) || (opcion == 1) || (opcion == 2) || (opcion == 6))
    {
        for(i=0;i<*Dados;i++)
        {
            if(opcion==6)
            {
                gotoxy(18,15);
                cout<<"VALOR DEL DADO: ";
                cin>>valordedado;
            }
            else
            {
                valordedado=1+rand()%(7-1);
            }
            switch(valordedado)
            {
                case 1:
                    imprimir_dados(valordedado,x1,y1);
                    y1=18;
                    x1=x1+10;
                break;
                case 2:
                    imprimir_dados(valordedado,x1,y1);
                    y1=18;
                    x1=x1+10;
                break;
                case 3:
                    imprimir_dados(valordedado,x1,y1);
                    y1=18;
                    x1=x1+10;
                break;
                case 4:
                    imprimir_dados(valordedado,x1,y1);
                    y1=18;
                    x1=x1+10;
                break;
                case 5:
                    imprimir_dados(valordedado,x1,y1);
                    y1=18;
                    x1=x1+10;
                break;
                case 6:
                    imprimir_dados(valordedado,x1,y1);
                    y1=18;
                    x1=x1+10;
                break;
            }
            vector_tirada[i]=valordedado;
        }
        for(int j=0;j<*Dados;j++)
        {
            if(vector_tirada[j]==6 && ValorDado[0]==0)
            {
                ValorDado[0]=vector_tirada[j];
                vector_tirada[j]=0;
                j=0;
            }
            if(vector_tirada[j]==5 && ValorDado[0]==6 && ValorDado[1]==0)
            {
                ValorDado[1]=vector_tirada[j];
                vector_tirada[j]=0;
                j=0;
            }
            if(vector_tirada[j]==4 && ValorDado[0]==6 && ValorDado[1]==5 && ValorDado[2]==0)
            {
                ValorDado[2]=vector_tirada[j];
                vector_tirada[j]=0;
            }
        }

        suma=SumarPuntos(ValorDado,vector_tirada,*Dados,ListaPuntos,jugador);

        if((ValorDado[0]==6) && ((*Dados)==5))
        {
            (*Dados)=(*Dados)-1;
        }
        if((ValorDado[1]==5) && ((*Dados)==4))
        {
            (*Dados)=(*Dados)-1;
        }
        if((ValorDado[2]==4) && ((*Dados)==3))
        {
            (*Dados)=(*Dados)-1;
        }
    }

    gotoxy(60,45);
    system("pause");

    return suma;
}

/*
PRE: Recibe la lista de tiradas del jugador y el numero de jugador.
POST: Aumenta en uno la tirada del jugador.
*/
void AcumularTiradas(int ListaTiradas[], int jugador, int opcion, int suma)
{
    int tiradas;
    tiradas=1+rand()%(3);
    if((opcion==1) || (opcion==2) || (opcion == 6))
    {
        ListaTiradas[jugador]++;
    }
    else if(((opcion == 3) || (opcion == 4)) && (jugador == 0))
    {
        ListaTiradas[jugador]++;
    }
    else
    {
        if(suma==0)
        {
            ListaTiradas[jugador]+=3;
        }
        else
        {
            ListaTiradas[jugador]+=tiradas;
        }
    }
}

/*
PRE: Recibe el valor del dado, la tirada actual, la lista de puntos, el numero de jugador y los puntos obtenidos en la ronda actual
POST: Si obtuvo 6-5-4 y no es su ultima tirada le pregunta al jugador si quiere seguir consiguiendo puntos o se queda con los puntos que obtuvo.
*/
void SeguirJugando(int ValorDado[],int *TiradaActual,int ListaPuntos[],int jugador,int puntos)
{
    int Menuop=0;
    int Tecla;
    if(ValorDado[0]==6 && ValorDado[1]==5 && ValorDado[2]==4 && (*TiradaActual)<3)
    {
        Menuop=2;
        bool repite=true;
        do{
            system("cls");
            recuadro(10,3,130,12,11,0);
            recuadro(10,3,130,2,11,0);
            gotoxy(65,4);
            cout<<"TIENE "<<puntos<<" MONEDAS DE ORO."<<endl;
            gotoxy(20,7);
            cout<<"DESEA SEGUIR JUGANDO O QUEDARSE CON LAS MONEDAS QUE YA TIENE?"<<endl;
            gotoxy(20,9);
            cout<<"SEGUIR JUGANDO."<<endl;
            gotoxy(20,10);
            cout<<"QUEDARSE CON LAS MONEDAS."<<endl;

            gotoxy(16,7+Menuop);cout<<"=>";
            do{
                Tecla=getch();
            }while(Tecla!=TECLA_ARRIBA&&Tecla!=TECLA_ABAJO&&Tecla!=ENTER);

            switch (Tecla)
            {
            case TECLA_ARRIBA:
            Menuop--;
            if (Menuop<2)
            {
            Menuop=3;
            }
            break;
            case TECLA_ABAJO:
            Menuop++;
            if (Menuop>3)
            {
            Menuop=2;
            }
            break;
            case ENTER:
            repite=false;
            break;
            }
       }while(repite);
    }

    if(Menuop==2)
    {
        ListaPuntos[jugador]=ListaPuntos[jugador]-puntos;
    }
    else if(Menuop==3)
    {
        *TiradaActual=3;
    }

}

/*
PRE: Recibe la matriz de nombres, el numero del siguiente jugador, la lista de puntos, la lista de tiradas, la ronda actual (o la proxima),
     y la opcion elegida por el usuario en el menu.
POST: Cada vez que termina el turno de un jugador muestra un cartel con el siguiente jugador, sus puntos y tiradas.
*/
void EntreTurnos(char NombreJugador[10][20], int i, int ListaPuntos[], int ListaTiradas[], int RondAc, int opcion)
{
    system("cls");
    recuadro(10,3,130,12,11,0);
    gotoxy(20,5);
    cout<<"RONDA: "<<RondAc<<endl;
    gotoxy(20,7);
    cout<<"PROXIMO TURNO: "<<NombreJugador[i]<<endl;
    gotoxy(20,9);
    cout<<"PUNTAJE "<<NombreJugador[i]<<": "<<ListaPuntos[i]<<endl;
    gotoxy(20,11);
    cout<<"TIRADAS ACUMULADAS: "<<ListaTiradas[i]<<endl;
    gotoxy(20,18);
    system("pause");
}

/*
PRE: Recibe la matriz de nombres, los puntos, el numero de jugador y la opcion elegida por el jugador en el menu.
POST: Muestra un cartel mostrando los puntos obtenidos por el bot.
*/
void ResultadosBots(char NombreJugador[10][20],int ListaPuntos[],int jugador,int opcion,int suma)
{
    if(opcion == 3 || opcion == 4)
    {
        if(jugador!=0)
        {
            system("cls");
            recuadro(10,3,130,12,11,0);
            gotoxy(20,7);
            cout<<"EL BOT: "<<NombreJugador[jugador]<<endl;
            gotoxy(20,9);
            cout<<"OBTUVO "<<suma<<" MONEDAS"<<endl;
            gotoxy(20,11);
            cout<<"ACUMULO EN TOTAL: "<<ListaPuntos[jugador]<<" MONEDAS DE ORO"<<endl;
            gotoxy(20,18);
            system("pause");
        }
    }
}

/*
PRE: Recibe el vector de ganador, el mayor puntaje y la variable empate.
POST: Si empate es igual a 1 imprime un cartel diciendo que hubo un empate, sino muestra el ganador y los puntos que obtuvo,
      y si nadie obtuvo puntos muestra un cartel diciendo que nadie gana.
*/
void ImprimirGanador(char ganador[],int mayor, int empate, int tiradas_ganador)
{
    system("cls");
    recuadro(10,3,130,12,11,0);

    if(empate==1)
    {
        gotoxy(20,7);
        cout<<"HUBO UN EMPATE DE CAPITANES"<<endl;
        gotoxy(20,9);
        cout<<"OBTUBIERON "<<mayor<<" MONEDAS DE ORO"<<endl;
        gotoxy(20,11);
        cout<<"CON UNA CANTIDAD DE "<<tiradas_ganador<<" TIRADAS"<<endl;
    }
    else
    {
        if(mayor>0)
        {
            gotoxy(20,7);
            cout<<"FELICIDADES "<<ganador<<" ERES EL CAPITAN MAS EXITOSO."<<endl;
            gotoxy(20,9);
            cout<<"TU BOTIN FUE DE "<<mayor<<" MONEDAS DE ORO"<<endl;
            gotoxy(20,11);
            cout<<"CON UNA CANTIDAD DE "<<tiradas_ganador<<" TIRADAS"<<endl;
        }
        else
        {
            gotoxy(20,7);
            cout<<"NINGUN CAPITAN OBTUVO PUNTOS."<<endl;
            gotoxy(20,9);
            cout<<"NADIE GANA."<<endl;
        }
    }


    gotoxy(20,18);
    system("pause");
}

/*
PRE: Recibe el mayor puntaje, el venctor de ganador, el puntaje record, el numero del capitan record, las tiradas del record y las tiradas del ganador.
POST: si el mayor puntaje obtenido es mayor al puntaje record, asigna a record el nuevo puntaje, al nombre del capitan record el nuevo nombre y la nueva cantidad de tiradas.
*/
void ObtenerPuntajeRecord(int mayor, char ganador[], int *Record, char CapitanRecord[], int *tiradas_record, int tiradas_ganador)
{
    if(mayor>*Record)
    {
        *Record=mayor;
        strcpy(CapitanRecord,ganador);
        *tiradas_record=tiradas_ganador;
    }
}

/*
PRE: Recibe la lista de puntos, la matriz de nombres, la lista de tiradas, el tope, el record, el capitan record, las tiradas record y la opcion elegida por el usuario en el menu.
POST: Determina el ganador y pasa los mayores puntos obtenidos y su nombre y tiradas a la funcion obtenerpuntajerecord para calcular el nuevo record.
*/
void DeterminarGanador(int ListaPuntos[], char NombreJugador[10][20], int ListaTiradas[], int tope, int *Record, char CapitanRecord[], int *tiradas_record, int opcion)
{
    int i;
    int tiradas_ganador;
    int mayor=0;
    int empate=0;
    char ganador[20];

    for(i=0;i<tope;i++)
    {
        if(i==0)
        {
            mayor=ListaPuntos[i];
            strcpy(ganador,NombreJugador[i]);
            tiradas_ganador=ListaTiradas[i];
        }
        else
        {
            if(ListaPuntos[i]>mayor)
            {
                mayor=ListaPuntos[i];
                strcpy(ganador,NombreJugador[i]);
                tiradas_ganador=ListaTiradas[i];
            }
            else if(ListaPuntos[i]==mayor && ListaPuntos[i]!=0)
            {
                if(ListaTiradas[i]<tiradas_ganador)
                {
                    mayor=ListaPuntos[i];
                    strcpy(ganador,NombreJugador[i]);
                    tiradas_ganador=ListaTiradas[i];
                }
                else if(ListaTiradas[i]==tiradas_ganador)
                {
                    empate=1;
                }
            }
        }
    }
    ImprimirGanador(ganador,mayor,empate,tiradas_ganador);
    if((opcion==1) || (opcion==2) || ((opcion == 3 || opcion == 4) && (strcmp(ganador,NombreJugador[0])==0)))
    {
        ObtenerPuntajeRecord(mayor,ganador,Record,CapitanRecord,tiradas_record,tiradas_ganador);
    }
}

/*
PRE: Recibe el record, el nombre del capitan record y las tiradas record.
POST: Muestra el record obtenido, el nombre de quien lo obtuvo y en cuantas tiradas lo obtuvo.
*/
void mostrar_record(int Record, char CapitanRecord[], int tiradas_record)
{
    system("cls");
    recuadro(10,3,130,12,11,0);

    gotoxy(20,7);
    cout<<"RECORD: "<<Record<<" MONEDAS DE ORO"<<endl;
    gotoxy(20,9);
    cout<<"CAPITAN: "<<CapitanRecord<<endl;
    gotoxy(20,11);
    cout<<"TIRADAS: "<<tiradas_record<<endl;

    gotoxy(20,18);
    system("pause");
}

#endif // FUNCIONCAPITAN_H_INCLUDED
