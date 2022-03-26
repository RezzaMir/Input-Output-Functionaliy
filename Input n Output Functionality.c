void setup()
{
	pinMode(2, INPUT);
	attachInterrupt(digitalPinToInterrupt(2),interrupt,HIGH );
}


void loop()
{
	pinMode(IO1, OUTPUT);
	pinMode(IO2, INPUT);
	pinMode(IO3, OUTPUT);
	{
		digitalWrite(IO1, HIGH);
		digitalWrite(103, LOW);
		delay(1000);
		digitalWrite(IO1, LOW);

		digitalWrite(IO3, HIGH);
		digitalWrite(101, LOW);
		delay(1000);
		digitalWrite(IO3, LOW);
	}

	pinMode(IO1, OUTPUT);
	pinMode(IO2, OUTPUT);
	pinMode(IO3, INPUT);
	{
		digitalWrite(IO1, HIGH);
		digitalWrite(102, LOW);
		delay(1000);
		digitalWrite(IO1, LOW);

		digitalWrite(IO2, HIGH);
		digitalWrite(101, LOW);
		delay(1000);
		digitalWrite(IO2, LOW);
	}

	pinMode(IO1, INPUT);
	pinMode(IO2, OUTPUT);
	pinMode(IO3, OUTPUT);
	{
		digitalWrite(IO2, HIGH);
		digitalWrite(103, LOW);
		delay(1000);
		digitalWrite(IO2, LOW);

		digitalWrite(IO3, HIGH);
		digitalWrite(102, LOW);
		delay(1000);
		digitalWrite(IO3, LOW);
	}

	pinMode(IO1, INPUT);
	pinMode(IO2, OUTPUT);
	pinMode(IO3, OUTPUT);
	digitalWrite(IO2, HIGH);
	digitalWrite(103, LOW);
	delay(1000);
	digitalWrite(IO2, LOW);

	pinMode(IO1, OUTPUT);
	pinMode(IO2, OUTPUT);
	pinMode(IO3, INPUT);
	{
		digitalWrite(IO2, HIGH);
		digitalWrite(101, LOW);
		delay(1000);
		digitalWrite(IO2, LOW);
		
		digitalWrite(IO1, HIGH);
		digitalWrite(102, LOW);
		delay(1000);
		digitalWrite(IO1, LOW);
	}

	pinMode(IO1, OUTPUT);
	pinMode(IO2, INPUT);
	pinMode(IO3, OUTPUT);
	{
		digitalWrite(IO3, HIGH);
		digitalWrite(101, LOW);
		delay(1000);
		digitalWrite(IO3, LOW);
	}
}

void interrupt()
{
	while (digitalRead(2)) {
	}

}



