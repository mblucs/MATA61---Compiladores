// AST

// statement

    // declaration
        // id_list 
            int i1; // id INT i1
            float f1,f2; // id INT f1   

        // array
            char c1[10]; // dimension
            double d1[10], d2[10][10]; // dimensions

        // function
            void func(int x, float y){  
                // if_statement
                if(x == 1){
                    // declaration
                    bool b = true;
                } else {
                    // loop_statement
                    while(x < 10){
                        x = x + 1;
                    }   
                }
            }
    // attribution
        x = 5; 

    // if_statement

    // loop_statement

