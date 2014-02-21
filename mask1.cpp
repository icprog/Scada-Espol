////////////////////////////////////////////////////////////////////////////
//
// show_mask1 for ProcessViewServer created: mié feb 19 20:44:33 2014
//
////////////////////////////////////////////////////////////////////////////
#include "pvapp.h"

// _begin_of_generated_area_ (do not edit -> use ui2pvc) -------------------

// our mask contains the following objects
enum {
  ID_MAIN_WIDGET = 0,
  pushButton,
  label,
  label_2,
  label_3,
  label_4,
  label_5,
  label_6,
  label_7,
  label_8,
  pushButton_1,
  pushButton_2,
  pushButton_3,
  pushButton_4,
  pushButton_5,
label2,label3,label4,label5,label6,
  pushButton_6,
  label_9,
  pushButton_7,
  pushButton_8,
  pushButton_9,
  pushButton_10,
  ID_END_OF_WIDGETS
};

  static const char *toolTip[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const char *whatsThis[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const int widgetType[ID_END_OF_WIDGETS+1] = {
  0,
  TQPushButton,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
      TQLabel,
      TQLabel,
      TQLabel,
      TQLabel,
      TQLabel,
  TQPushButton,
  TQLabel,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  -1 };

static int generated_defineMask(PARAM *p)
{
  int w,h,depth;

  if(p == NULL) return 1;
  w = h = depth = strcmp(toolTip[0],whatsThis[0]);
  if(widgetType[0] == -1) return 1;
  if(w==h) depth=0; // fool the compiler
  pvStartDefinition(p,ID_END_OF_WIDGETS);

  pvQLabel(p,label,ID_MAIN_WIDGET);
  pvSetGeometry(p,label,10,10,741,41);
  pvSetText(p,label,pvtr("Sistema SCADA para aires acondicionados ESPOL"));
  pvSetFont(p,label,"Umpush",22,1,0,0,0);

  pvQLabel(p,label_2,ID_MAIN_WIDGET);
  pvSetGeometry(p,label_2,60,140,66,17);
  pvSetText(p,label_2,pvtr("Aula 001"));
  pvSetFont(p,label_2,"Ubuntu",11,0,0,0,0);

  pvQLabel(p,label_3,ID_MAIN_WIDGET);
  pvSetGeometry(p,label_3,60,210,66,17);
  pvSetText(p,label_3,pvtr("Aula 002"));
  pvSetFont(p,label_3,"Ubuntu",11,0,0,0,0);

  pvQLabel(p,label_4,ID_MAIN_WIDGET);
  pvSetGeometry(p,label_4,60,280,66,17);
  pvSetText(p,label_4,pvtr("Aula 003"));
  pvSetFont(p,label_4,"Ubuntu",11,0,0,0,0);

  pvQLabel(p,label_5,ID_MAIN_WIDGET);
  pvSetGeometry(p,label_5,60,350,66,17);
  pvSetText(p,label_5,pvtr("Aula 004"));
  pvSetFont(p,label_5,"Ubuntu",11,0,0,0,0);

  pvQLabel(p,label_6,ID_MAIN_WIDGET);
  pvSetGeometry(p,label_6,60,420,66,17);
  pvSetText(p,label_6,pvtr("Aula 005"));
  pvSetFont(p,label_6,"Ubuntu",11,0,0,0,0);

  pvQLabel(p,label_7,ID_MAIN_WIDGET);
  pvSetGeometry(p,label_7,230,80,70,17);
  pvSetText(p,label_7,pvtr("ESTADO"));
  pvSetFont(p,label_7,"Ubuntu",11,0,0,0,0);

  pvQLabel(p,label_8,ID_MAIN_WIDGET);
  pvSetGeometry(p,label_8,340,80,120,17);
  pvSetText(p,label_8,pvtr("TEMPERATURA"));
  pvSetFont(p,label_8,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,pushButton_1,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_1,210,120,97,51);
  pvSetFont(p,pushButton_1,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,pushButton_2,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_2,210,190,97,51);
  pvSetFont(p,pushButton_2,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,pushButton_3,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_3,210,260,97,51);
  pvSetFont(p,pushButton_3,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,pushButton_4,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_4,210,330,97,51);
  pvSetFont(p,pushButton_4,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,pushButton_5,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_5,210,400,97,51);
  pvSetFont(p,pushButton_5,"Ubuntu",11,0,0,0,0);

  pvQLabel(p,label2,ID_MAIN_WIDGET);
  pvSetGeometry(p,label2,380,140,66,17);
  pvSetFont(p,label2,"Ubuntu",11,0,0,0,0);
  pvSetText(p,label2,pvtr("--"));

  pvQLabel(p,label3,ID_MAIN_WIDGET);
  pvSetGeometry(p,label3,380,210,66,17);
  pvSetFont(p,label3,"Ubuntu",11,0,0,0,0);
  pvSetText(p,label3,pvtr("--"));

  pvQLabel(p,label4,ID_MAIN_WIDGET);
  pvSetGeometry(p,label4,380,280,66,17);
  pvSetFont(p,label4,"Ubuntu",11,0,0,0,0);
  pvSetText(p,label4,pvtr("--"));

  pvQLabel(p,label5,ID_MAIN_WIDGET);
  pvSetGeometry(p,label5,380,350,66,17);
  pvSetFont(p,label5,"Ubuntu",11,0,0,0,0);
  pvSetText(p,label5,pvtr("--"));

  pvQLabel(p,label6,ID_MAIN_WIDGET);
  pvSetGeometry(p,label6,380,420,66,17);
  pvSetFont(p,label6,"Ubuntu",11,0,0,0,0);
  pvSetText(p,label6,pvtr("--"));

  pvQPushButton(p,pushButton_6,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_6,490,120,97,51);
  pvSetFont(p,pushButton_6,"Ubuntu",11,0,0,0,0);

  pvQLabel(p,label_9,ID_MAIN_WIDGET);
  pvSetGeometry(p,label_9,500,80,81,17);
  pvSetText(p,label_9,pvtr("Ver Historial"));
  pvSetFont(p,label_9,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,pushButton_7,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_7,490,190,97,51);
  pvSetFont(p,pushButton_7,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,pushButton_8,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_8,490,260,97,51);
  pvSetFont(p,pushButton_8,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,pushButton_9,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_9,490,330,97,51);
  pvSetFont(p,pushButton_9,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,pushButton_10,ID_MAIN_WIDGET);
  pvSetGeometry(p,pushButton_10,490,400,97,51);
  pvSetFont(p,pushButton_10,"Ubuntu",11,0,0,0,0);


  pvEndDefinition(p);
  return 0;
}

// _end_of_generated_area_ (do not edit -> use ui2pvc) ---------------------

#include "mask1_slots.h"

static int defineMask(PARAM *p)
{
  if(p == NULL) return 1;
  generated_defineMask(p);
  // (todo: add your code here)
  return 0;
}


static int showData(PARAM *p, DATA *d)
{
  if(p == NULL) return 1;
  if(d == NULL) return 1;
  return 0;
}

static int readData(DATA *d) // from shared memory, database or something else
{
  if(d == NULL) return 1;
  // (todo: add your code here)
  return 0;
}


int show_mask1(PARAM *p)
{
  DATA d;
  char event[MAX_EVENT_LENGTH];
  char text[MAX_EVENT_LENGTH];
  char str1[MAX_EVENT_LENGTH];
  int  i,w,h,val,x,y,button,ret;
  float xval, yval;

  defineMask(p);
  //rlSetDebugPrintf(1);
  if((ret=slotInit(p,&d)) != 0) return ret;
  readData(&d); // from shared memory, database or something else
  showData(p,&d);
  pvClearMessageQueue(p);
  while(1)
  {
    pvPollEvent(p,event);
    switch(pvParseEvent(event, &i, text))
    {
      case NULL_EVENT:
        readData(&d); // from shared memory, database or something else
        showData(p,&d);
        if((ret=slotNullEvent(p,&d)) != 0) return ret;
        break;
      case BUTTON_EVENT:
        if(trace) printf("BUTTON_EVENT id=%d\n",i);
        if((ret=slotButtonEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_PRESSED_EVENT:
        if(trace) printf("BUTTON_PRESSED_EVENT id=%d\n",i);
        if((ret=slotButtonPressedEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_RELEASED_EVENT:
        if(trace) printf("BUTTON_RELEASED_EVENT id=%d\n",i);
        if((ret=slotButtonReleasedEvent(p,i,&d)) != 0) return ret;
        break;
      case TEXT_EVENT:
        if(trace) printf("TEXT_EVENT id=%d %s\n",i,text);
        if((ret=slotTextEvent(p,i,&d,text)) != 0) return ret;
        break;
      case SLIDER_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("SLIDER_EVENT val=%d\n",val);
        if((ret=slotSliderEvent(p,i,&d,val)) != 0) return ret;
        break;
      case CHECKBOX_EVENT:
        if(trace) printf("CHECKBOX_EVENT id=%d %s\n",i,text);
        if((ret=slotCheckboxEvent(p,i,&d,text)) != 0) return ret;
        break;
      case RADIOBUTTON_EVENT:
        if(trace) printf("RADIOBUTTON_EVENT id=%d %s\n",i,text);
        if((ret=slotRadioButtonEvent(p,i,&d,text)) != 0) return ret;
        break;
      case GL_INITIALIZE_EVENT:
        if(trace) printf("you have to call initializeGL()\n");
        if((ret=slotGlInitializeEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_PAINT_EVENT:
        if(trace) printf("you have to call paintGL()\n");
        if((ret=slotGlPaintEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_RESIZE_EVENT:
        sscanf(text,"(%d,%d)",&w,&h);
        if(trace) printf("you have to call resizeGL(w,h)\n");
        if((ret=slotGlResizeEvent(p,i,&d,w,h)) != 0) return ret;
        break;
      case GL_IDLE_EVENT:
        if((ret=slotGlIdleEvent(p,i,&d)) != 0) return ret;
        break;
      case TAB_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("TAB_EVENT(%d,page=%d)\n",i,val);
        if((ret=slotTabEvent(p,i,&d,val)) != 0) return ret;
        break;
      case TABLE_TEXT_EVENT:
        sscanf(text,"(%d,%d,",&x,&y);
        pvGetText(text,str1);
        if(trace) printf("TABLE_TEXT_EVENT(%d,%d,\"%s\")\n",x,y,str1);
        if((ret=slotTableTextEvent(p,i,&d,x,y,str1)) != 0) return ret;
        break;
      case TABLE_CLICKED_EVENT:
        sscanf(text,"(%d,%d,%d)",&x,&y,&button);
        if(trace) printf("TABLE_CLICKED_EVENT(%d,%d,button=%d)\n",x,y,button);
        if((ret=slotTableClickedEvent(p,i,&d,x,y,button)) != 0) return ret;
        break;
      case SELECTION_EVENT:
        sscanf(text,"(%d,",&val);
        pvGetText(text,str1);
        if(trace) printf("SELECTION_EVENT(column=%d,\"%s\")\n",val,str1);
        if((ret=slotSelectionEvent(p,i,&d,val,str1)) != 0) return ret;
        break;
      case CLIPBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("CLIPBOARD_EVENT(id=%d)\n",val);
        if(trace) printf("clipboard = \n%s\n",p->clipboard);
        if((ret=slotClipboardEvent(p,i,&d,val)) != 0) return ret;
        break;
      case RIGHT_MOUSE_EVENT:
        if(trace) printf("RIGHT_MOUSE_EVENT id=%d text=%s\n",i,text);
        if((ret=slotRightMouseEvent(p,i,&d,text)) != 0) return ret;
        break;
      case KEYBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("KEYBOARD_EVENT modifier=%d key=%d\n",i,val);
        if((ret=slotKeyboardEvent(p,i,&d,val,i)) != 0) return ret;
        break;
      case PLOT_MOUSE_MOVED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_MOVE %f %f\n",xval,yval);
        if((ret=slotMouseMovedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_PRESSED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_PRESSED %f %f\n",xval,yval);
        if((ret=slotMousePressedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_RELEASED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_RELEASED %f %f\n",xval,yval);
        if((ret=slotMouseReleasedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case MOUSE_OVER_EVENT:
        sscanf(text,"%d",&val);
        if(trace) printf("MOUSE_OVER_EVENT %d\n",val);
        if((ret=slotMouseOverEvent(p,i,&d,val)) != 0) return ret;
        break;
      case USER_EVENT:
        if(trace) printf("USER_EVENT id=%d %s\n",i,text);
        if((ret=slotUserEvent(p,i,&d,text)) != 0) return ret;
        break;
      default:
        if(trace) printf("UNKNOWN_EVENT id=%d %s\n",i,text);
        break;
    }
  }
}
