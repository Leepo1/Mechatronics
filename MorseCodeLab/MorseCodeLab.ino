const char* strings[49];

int string_count(const char* s){
  int count { 0 };
  while (*s++) {++count;}
  return count;
}



void setup() {
strings['a']=".-";
strings['b']="-...";
strings['c']="-.-.";
strings['d']="-..";
strings['e']=".";
strings['f']="..-.";
strings['g']="--.";
strings['h']="....";
strings['i']="..";
strings['j']=".---";
strings['k']="-.-";
strings['l']=".-..";
strings['m']="--";
strings['n']="-.";
strings['o']="---";
strings['p']=".--.";
strings['q']="--.-";
strings['r']=".-.";
strings['s']="...";
strings['t']="-";
strings['u']="..-";
strings['v']="...-";
strings['w']=".--";
strings['x']="-..-";
strings['y']="-.--";
strings['z']="--..";
strings['1']=".----";
strings['2']="..---";
strings['3']="...--";
strings['4']="....-";
strings['5']=".....";
strings['6']="-....";
strings['7']="--...";
strings['8']="---..";
strings['9']="----.";
strings['0']="-----";
strings['.']=".-.-.-";
strings[',']="--..--";
strings[':']="---...";
strings['?']="..--..";
strings['\'']=".----.";
strings['-']="-....-";
strings['/']="-..-.";
strings['(']="-.--.";
strings[')']="-.--.-";
strings['\"']=".-..-.";
strings['=']="-...-";
strings['+']=".-.-.";
strings['@']=".--.-.";

pinMode(13, OUTPUT);
digitalWrite(13, LOW);
  
char test[] = "sos";

int dash = 500;
int dot = 166;


//dash=map(whatever,0,1024,166,1000);
//dot=dash/3;

for(int i=0; i<string_count(test); i++){
  for(int j=0; j<string_count(strings[test[i]]); j++){
  if(strings[test[i]][j]=='.'){
    digitalWrite(13,HIGH);
    long start= millis();
    while(millis()-start<dot){

    }
    digitalWrite(13,LOW);
  }else {
      digitalWrite(13,HIGH);
      long start = millis();
      while (millis()-start<dash){

      }
      digitalWrite(13,LOW);
    }
    

long start= millis();
    while(millis()-start<dot){

    }
}    
}
}

void loop(){
  
}



  // put your main code here, to run repeatedly:


