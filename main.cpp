#include <iostream>
#include <iomanip>
using namespace std;
void cart_list(int i,int q,int y,int item_id[],int item_price[],int index,int count);
 
int main(){
    int id,yn,count=0;
    float qa;

   int item_id[10]={1005,1007,1009,1004,1003};
   int item_price[10]={800,1056,856,450,800};
   int selected_id[100];
   double qa_of_item[100];
   int y_or_no[100];
   while (true)
   {
    cout<<"enter the item id :";
    cin>>id;
    if (id==0)
    {
        break;
    }
    cout<<"quantity: ";
    cin>>qa;
    cout<<"enter buy or no: ";
    cin>>yn;
    for (int i = count; i <= count; i++)
    {
        selected_id[i]=id;
        qa_of_item[i]=qa;
        y_or_no[i]=yn;
    }
    count++;
    cout<<'\n';
    

   }
   cout<<setw(13)<<left<<"Ite ID"<<setw(16)<<left<<"Quantity(kg)"<<setw(12)<<left<<"Price(Rs.)"<<'\n';
   int p =0 ;
   int total=0,n_tot=0;
   int discount=0,t_dis=0.0;
   for(int i =0;i<count;i++){
    
    
    cout<<setw(13)<<selected_id[i]<<setw(16)<<qa_of_item[i];
    for (int j = 0; j < count; j++)
    {
         
        if (selected_id[i]==item_id[j])
        {
            p = item_price[j]*qa_of_item[i];
            cout<<setw(12)<<left<<p<<'\n';
            if (y_or_no[i]==1)
            {
                total+=p;
                if ((selected_id[i]==1005)&&(qa_of_item[i]>5))
                {
                    discount=(p)-(p*(1/5));
                      
                }else{
                     discount=0;
                }
                if (discount==0)
                {
                    n_tot+=p;
                }else{
                    n_tot=n_tot+discount;
                }
                
                
                
            
            
        }
       
        
    }
    
    
    
   }
   }
    
        cout<<"Total gross amount = Rs."<<total<<'\n';
        cout<<"Total discount amount = Rs."<<n_tot<<'\n';
        //cout<<"Total net amount = Rs."<<(total-t_dis)<<'\n';
   
   
   
     

    return 0;
}
 
 
   
   













/*int main(){
    int count=0;
   int item_id[10]={1005,1007,1009,1004,1003};
   int item_price[10]={800,1056,856,450,800};
   for (int i = 0; i < 7; i++)
   {
    if (item_price[i]>500)
    {
        count++;
    }
   }
   cout<<"Count of items with prices exceeding Rs.500 : "<<count<<'\n';
   cout<<"Item list with prices exceeding Rs.500: ";
   for (int i = 0; i < 7; i++)
   {
    if (item_price[i]>500)
    {
        cout<<item_id[i];
        count--;
        if (count!=0)
        {l
            cout<<",";
        }
        
        
    }
     
   }
   
   
   return 0;
}*/
//void add_item(int item_id[],int item_price[]);
//void del_item(int item_id[],int item_price[]);
 
/*int main(){
   int item_id[10]={1005,1007,1009,1004,1006};
   int item_price[10]={650,758,105,400,410};
   char user,del ;
   cout<<"are you want to add items(y or n) : ";
   cin>>user;
   if(user =='y')
   {
    add_item(item_id,item_price);
    
   }
   cout<<"are you want to delete items(y or n) : ";
   cin>>del;
    if(del =='y')
   {
    del_item(item_id,item_price);
   }
   
   cout<<"*********updated price list is here*********"<<'\n';
    
   for (int i = 0; i < 7; i++)
   {
    cout<<setw(9)<<left<<"Item ID:"<<item_id[i]<<","<<"Item Price:"<<item_price[i]<<'\n';
   }
   
 
 return 0;
}
*/

/*void add_item(int item_id[],int item_price[]){
    int no_item;
    int x =5;
    cout<<"number of items are you want to add to the list :";
    cin>>no_item;
    if (no_item!=0)
    {
        
        for (int i = 1; i <= no_item; i++)
        {
             cout<<"enter the "<<i<<" item ID :";
            cin>>item_id[x];
            cout<<"enter the "<<i<<" item price :";
            cin>>item_price[x];
            x++;
        }
    } 
    char y;
    cout<<"are you want to update prices ? (y or n):";
    cin>>y;
    if (y =='y')
    {
       int n,n1,n2;
       cout<<"enter the number of item to edit :";
       cin>>n; 
       if (n!=0)
       {
        for (int i = 1; i <= n; i++)
        {
            cout<<"enter the "<<i<<" item id you want to edit price :";
            cin>>n1;
            cout<<"enter the "<<i<<" item new price :";
            cin>>n2;
            for (int j = 0; j < 7; j++)
            {
                 if (n1==item_id[j])
                 {
                    item_price[j]=n2;
                    break;
                 }
            }
            
             
            
        }
        
       }
         
         
    }
    
    

}*/
/*void del_item(int item_id[],int item_price[]){
    int num,id;
    cout<<"enter the number of item you want to delete :";
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
         cout<<"enter the item_ID to delete : ";
         cin>>id;
         for (int j = 0; j < 7; j++)
            {
                 if (id==item_id[j])
                 {
                     for (int x = j; j < 7; j++)
                     {
                        item_id[j]=item_id[j+1];
                        item_price[j]=item_price[j+1];
                     }
                     
                    break;
                 }
            }

    }
    
}*/