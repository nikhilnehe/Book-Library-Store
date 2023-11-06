#include<stdio.h>
#include<string.h>

typedef struct Book //store similar data of multiple entities.
{
	int id ;
	char bname[20];
	char author[20];
	double price;
	double rating;
	
}Book;

void storevalue(Book*,int);// declaration
void display(Book*,int);//
void search(Book*,int);//
void searchbyname(Book*,char*);
void updateprice(Book*,int);//
void updaterating(Book*,double);//
void delet(Book*,int);//
int maxprice(Book*);//
int  maxrating(Book*);//
void topthreeprice(Book*);//
void topthreerating(Book*);//

int n=6; //globle declare

void main()
{
	int exit;
	Book arr[10];
//	 printf("------------------- Book Detail-----------------------\n");
//	 printf("How Many Book You Want To Add ::\n");
//	 scanf("%d",&n); 
	 storevalue(arr,n);
   
	do // pahle execute hoga bad may condition check karega.
	{
		 printf("--------------------Diffrant Choice---------------------\n");
	     printf("1:Display\n2:Search\n3:Update\n4:Delete\n5:Maximum\n6:Top 3\n");
	     printf("----------------------#***#-----------------------------\n");
	
	     int ch;
	     printf("Enter your choice\n");
	     scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			//display
			display(arr,n);
			break;
			
		case 2:
			//search
			printf("1.Search Id\n2.Search Name\n");
			int ch1;
		    printf("Enter the  Choice ::");
		    scanf("%d",&ch1);
		    if(ch1==1)
		    {
		    	printf("Search Book Id\n");
		    	int bid;
				scanf("%d",&bid);
				search(arr,bid);
		    		
			}
			if(ch1==2)
			{
			     printf("Search Book Name\n");
			     char bookname[20];
				 fflush(stdin);
				 gets(bookname);
				 fflush(stdin);
				 searchbyname(arr,bookname);   	
			}
			
			break;
		case 3:
			//update
		//	fflush(stdin);
			printf("1.Price Update\n2.Rating Updaet\n");
			int ch2;
			printf("Enter the choice ::\n");
			scanf("%d",&ch2);
			if(ch2==1)
			{
			   int id;
			   printf("Enter The Book id To Update the price ->\n");
			   scanf("%d",&id);
			   updateprice(arr,id);
		    }
		    if(ch2==2)
			{
			   int id;
			   printf("Enter The Book id To Update the Rating ->\n");
			   scanf("%d",&id);
			   updaterating(arr,id);
		    }
			
			break;
		case 4:
			//delete
			printf("Enter The Book id  To Delet \n");
			int bid;
			scanf("%d",&bid);
			delet(arr,bid);
			
			break;
		case 5:
			//maximum 
			printf("1.Maximum Price\n2.Maximum Rating\n");
			int ch;
		    printf("Enter the  Choice");
		    scanf("%d",&ch);
		    if(ch==1)
		    {
		    //	printf("Find maximum Price\n");
		    		maxprice(arr);
			}
			if(ch==2)
			{
			     //printf("Enter Maximum Rating\n");
			      maxrating(arr);	
			}
			
			break;
		case 6:
			//top 3
		    printf("------------------------top three price are :: -> ----------------------------------\n");
			topthreeprice(arr);
			printf("------------------------top three ratings are :: -> ----------------------------------\n");
			topthreerating(arr);
			break;
      }
			
			printf("Do You Want To Continue (0/1)\n");
			scanf("%d",&exit);
			
	}	while(exit); // jab tak while ki exit value  nahi hoti tab tak
}
void storevalue(Book* arr,int n)
{
	int i;
//	for (i=0;i<n;i++)
//	{
		//count++;
		printf("----------------------Book Stucture--------------------\n");

	    
	    arr[0].id=10;
	    strcpy(arr[0].bname,"shamchiaai");
	    strcpy(arr[0].author,"saneguruji");
	    arr[0].price=400;
	    arr[0].rating=5;
	    
	    arr[1].id=20;
	    strcpy(arr[1].bname,"chava");
	    strcpy(arr[1].author,"shivajiSawant");
	    arr[1].price=200;
	    arr[1].rating=2;
	    
	    arr[2].id=30;
	    strcpy(arr[2].bname,"panipath");
	    strcpy(arr[2].author,"vishwasPatil");
	    arr[2].price=100;
	    arr[2].rating=1;
	    
	    arr[3].id=40;
	    strcpy(arr[3].bname,"valiv");
	    strcpy(arr[3].author,"shankarPatil");
	    arr[3].price=1000;
	    arr[3].rating=6;
	    
	    arr[4].id=50;
	    strcpy(arr[4].bname,"amrutevel");
	    strcpy(arr[4].author,"vi.s.Vhandekar");
	    arr[4].price=500;
	    arr[4].rating=7;
	    
	    arr[5].id=60;
	    strcpy(arr[5].bname,"zombi");
	    strcpy(arr[5].author,"Anantyadav");
	    arr[5].price=600;
	    arr[5].rating=9;
	    
			   		
//	    printf("Enter the Book Id ::\n");
//	    scanf("%d",&arr[i].id); 	    
//	    fflush(stdin);
//	    printf("Enter the Book Name ::\n ");
//	    scanf("%s",&arr[i].bname);
//	    fflush(stdin);
//	    printf("Enter the Author Name ::\n");
//	    scanf("%s",&arr[i].author);
//	    fflush(stdin);
//	    printf("Enter the Book Price ::\n");
//	    scanf("%lf",&arr[i].price);
//	    fflush(stdin);
//	    printf("Enter the Book rating ::\n");
//	    scanf("%lf",&arr[i].rating);
//	    fflush(stdin);		
//	}
}
void display(Book* arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	  printf("Enter the Book Id :: %d\n",arr[i].id);
      printf("Enter the Book Name ::%s\n",arr[i].bname);
      printf("Enter the Book Author ::%s\n",arr[i].author);
      printf("Enter the Book Price ::%lf\n",arr[i].price);
      printf("Enter the Book Rating ::%lf\n",arr[i].rating);
      printf("----------------------------------------------------------\n"); 
    }
}
void search( Book* arr,int bid)
 {
  int i,flag=0;

	for(i=0;i<n;i++)
	{
		if(arr[i].id==bid)
		{
			flag=1;
	      printf("Enter the Book Id :: %d\n",arr[i].id);
          printf("Enter the Book Name ::%s\n",arr[i].bname);
          printf("Enter the Book Author ::%s\n",arr[i].author);
          printf("Enter the Book Price ::%lf\n",arr[i].price);
          printf("Enter the Book Rating ::%lf\n",arr[i].rating);
		}
	}
	if(flag==0)
	{
	
		printf("No Book found with Book id %d",bid);
	}
	
}
void searchbyname(Book* arr,char* bookname)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(arr[i].bname,bookname)==0)
		{
		  flag=1;
		  printf("Enter the Book Id :: %d\n",arr[i].id);
          printf("Enter the Book Name ::%s\n",arr[i].bname);
          printf("Enter the Book Author ::%s\n",arr[i].author);
          printf("Enter the Book Price ::%lf\n",arr[i].price);
          printf("Enter the Book Rating ::%lf\n",arr[i].rating);
		}
	}
	if(flag==0)
	{
		printf("No book found with this name\n");
	}
}
void updateprice(Book* arr,int id)
{
	int i;
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(arr[i].id==id)
		{
			 flag=1;
	         printf("Enter the Book Price ::\n");
	         scanf("%lf",&arr[i].price);
	         fflush(stdin); // Buffer ki memeory free karne ke liye.
	        
			 printf("Update Successfuly \n");	
	         printf("Enter the Book Id :: %d\n",arr[i].id);
	         printf("Enter the Book Name ::%s\n",arr[i].bname);
	         printf("Enter the Book Author ::%s\n",arr[i].author);
	         printf("Enter the Book Price ::%lf\n",arr[i].price);
	         printf("Enter the Book Rating ::%lf\n",arr[i].rating);
	         printf("----------------------------------------------------\n");
	    	break;
		}		
	}
	   if(flag==0)
	   {
	   	 printf("No Book Found in This Id %d\n ",id);
	   }   	 	
}
void updaterating(Book* arr,double id)
{
	int i;
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(arr[i].id==id)
		{
		  flag=1;
	      printf("Enter the Book rating ::\n");
	      scanf("%lf",&arr[i].rating);
	      fflush(stdin);
	      
		  printf("Update Successfuly \n");	
          printf("Enter the Book Id :: %d\n",arr[i].id);
          printf("Enter the Book Name ::%s\n",arr[i].bname);
          printf("Enter the Book Author ::%s\n",arr[i].author);
          printf("Enter the Book Price ::%lf\n",arr[i].price);
          printf("Enter the Book Rating ::%lf\n",arr[i].rating);
	    	break;
		}		
	}
	   if(flag==0)
	   	 printf("No Book Found in This Id %lf \n",id);	
}


