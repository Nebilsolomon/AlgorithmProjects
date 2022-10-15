
//
//  main.cpp
//  Project2
//
//  Created by nebil on 10/14/22.
//


#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    

    
    return 0;
}


void pseudocodeAlgorithm1(string myString) {
    
   
    int countSameChar = 0;
    char ch = '\0';
    
    string encodingString = "";


    for (int i = 0 ; i < myString.length(); i++):
        
        
        
        while ((i < myString.length()) and (myString[i] == myString[i + 1] )):
            countSameChar++;
            ch = myString[i];
            i++;
              
        
        
        if (countSameChar != 0 and ch != '\0'):
            
            
            int N = countSameChar + 1;
            string t = to_string(N);
            char const *n_char = t.c_str();
            
            encodingString =  encodingString + n_char;
            encodingString =  encodingString + ch;
            countSameChar = 0;
           
            
        
        
        else:
            
            
            encodingString =  encodingString + myString[i];
        
        
        
    
}



void pseudocodeAlgorithm2(string Array_A[], string Array_B[])  {
    
 
   
    for (int x = 0; x < 4 ; x++):
        
    
    
       for (int i = 0; i <= (Array_A[0].size() - Array_B[x].size()); i++) {
            int j;

        
            for (j = 0; j < Array_B[x].size(); j++):
            

            
            
                if (Array_A[0][i + j] not Array_B[x][j]):
                   break;
                
        
        
        if (j  == Array_B[x].size() ):
            cout << Array_B[x] << " find " << i << " index " << endl;
        
        
    
}




void pseudocodeAlgorithm3( int all_list[4][5]) {
    int temp;
    
    for (int i = 0 ; i < 4; i++):
        
        for (int j = 0 ; j < 5; j++):
            
           
            
            for (int k = 0 ; k < 4; k++):
                
                for (int d = 0 ; d < 5; d++):
                    
                   
                    
                    if (all_list[i][j] bigger all_list[k][d] ):
                        
                        temp = all_list[i][j];
                        all_list[i][j] = all_list[k][d] ;
                        all_list[k][d] = temp;
                    
                    
    }
    
    
    for (int a = 0 ; a < 4; a++):
        
        for (int b = 0 ; b< 5; b++):
            cout <<all_list[a][b] << endl;
     
    
  
}
