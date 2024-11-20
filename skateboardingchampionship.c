#include <stdio.h>

int Score(int n1, int n2, int n3) {
    if (n1 >= n2) {
        if (n1 <= n3){
            return n1;
        }else{
            if (n2 >= n3){
                return n2;
            }else{
                return n3;
            } 
        }
    } else{
        if (n2 <= n3){
            return n2;
        }else{
            if (n1 >= n3){
                return n1;
            }else{
                return n3;
            } 
        }
    }
}


int main( )
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, b1, b2, b3, b4, b5, b6, b7, b8, b9;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &b1, &b2, &b3, &b4, &b5, &b6, &b7, &b8, &b9 );
    int ScoreA1 = Score(a1, a2, a3), ScoreA2 = Score(a4, a5, a6), ScoreA3 = Score(a7, a8, a9);
    int ScoreB1 = Score(b1, b2, b3), ScoreB2 = Score(b4, b5, b6), ScoreB3 = Score(b7, b8, b9);
    int ScoreAf = Score(ScoreA1, ScoreA2, ScoreA3);
    int ScoreBf = Score(ScoreB1, ScoreB2, ScoreB3);
    if (ScoreAf > ScoreBf){
        printf("A");
    } else if (ScoreAf < ScoreBf){
        printf("B");
    } else{
        printf("empate");
    }
    
    return 0;
}
