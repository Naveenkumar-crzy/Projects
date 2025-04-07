
#define sen_1 2
#define sen_2 3
int count=0;
void setup() {
 Serial.begin(9600);
 pinMode(sen_1, INPUT);
 pinMode(sen_2, INPUT);

}

void loop() {
int state_1 = digitalRead(sen_1);
if (state_1!=HIGH)
{
count++;
Serial.print("count is :");
Serial.println(count);
while( digitalRead(sen_1)!=HIGH);
}

int state_2 = digitalRead(sen_2);
if (state_2!=HIGH)
{
count--;
Serial.print("count is :");
Serial.println(count);
while( digitalRead(sen_2)!=HIGH);
}
if ((state_1!=HIGH) && (state_2!=HIGH))
{
count=0;
Serial.print("count reset done");


}

delay(500);
}
