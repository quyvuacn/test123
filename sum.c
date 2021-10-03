#include <stdio.h>   
#include <math.h>
int main(){
    float sum,toan,van,anh;
    printf("Nhap diem toan :\n");
    scanf("%f", &toan);
     printf("Nhap diem van :\n");
    scanf("%f", &van);
     printf("Nhap diem anh :\n");
    scanf("%f", &anh);
    sum=(toan+van+anh)/3;
    printf("Tong diem 3 mon la %.2f\n",toan+van+anh);
    printf("Trung binh 3 mon la %.2f\n",(toan+van+anh)/3 );
    if(sum>=8)
     printf("Gioi");
    else if(sum>7)
      printf("Kha");
     else if(sum>5)
        printf("Tb");
      else
       printf("Chua dat");
    return 0;
}