void delet(Book* arr,int bid)
{
   int i;
   int flag=0;
   for(i=0;i<n;i++)
   {                                  	 
   	  if(arr[i].id==bid)
   	    {
   	    	flag=1;
			arr[i]=arr[i+1];    
		}
		if(flag==1)
		{
		  	arr[i+1]=arr[i+2];      
        }
   }
   if(flag==1)
   {
    	n--;
    	display(arr,n);
    	printf("\n Deleted Successfully\n");
   }
   else
   {
   		printf("Book not found\n");
   } 
}


int maxprice(Book* arr)
{	
	int i;
	int temp;
	double max=0;
	for(i=0;i<n;i++)
	{	
		if(max<arr[i].price)
		{	
		  max=arr[i].price;
		  temp=i;
	    }
	}
      printf("Enter Book Id :: %d\n",arr[temp].id);
      printf("Enter the Book Name ::%s\n",arr[temp].bname);
      printf("Enter the Book Author ::%s\n",arr[temp].author);
      printf("Enter the Book Price ::%lf\n",arr[temp].price);
      printf("Enter the Book Rating ::%lf\n",arr[temp].rating);
     
      return arr[temp].id;
}
int maxrating(Book* arr)
{
	int i,temp;
	double max=0;
	for(i=0;i<n;i++)
	{
		if(max<arr[i].rating)
		{
		
		 max=arr[i].rating;
		 temp=i;
	    }
	}
      printf("Enter the Book Id :: %d\n",arr[temp].id);
      printf("Enter the Book Name ::%s\n",arr[temp].bname);
      printf("Enter the Book Author ::%s\n",arr[temp].author);
      printf("Enter the Book Price ::%lf\n",arr[temp].price);
      printf("Enter the Book Rating ::%lf\n",arr[temp].rating);
      return arr[temp].id;
}
void topthreeprice(Book* arr)
{
//	printf("Count in TopThree Book Price :: %d\n",count);
	printf("-------------------------------------\n");
	int i,temp,temp2; 
	int max=arr[0].price;
	for(i=0;i<n;i++)
	{
		if(max<arr[i].price)
		{
		  max=arr[i].price;
		  temp=i;	
		}	
	}
	  printf("Enter the Book Id :: %d\n",arr[temp].id);
      printf("Enter the Book Name ::%s\n",arr[temp].bname);
      printf("Enter the Book Author ::%s\n",arr[temp].author);
      printf("Enter the Book Price ::%lf\n",arr[temp].price);
      printf("Enter the Book Rating ::%lf\n",arr[temp].rating);
      printf("------------------------------------------------------\n");
     int max2=0;
     for(i=0;i<n;i++)
     {
     	if(max2<arr[i].price&&arr[i].price!=max)
     	{
     		max2=arr[i].price;
     		temp=i;
		 }
	 }
	  printf("Enter the Book Id :: %d\n",arr[temp].id);
      printf("Enter the Book Name ::%s\n",arr[temp].bname);
      printf("Enter the Book Author ::%s\n",arr[temp].author);
      printf("Enter the Book Price ::%lf\n",arr[temp].price);
      printf("Enter the Book Rating ::%lf\n",arr[temp].rating);
      printf("------------------------------------------------------\n");

    int max3=0;
     for(i=0;i<n;i++)
     {
     	if(max3<arr[i].price&&arr[i].price!=max&&arr[i].price!=max2)
     	{
     		max3=arr[i].price;
     		temp=i;
		 }
	 }
	  printf("Enter the Book Id :: %d\n",arr[temp].id);
      printf("Enter the Book Name ::%s\n",arr[temp].bname);
      printf("Enter the Book Author ::%s\n",arr[temp].author);
      printf("Enter the Book Price ::%lf\n",arr[temp].price);
      printf("Enter the Book Rating ::%lf\n",arr[temp].rating);
      printf("------------------------------------------------------\n");

}


