#include <iostream>

using namespace std;

int main()
{
    int tot=1;
    int n;
    int a=5;
    string sum;
    int b=8;
    int i=0;
    int c,chos;
    int flag=1;
    string E_x="";
    string D_x="";
    string x;
    string Capital="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string Small="abcdefghijklmnopqrstuvwxyz";
    while (tot)
    {
        x="";
        E_x="";
        D_x="";
        while (i<26)
        {
            if ((a*i)%26==flag)
            {
                c=i;
                break;
            }
            i++;
        }
        cout<<"What do you like to do today?"<<endl<<"1- Encrypt and decrypt msg using caesar Algorithm"<<endl<<"2- Encrypt and decrypt msg using Affine Algorithm"<<endl<<"3- End"<<endl;
        cin>>chos;
        if (chos==2)
        {
            cout<<"Enter Msg to encrypt and decrypt :"<<" ";
            getline(cin,x);
            getline(cin,x);
            for (int i=0; i<x.size(); i++)
            {
                for (int j=0; j<Capital.size(); j++)
                {
                    if (x[i]==Capital[j])
                    {
                        E_x+=Capital[(((a*j)+b)%26)];
                        break;
                    }
                    else if ((x[i]==Small[j]))
                    {
                        E_x+=Small[(((a*j)+b)%26)];
                        break;
                    }
                    else if (x[i]==' ')
                    {
                        E_x+=' ';
                        break;
                    }
                }
            }
        for (int i=0; i<E_x.size(); i++)
        {
            for (int j=0; j<Capital.size(); j++)
            {
                if (E_x[i]==Capital[j])
                {
                    if(c*(j - b) % 26>=0)
                    {
                        D_x+=Capital[c*(j - b) % 26];
                        break;
                    }
                    else
                    {
                        D_x+=Capital[c*(j - b) % 26+26];
                        break;
                    }
                }
                else if ((E_x[i]==Small[j]))
                {
                    if(c*(j - b) % 26>=0)
                    {
                        D_x+=Small[c*(j - b) % 26];
                        break;
                    }
                    else
                    {
                        D_x+=Small[c*(j - b) % 26+26];
                        break;
                    }
                }
                else if (E_x[i]==' ')
                {
                    D_x+=' ';
                    break;
                }
            }
        }
        cout<<"Cipher :"<<" "<<E_x<<endl;
        cout<<"Decipher :"<<" "<<D_x<<endl;
        }
        if (chos==1)
        {
            cout<<"please enter the shift amount (n)"<<endl;
            cin>>n;
            cout<<"Enter Msg to encrypt and decrypt :"<<" ";
            getline(cin,x);
            getline(cin,x);
            for (int i=0; i<x.size(); i++)
            {
                if (x[i]>=65&&x[i]<=90)
                {
                    E_x+=char(int(x[i]+n-65)%26 +65);

                }

                else if (x[i]>=97&&x[i]<=122)
                {
                    E_x+= char(int(x[i]+n-97)%26+97);

                }
                else if (x[i]==' ')
                {
                    E_x+=' ';

                }
            }
            cout<<"Cipher :"<<" "<<E_x<<endl;;
            for (int i=0; i<E_x.size(); i++)
            {
                if (E_x[i]==' ')
                {
                    D_x+=' ';

                }
                else if (E_x[i]>=65&&E_x[i]<=90)
                {
                    D_x+=char(int(E_x[i]-n-65+26)%26 +65);

                }

                else if (E_x[i]>=97&&E_x[i]<=122)
                {
                    D_x+= char(int(E_x[i]-n-97+26)%26+97);

                }

            }
                cout<<"Decipher :"<<" "<<D_x<<endl;

        }
        if (chos==3)
        {
           tot=0;
        }
    }
return 0;
}

