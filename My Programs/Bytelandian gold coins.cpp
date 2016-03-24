#include<iostream>
using namespace std;
long long mv(long long n)
{
    switch(n)
    {
             
             case 1:  case 2:  case 3:  case 4:  case 5:  case 6:  case 7:  case 8:  case 9:  case 10:  case 11:  case 13:  case 14:  case 15:  case 17:  case 19:  case 23:  
                  return n;
             case 12:  case 16:  case 18:  case 20:  case 21:  case 22:  case 26:  case 27:  case 29:  case 31:  case 35:  
                  return n+1;
             case 25:  case 28:  case 30:  case 34:  case 39:  case 47:  
                  return n+2;
             case 24:  case 32:  case 33:  case 38:  case 41:  case 43:  case 46:  
                  return n+3;
             case 37:  case 40:  case 42:  case 44:  case 45:  case 53:  case 59:  
                  return n+4;
             case 36:  case 52:  case 55:  case 58:  case 71:  
                  return n+5;
             case 51:  case 54:  case 57:  case 62:  case 63:  case 70:  
                  return n+6;
             case 50:  case 56:  case 61:  case 69:  
                  return n+7;
             case 49:  case 60:  case 68:  case 79:  
                  return n+8;
             case 48:  case 65:  case 67:  case 78:  case 95:  
                  return n+9;
             case 64:  case 66:  case 77:  case 83:  case 94:  
                  return n+10;
             case 76:  case 82:  case 87:  case 93:  
                  return n+11;
             case 75:  case 80:  case 81:  case 86:  case 89:  case 92:  
                  return n+12;
             case 74:  case 85:  case 88:  case 91:  
                  return n+13;
             case 73:  case 84:  case 90:  
                  return n+14;
             case 72:  
                  return n+15;
    }
    return (mv(n/2)+mv(n/3)+mv(n/4));
          
}


int main()
{
    while(!cin.eof())
    {
                     long long n;
                     cin>>n;
                     cout<<mv(n)<<endl;
    }
    return 0;
}
                     
