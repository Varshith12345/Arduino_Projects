#include <Keypad.h>
#include <LiquidCrystal.h>

// Define the pins for the keypad and LCD screen
const byte ROWS = 4;
const byte COLS = 3;
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
byte rowPins[ROWS] = {A0, A1, A2, A3};
byte colPins[COLS] = {A4, A5, 8};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define the correct password
const String password = "7264";//RANI LOCKER KEY NO:05
const String password1= "5673";//JOSE LOCKER KEY NO:06
const String password2= "2786";//ARUN LOCKER KEY NO:07

void setup() {
  lcd.begin(16, 2);
  lcd.print("ENTER CODE:");
}

void loop() {
  int flag=0;
  static String input = "";
  char key = keypad.getKey();
  if (key != NO_KEY) {
    lcd.setCursor(input.length(), 1);
    lcd.print(key);
    input += key;
  }
  if (input.length() == password.length()) {
    lcd.clear();
    if (input == password) {
      lcd.print("LOCKER KEY NO:05");
      flag=1;
    }
    if (input == password1) {
      lcd.print("LOCKER KEY NO:06");
      flag=1;
    } 
    if (input == password2) {
      lcd.print("LOCKER KEY NO:07");
      flag=1;
    }
    if (flag==0) {
      lcd.print("WRONG CODE!!");
    }
    delay(2000);  // Wait for 1 second before resetting the input
    input = "";
    lcd.clear();
    lcd.print("ENTER CODE:");
}
}
