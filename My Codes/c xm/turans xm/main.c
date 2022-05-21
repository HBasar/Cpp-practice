
#include<stdio.h>
int main()
{
    float eng_num, phy_num, che_num, math_num, zoology_num;

    printf("Enter English number = ");
    scanf("%f",&eng_num);
    printf("Enter physics number = ");
    scanf("%f",&phy_num);
    printf("Enter Chemistry number = ");
    scanf("%f",&che_num);
    printf("Enter Math number = ");
    scanf("%f",&math_num);
    printf("Enter zoology number = ");
    scanf("%f",&zoology_num);

    printf("\n");

    float total_marks = eng_num + phy_num + che_num + math_num + zoology_num;
    float aveg_marks = total_marks/5;

    printf("Total marks is = %.2f\n",total_marks);
    printf("Average marks is = %.2f\n",aveg_marks);

    printf("\n");

    int a=80,b=70,c=60,d=50,e=33;

    if(eng_num>=a){
        printf("English A+\n");
    }
    else{
        if(eng_num>=b){
            printf("English A\n");
        }
        else{
            if(eng_num>=c){
                printf("English A-\n");
            }
            else{
                if(eng_num>=d){
                    printf("English B\n");
                }
                else{
                    if(eng_num>=e){
                        printf("English B-\n");
                    }
                    else{
                        printf("English FAIL\n");
                    }
                }
            }
        }
    }
    if(phy_num>=a){
        printf("Physics A+\n");
    }
    else{
        if(phy_num>=b){
            printf("Physics A\n");
        }
        else{
            if(phy_num>=c){
                printf("Physics A-\n");
            }
            else{
                if(phy_num>=d){
                    printf("Physics B+\n");
                }
                else{
                    if(phy_num>=e){
                        printf("Physics B-\n");
                    }
                    else{
                        printf("FAIL\n");
                    }
                }
            }
        }
    }
    if(che_num>=a){
        printf("Chemistry A+\n");
    }
    else{
        if(che_num>=b){
            printf("Chemistry A\n");
        }
        else{
            if(che_num>=c){
                printf("Chemistry A-\n");
            }
            else{
                if(che_num>=d){
                    printf("Chemistry B+\n");
                }
                else{
                    if(che_num>=e){
                        printf("Chemistry B-\n");
                    }
                    else{
                        printf("FAIL\n");
                    }
                }
            }
        }
    }
    if(math_num>=a){
        printf("Math A+\n");
    }
    else{
        if(math_num>=b){
            printf("Math A\n");
        }
        else{
            if(math_num>=c){
                printf("Math A-\n");
            }
            else{
                if(math_num>=d){
                    printf("Math B+\n");
                }
                else{
                    if(math_num>=e){
                        printf("Math B-\n");
                    }
                    else{
                        printf("Math FAIL\n");
                    }
                }
            }
        }
    }
    if(zoology_num>=a){
        printf("Zoology A+\n");
    }
    else{
        if(zoology_num>=b){
            printf("Zoology A\n");
        }
        else{
            if(zoology_num>=c){
                printf("Zoology A-\n");
            }
            else{
                if(zoology_num>=d){
                    printf("Zoology B+\n");
                }
                else{
                    if(zoology_num>=e){
                        printf("Zoology B-\n");
                    }
                    else{
                        printf("Zoology Fail\n");
                    }
                }
            }
        }
    }
    
    }
