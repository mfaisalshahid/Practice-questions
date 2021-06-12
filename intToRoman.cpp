string intToRoman(int number) {
int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
int i=12;     
string finall;
while(number>0) { 
      int div = number/num[i]; 
      number = number%num[i]; 
      while(div--) { 
        finall += sym[i];
      } 
      i--; 
    }
    return finall;
}
