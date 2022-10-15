
//
//  main.cpp
//  Project2
//
//  Created by nebil on 10/14/22.
//


#include <iostream>
#include <vector>

using namespace std;
void algorithm1(string myString);
void algorithm2(string x[], string y[]);
void algorith3( int all_list[4][5]);



int main(int argc, const char * argv[]) {
    

    cout << " " << endl;
    cout <<"******** FIRST ALGORITHM PRINT ******" << endl;
    cout << " " << endl;
    algorithm1("ddd");
    algorithm1("heloooooooo");
    algorithm1("choosemeeky");
    
   
    cout << " " << endl;
    cout <<"******** SECOND ALGORITHM PRINT ******" << endl;

    cout << " " << endl;
        string Array_A[1] = {"hemetoaklandrialtofullertonmarcolongchinofresnovallejoclovissimithousand"};
        string  Array_B[4] = { "clovis" , "vallejo" , "rialto" , "marco"};
    
    cout<< Array_A[0] << endl;
    algorithm2(Array_A, Array_B);
    
    
    cout << " " << endl;
    cout <<"******** ThIRD ALGORITHM PRINT ******" << endl;

    cout << " " << endl;
    
    int all_lists[4][5]  = {
        {2, 5, 9, 21,3},
        {-1, 0, 2,3,76},
        {-10, 81, 121,7,8},
        {4, 6, 12, 20, 150}
    
    };

    algorith3(all_lists);
    
    
    
 
    
    return 0;
}


void algorithm1(string myString) {
    
    string xxx = "";
    int countSameChar = 0;
    char ch = '\0';
    
    string encodingString = "";


    for (int i = 0 ; i < myString.length(); i++) {
        
        //string encodingString = "";
        
        
        while ((i < myString.length()) && (myString[i] == myString[i + 1] )) {
            countSameChar++;
            ch = myString[i];
            i++;
              }
        
        
        if (countSameChar != 0 && ch != '\0') {
            
            
            int N = countSameChar + 1;
            string t = to_string(N);
            char const *n_char = t.c_str();
            
            encodingString =  encodingString + n_char;
            encodingString =  encodingString + ch;
             countSameChar = 0;
           
            
        
        }
        else {
            
            
            encodingString =  encodingString + myString[i];
        }
        
        
    }
    
    cout <<myString << "  encoded to "  << encodingString <<  endl;
    

}



void algorithm2(string Array_A[], string Array_B[])  {
    
 
   
    for (int x = 0; x < 4 ; x++) {
        
       // cout << "------------ ======= " << Array_B[x] << endl;
    
    
    for (int i = 0; i <= (Array_A[0].size() - Array_B[x].size()); i++) {
        
        
        int j;

        
        
        for (j = 0; j < Array_B[x].size(); j++) {
            
          // cout << "Array_A[i + j]  " << Array_A[0][i + j]  << " Array_B[j] " << Array_B[0][j] << endl;

            
            
            if (Array_A[0][i + j] != Array_B[x][j]) {
                break;
                
            }
            
        }
        
     
       
        
        if (j == Array_B[x].size() ) {
            cout << Array_B[x] << " find " << i << " index " << endl;
        }
        
        
    }
        
        
        
    }
        
    
}




void algorith3( int all_list[4][5]) {
    int temp;
    
    for (int i = 0 ; i < 4; i++) {
        
        for (int j = 0 ; j < 5; j++) {
            
           
            
            for (int k = 0 ; k < 4; k++) {
                
                for (int d = 0 ; d < 5; d++) {
                    
                   
                    
                    if (all_list[i][j] < all_list[k][d] ) {
                        
                        temp = all_list[i][j];
                
                        all_list[i][j] = all_list[k][d] ;
                        all_list[k][d] = temp;
                    }
                    
                    
                
                }
                
            }
            
            
            
        }
    }
    
    
    for (int a = 0 ; a < 4; a++) {
        
        for (int b = 0 ; b< 5; b++) {
            
            
            cout <<all_list[a][b]<< " , " ;
        }}
    
  
}
