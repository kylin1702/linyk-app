#include <stdlib.h>  
#include <stdio.h>  
#include <errno.h>  
#include <string.h>  
#include <unistd.h>  
#include <netdb.h>  
#include <sys/socket.h>  
#include <netinet/in.h>  
#include <sys/types.h>  
#include <arpa/inet.h>  
#include <pthread.h> 
#define MAXLINE 100;  
void *threadsend(void *vargp);  
void *threadrecv(void *vargp);  
  
int main(int argc, char *argv[])  
{  
	int *clientfdp;  
	clientfdp = (int *)malloc(sizeof(int));  
	*clientfdp = socket(AF_INET,SOCK_STREAM,0);  

	struct sockaddr_in serveraddr;  
	struct hostent *hp;  

	if (argc < 2)
	{
	   fprintf(stderr,"No IP address!\n");
	   exit(1);
	}

	bzero((char *)&serveraddr,sizeof(serveraddr));  
	serveraddr.sin_family = AF_INET;  
	serveraddr.sin_port = htons(17909);  
	serveraddr.sin_addr.s_addr = inet_addr(argv[1]);  
	  if(connect(*clientfdp,(struct sockaddr *)&serveraddr,sizeof(serveraddr)) < 0)
	  {  
		printf("connect error\n");  
		exit(1);  
	  }  
	  
	pthread_t tid1,tid2;  
	printf("connected\n");  
	while(1)
	{  
	pthread_create(&tid1,NULL,threadsend,clientfdp);  
	  
	pthread_create(&tid2,NULL,threadrecv,clientfdp);  
	}  
	  
	return EXIT_SUCCESS;

	}  

void *threadsend(void * vargp)  
{   
	int connfd = *((int *)vargp);  
	  
	int idata;  
	char temp[100];  
	while(1)
	{  
	if(connfd = *((int *)vargp))
		{
		//system("clear");  
		fgets(temp,100,stdin);  
		send(connfd,temp,100,0);  
		} 
	else

		{
		close(connfd);
		exit(0);
		}
	return NULL;  
} 
}
 
void *threadrecv(void *vargp)  
{  
	int connfd = *((int *)vargp);  
	char temp[100];   
	while(1)
	{  
		int idata = 0;  
		idata = recv(connfd,temp,100,0);  
		if(idata > 0)
		{  
		printf("server :\n%s\n",temp);  
		}  


	}
	return NULL;
}


