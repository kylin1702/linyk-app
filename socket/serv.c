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
#define PORT 17909
  
/*����ָ��*/
void *thread(int vargp);  
void *threadsend();  
void *threadrecv();  

int a[10];
int i,j,k; 
int clientfd; 
struct sockaddr_in clientaddr;  


int main()  
{        /*����socket����*/
	int sockfd = socket(AF_INET, SOCK_STREAM,0);  


	if(sockfd < 0)
		{  
			perror("socket");  
			exit(1);  
		}  
	  
	struct hostent *hp;  
	struct sockaddr_in serveraddr;  

	bzero((char *)&serveraddr,sizeof(serveraddr));  
	serveraddr.sin_family = AF_INET;  
	serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);  
	serveraddr.sin_port = htons(PORT);  
        
        /*����bind�����󶨵�ַ*/
	if(bind(sockfd,(struct sockaddr *)&serveraddr,sizeof(serveraddr)) < 0)
        {  
		perror("connect");  
		exit(1);  
	}  
	  
        /*����listen��������*/

	if(listen(sockfd,10) < 0)
	{  
		perror("listen");  
		exit(1);  
	}  
  
	
	int clientlen, *connfdp;  
	clientlen = sizeof(clientaddr);  

i=0;

	while(1)
	{  
	
		connfdp = (int *)malloc(sizeof(int));   //malloc�������ڶ�̬����һ���ڴ�ռ�

		clientfd= accept(sockfd,(struct sockaddr *)&clientaddr, &clientlen); 

		a[i++]=clientfd; //����������ͻ��˵�ַ


		printf("Accepted!\n");  

		/*���������߳�*/
		pthread_t tid1,tid2; 

		pthread_create(&tid1,NULL,threadsend,&a[i]); 
		 
		pthread_create(&tid2,NULL,threadrecv,&a[i]);  
		

	}  
	EXIT_SUCCESS;  
}  

  /*send�̣߳��������ͻ���*/
void *threadsend()  
{  
	  
	int connfd =clientfd;  
	  
	int idata;

	char temp[100];  
	
	while(1)
	
	{  
			printf("server input:  ");  
			fgets(temp,100,stdin);  
		
		for(j=0;j<i;j++)
		{
				send(a[j],temp,100,0);  
				printf("    by server\n");  
		}
	}
return NULL;  

}  

  /*receive�̣߳����ܿͻ��˷�������Ϣ*/
void *threadrecv()  
{  

	char stemp[100];
	 
	char ipAddr[INET_ADDRSTRLEN];//������ʮ���Ƶĵ�ַ

	int connfd = clientfd;  

	int clientlen, *connfdp; 
	 
	clientlen = sizeof(clientaddr); 



	while(1)
	{ 
	 
		int idata = 0; 
		 
		idata = recv(connfd,stemp,100,0);  

		if(idata > 0)
		{  
		    	getpeername(connfd, (struct sockaddr *)&clientaddr, &clientlen); 

			printf("%s:\n%s\n",inet_ntop(AF_INET, &clientaddr.sin_addr, ipAddr, sizeof(ipAddr)),stemp);  

			memset(stemp,0,100);
		}  
               /* else 
                {
			printf("a client had left");
			close(sockfd);
 			exit(0);		
		}*/
	}  
	return NULL;  
}  