void topthreerating(Book* arr)
{
//	printf("Count in TopThree Book Rating :: %d\n",count);
	printf("----------------------------------------------------------\n");
	int i,temp2; //temp
	double max=0;
	for(i=0;i<n;i++)
	{
		if(max<arr[i].rating)
		{
		  max=arr[i].rating;
		  temp2=i;	
		}	
	}
	  printf("Enter the Book Id :: %d\n",arr[temp2].id);
      printf("Enter the Book Name ::%s\n",arr[temp2].bname);
      printf("Enter the Book Author ::%s\n",arr[temp2].author);
      printf("Enter the Book Price ::%lf\n",arr[temp2].price);
      printf("Enter the Book Rating ::%lf\n",arr[temp2].rating);
      printf("------------------------------------------------------\n");

     double max2=0;
     for(i=0;i<n;i++)
     {
     	if(arr[i].rating>max2&&arr[i].rating!=max)
     	{
     		max2=arr[i].rating;
     		temp2=i;
		 }
	 }
	  printf("Enter the Book Id :: %d\n",arr[temp2].id);
      printf("Enter the Book Name ::%s\n",arr[temp2].bname);
      printf("Enter the Book Author ::%s\n",arr[temp2].author);
      printf("Enter the Book Price ::%lf\n",arr[temp2].price);
      printf("Enter the Book Rating ::%lf\n",arr[temp2].rating);
      printf("------------------------------------------------------\n");

    double max3=0;
     for(i=0;i<n;i++)
     {
     	if(max3<arr[i].rating&&arr[i].rating!=max&&arr[i].rating!=max2)
     	{
     		max3=arr[i].rating;
     		temp2=i;
		 }
	 }
	  printf("Enter the Book Id :: %d\n",arr[temp2].id);
      printf("Enter the Book Name ::%s\n",arr[temp2].bname);
      printf("Enter the Book Author ::%s\n",arr[temp2].author);
      printf("Enter the Book Price ::%lf\n",arr[temp2].price);
      printf("Enter the Book Rating ::%lf\n",arr[temp2].rating);
      printf("------------------------------------------------------\n");

}




