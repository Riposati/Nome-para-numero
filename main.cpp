#include <bits/stdc++.h>

using namespace std;

map<string,long long>mapa;
string numero,palavra;
long long sum,resp;

void preencheMapa(){
    mapa.insert(make_pair("zero",0));
    mapa.insert(make_pair("um",1));
    mapa.insert(make_pair("dois",2));
    mapa.insert(make_pair("tres",3));
    mapa.insert(make_pair("quatro",4));
    mapa.insert(make_pair("cinco",5));
    mapa.insert(make_pair("seis",6));
    mapa.insert(make_pair("sete",7));
    mapa.insert(make_pair("oito",8));
    mapa.insert(make_pair("nove",9));
    mapa.insert(make_pair("dez",10));
    mapa.insert(make_pair("onze",11));
    mapa.insert(make_pair("doze",12));
    mapa.insert(make_pair("treze",13));
    mapa.insert(make_pair("quatorze",14));
    mapa.insert(make_pair("quinze",15));
    mapa.insert(make_pair("dezesseis",16));
    mapa.insert(make_pair("dezessete",17));
    mapa.insert(make_pair("dezoito",18));
    mapa.insert(make_pair("dezenove",19));
    mapa.insert(make_pair("vinte",20));
    mapa.insert(make_pair("trinta",30));
    mapa.insert(make_pair("quarenta",40));
    mapa.insert(make_pair("cinquenta",50));
    mapa.insert(make_pair("sessenta",60));
    mapa.insert(make_pair("setenta",70));
    mapa.insert(make_pair("oitenta",80));
    mapa.insert(make_pair("noventa",90));
    mapa.insert(make_pair("cem",100));
    mapa.insert(make_pair("cento",100));
    mapa.insert(make_pair("duzentos",200));
    mapa.insert(make_pair("trezentos",300));
    mapa.insert(make_pair("quatrocentos",400));
    mapa.insert(make_pair("quinhentos",500));
    mapa.insert(make_pair("seiscentos",600));
    mapa.insert(make_pair("setecentos",700));
    mapa.insert(make_pair("oitocentos",800));
    mapa.insert(make_pair("novecentos",900));
    mapa.insert(make_pair("mil",1000));
    mapa.insert(make_pair("milhao",1e6));
    mapa.insert(make_pair("milhoes",1e6));
    mapa.insert(make_pair("bilhao",1e9));
    mapa.insert(make_pair("bilhoes",1e9));
    mapa.insert(make_pair("trilhao",1e12));
    mapa.insert(make_pair("trilhoes",1e12));
}

int main()
{
    preencheMapa();

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stringstream ss;

    while(getline(cin,numero)){

        sum = resp = 0;
        ss.clear();

        ss << numero;

        while( ss >> palavra ){

            if(mapa[palavra] > 900)
                resp += (max( 1LL,sum ) * mapa[palavra]) , sum = 0;
            else
                sum += mapa[palavra];
        }
        printf("%lld\n",resp + sum);
    }
    return 0;
}
