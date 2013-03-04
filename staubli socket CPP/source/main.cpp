//-----------------------------
//Name: Staubli socket
//Comp: Dev-C++ 4.9.9.2
//Ahthor: QIAN Yong

#include <cstdlib>
#include <iostream>
#include <winsock.h>
#include <conio.h> 
#include <windows.h>
#include <cstring>


using namespace std;
bool Exit();
bool socketinit();//initilize the socket connection
bool userpage(); //main page of the production


int main()
{
   userpage();
}
bool Exit()
{
     WSACleanup();
     exit(5);
 }

bool userpage()
{
   system("cls"); 
   int slection;
   //print the menu
   cout  <<"\n"
        <<"Plsease make a selection.\n"
        <<"\n"
        <<"*********************************************************************\n"
        <<"\n"   
        <<"*******     1.  Listening,send data to CS8C,receive data from CS8C.**\n"
        <<"\n"
        <<"*******     2.  Exit this program.                            *******\n"
        <<"\n"
        <<"*********************************************************************\n";
   cin >>slection; //Get the data of slection
   switch (slection)               
   {
          case 1:
               cout <<"Starting this procedure.\n";
               socketinit();
               break;
          case 2:
               cout <<"Exiting this program.\n";
               Exit();
               break;
          default:
                  cout <<"Please input your selection.\n";
   }               
 }
 
bool socketinit()
{
     int send_result,rev_result;
     char *data_deal="(Ready)"; //define the string which is ready to send via socket
    int data_rev;
     int USERPORT=2000 ; //define the socket client portnumber
     char * HOST_IP_ADDR;
     char buf[128]; //define the buffer data array to deal with the sending string
     SOCKET s_socketlistener;
     SOCKET S_Connected;
     struct sockaddr_in client;
     struct sockaddr_in server;
     int namelen,pklen;
     int status;
     WSADATA wsd;
     if((status=WSAStartup(MAKEWORD(2,2),&wsd))!=0)
     {
        perror("wsastartup() failed:");
        exit(1);
        userpage();
     }
     if((s_socketlistener=socket(AF_INET,SOCK_STREAM,0))< 0)
     {
        perror("socket failed :");
        exit(1);
        userpage();
     }
     ZeroMemory(&server,sizeof(server));
     server.sin_family=AF_INET;
     server.sin_port=htons(USERPORT);
     server.sin_addr.s_addr=INADDR_ANY;
     if(bind(s_socketlistener,(struct sockaddr *)&server,sizeof(server))<0)
     {
        perror("bind() failed:");
        exit(2);
        userpage();
     }
     if(listen(s_socketlistener,4)!=0)
     {
        perror("listen()failed :");
        exit(3);
        userpage();
     }
     if((S_Connected=accept(s_socketlistener,(struct sockaddr*)&client,&namelen))==-1)
     {                                    
        perror("accept()failed:");
        exit(4);
        userpage();
     }
     cout <<"accept() successful!\n";
     send(S_Connected,data_deal,(int)strlen(data_deal),0);
     cout <<"DATA send successful!.\n";     
     Sleep(1000);
     rev_result=recv(S_Connected,buf,sizeof(buf)-1,0);
     if (rev_result!= false)
     {
     cout <<"The received data is:\n " ;
     cout <<buf;
     }
     else
     {
     cout <<"Receive failed" ;
     system("PAUSE");
     }
     Sleep(30000);
     
}
