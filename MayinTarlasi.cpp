#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){
	
	 int satir=0, sutun=0, toprak=0;
	 
	cout<<"Mayin Tarlasinin Boyutunu Giriniz : (Orn: 5 10)"<<endl;
	
	cin>>satir>>sutun;
	
	int tarla[satir][sutun];
	
	int t[satir][sutun];
	
	srand (time(NULL));
	
	for(int i = 0; i<satir ; i++ ){
		
		for(int j = 0 ; j<sutun ; j++ ){
			
			tarla[i][j] = rand()%2;
			
			t[i][j]=5;
			
			if(tarla[i][j]==0){
				toprak++;
			}
			
		}
		
	}
	
	//oyun başlarken bu bölümü yorum satırı yapın
	cout<<"Test amacli Tarla gosteriliyor : "<<endl;
	
	for(int i = 0; i < satir ; i++ ){
		for(int j = 0 ; j < sutun ; j ++){
		
		
		cout<<tarla[i][j]<<" ";
	}
	cout<<endl;
	}
	
	
	cout<<endl;
	
	int i=0 , j=0;
	
	while(true){
		
		for( i = 0 ; i < satir ; i++ ){
			for( j = 0 ; j < sutun ; j++ ){
				
				cout<< t[i][j]<<" ";
				
			}
			
			cout<<endl;
		}
		
	
	
	cout<<"Acmak istediginiz indexleri giriniz (orn : 0 1) "<<endl;
	
	cin>> i >> j;
	
	if(i >= 0 && j >= 0 && i < satir && j < sutun){
		
		if(t[i][j] == 5 && tarla[i][j] == 0 ){
			
			t[i][j] = tarla[i][j];
			toprak--;
			
			if(toprak == 0){
				cout<<"Bütün mayinleri buldunuz"<<endl;
				return 0;
			}
		}
		else if(t[i][j] == 5 && tarla [i][j] == 1 ){
			
			cout<<"Mayina bastiniz! "<<endl;
			
			return 0;
			
		}
		
		else {
			
			cout<<"Daha önce actıginiz yeri bir daha acmaya calistiniz ! "<<endl;
			
		}
		
		
		
	}
	
	else{
		
		cout<<"Gecersiz bir index girdiniz"<<endl;
		
	}}
	
	return 0;
}
