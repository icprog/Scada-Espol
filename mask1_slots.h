//###############################################################
//# mask1_slots.h for ProcessViewServer created: mié feb 19 20:44:33 2014
//# please fill out these slots
//# here you find all possible events
//# Yours: Lehrig Software Engineering
//###############################################################

// todo: uncomment me if you want to use this data aquisiton
// also uncomment this classes in main.cpp and pvapp.h
// also remember to uncomment rllib in the project file
extern rlModbusClient     modbus;
extern rlDataAcquisition *acqui;
//extern rlSiemensTCPClient siemensTCP;
//extern rlPPIClient        ppi;
#include<sys/socket.h>
#include<arpa/inet.h> //inet_addr

//////////////////// NUEVO CODIGO AÑADIDO /////////////////////////
int getTemperatura(char *ip, int port )
{
    int socket_desc;
    struct sockaddr_in server;
    int temperatura = 0;
    int k = 0;
    char *p=NULL;
    char *message , server_reply[2000]="0";
     
    //Create socket
    socket_desc = socket(AF_INET , SOCK_STREAM , 0);
    if (socket_desc == -1)
    {
        printf("Could not create socket");
    }
         

    //server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_addr.s_addr = inet_addr(ip);
    server.sin_family = AF_INET;
    server.sin_port = htons( port );
 
    //Connect to remote server
    if (connect(socket_desc , (struct sockaddr *)&server , sizeof(server)) < 0)
    {
        puts("connect error");
        return 1;
    }
     
    puts("Connected\n");
     
    //Send some data
    message = "GET / HTTP/1.1\r\n\r\n";
        
    if( send(socket_desc , message , strlen(message) , 0) < 0)
    {
        puts("Send failed");
        return 1;
    }
    //puts("Data Send\n");
     fflush(stdin);
    //Receive a reply from the server
    if( read(socket_desc, server_reply , 2000 ) < 0)
    {
        puts("recv failed");
    }
   
    p = strtok(server_reply , "|") ;
    while(p) {
        if ( k == 1){
            temperatura = atoi(p);
            //puts(p);
        }
       
        p = strtok( NULL , "|") ;
        k++;
    }
    
    return temperatura;
}
///////////////////////////////////////////////////////////////////

static int counter(int offset){
   return modbus.readByte(offset,1)*256 + modbus.readByte(offset,0);

}

typedef struct // (todo: define your data structure here)
{
    int r;
}
DATA;
bool bandera_pushButton_1 = false;
bool bandera_pushButton_2 = false;
bool bandera_pushButton_3 = false;
bool bandera_pushButton_4 = false;
bool bandera_pushButton_5 = false;
int r=0;

static int slotInit(PARAM *p, DATA *d)
{
  if(p == NULL || d == NULL) return -1;
  memset(d,0,sizeof(DATA));
  pvDownloadFile(p,"on.png");
  pvDownloadFile(p,"off.png");
  pvDownloadFile(p,"ESPOL.png");

  // Set images
  pvSetPixmap(p,pushButton_1,"on.png");
  pvSetPixmap(p,pushButton_2,"on.png");
  pvSetPixmap(p,pushButton_3,"on.png");
  pvSetPixmap(p,pushButton_4,"on.png");
  pvSetPixmap(p,pushButton_5,"on.png");

  return 0;
}

static int slotNullEvent(PARAM *p, DATA *d)
{

  if(p == NULL || d == NULL) return -1;
  //r= (rand()%10)+10;
  //getTemperatura(IP_DISPOSITIVO, PUERTO );
  r = getTemperatura("127.0.0.1", 6413 ); // ESTÁ EN LOCALHOST PERO SE DEBE REEMPLAZAR POR LA IP DEL BEAGLEBONE DEL AULA A ACCEDER
  pvPrintf(p,label2,"%d",r); // COLOCA LA TEMPERATURA LEIDA DESDE EL SERVIDOR REMOTO (DEBERA SER DEL BEAGLEBONE)
  
  //r=(rand()%10)+10;
  pvPrintf(p,label3,"%d",r);
  //r=;
  pvPrintf(p,label4,"%d",counter(modbusdaemon_LIFE_COUNTER_BASE));
  //r=;
  pvPrintf(p,label5,"%d",counter(modbusdaemon_READ_ERROR_COUNT_BASE));
  //r=;
  pvPrintf(p,label6,"%d",counter(modbusdaemon_WRITE_ERROR_COUNT_BASE));

  return 0;
}

static int slotButtonEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;

  if (id == pushButton_1){
    bandera_pushButton_1 = ! bandera_pushButton_1;
    if (bandera_pushButton_1){
        pvSetPixmap(p,pushButton_1,"off.png");
        pvSetText(p,label2,"");
       }
    else
      pvSetPixmap(p,pushButton_1,"on.png");

  }

  if (id == pushButton_2){
      bandera_pushButton_2 = ! bandera_pushButton_2;
      if (bandera_pushButton_2){
        pvSetPixmap(p,pushButton_2,"off.png");
      pvSetText(p,label3,"");}
      else
        pvSetPixmap(p,pushButton_2,"on.png");


  }

  if (id == pushButton_3){
      bandera_pushButton_3 = ! bandera_pushButton_3;
      if (bandera_pushButton_3){
        pvSetPixmap(p,pushButton_3,"off.png");
      pvSetText(p,label4,"");}
      else
        pvSetPixmap(p,pushButton_3,"on.png");
  }

  if (id == pushButton_4){
      bandera_pushButton_4 = ! bandera_pushButton_4;
      if (bandera_pushButton_4){
        pvSetPixmap(p,pushButton_4,"off.png");
      pvSetText(p,label5,"");}
      else
        pvSetPixmap(p,pushButton_4,"on.png");
  }

  if (id == pushButton_5){
      bandera_pushButton_5 = ! bandera_pushButton_5;
      if (bandera_pushButton_5){
        pvSetPixmap(p,pushButton_5,"off.png");
      pvSetText(p,label6,"");}
      else
        pvSetPixmap(p,pushButton_5,"on.png");
  }

  return 0;

}

static int slotButtonPressedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  if(p == NULL || id == 20 || d == NULL) return 3;
  return 0;
}

static int slotButtonReleasedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotTextEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotSliderEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotCheckboxEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotRadioButtonEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotGlInitializeEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlPaintEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlResizeEvent(PARAM *p, int id, DATA *d, int width, int height)
{
  if(p == NULL || id == 0 || d == NULL || width < 0 || height < 0) return -1;
  return 0;
}

static int slotGlIdleEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotTabEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotTableTextEvent(PARAM *p, int id, DATA *d, int x, int y, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || text == NULL) return -1;
  return 0;
}

static int slotTableClickedEvent(PARAM *p, int id, DATA *d, int x, int y, int button)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || button < 0) return -1;
  return 0;
}

static int slotSelectionEvent(PARAM *p, int id, DATA *d, int val, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || text == NULL) return -1;
  return 0;
}

static int slotClipboardEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotRightMouseEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  //pvPopupMenu(p,-1,"Menu1,Menu2,,Menu3");
  return 0;
}

static int slotKeyboardEvent(PARAM *p, int id, DATA *d, int val, int modifier)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || modifier < -1000) return -1;
  return 0;
}

static int slotMouseMovedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMousePressedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseReleasedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseOverEvent(PARAM *p, int id, DATA *d, int enter)
{
  if(p == NULL || id == 0 || d == NULL || enter < -1000) return -1;
  return 0;
}

static int slotUserEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}
