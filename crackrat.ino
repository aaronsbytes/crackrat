#define HID_CUSTOM_LAYOUT  //  ╗
                           //  ╠═══ These two lines can be omitted to obtain the default US layout.
#define LAYOUT_GERMAN      //  ╝    Alternatively, this can be adjusted to your preferred keyboard layout.
#include <HID-Project.h>

// Default is 1.0. You can adjust this value depending on how fast your targets computer is.
float speed = 1.0;



void Payload() { // Setup your payload here.

  /* Write your payload right here.
   *  For example: StartProcess("powershell", true);
   *  This fires up an administrator powershell window.
   */

  Keyboard.print("Hello World!");
  
}

void setup() {
  pinMode(13, OUTPUT);                          // Set pin 13 as an output pin
  max_delay();                                  // wait for computer to recognize Keyboard
  Payload();                                    // Execute payload after initialization is finished
}

void loop() { // Once the payload is completed, the LED will continuously blink.
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);
}

void execute(char process[],bool uac){
  execute_run_prompt();
  normal_delay();
  Keyboard.print(process);
  if(uac){
    ctrl_shift_enter();
    big_delay();
    uac_yes();
  } else {
    enter();
  }
}


void execute_run_prompt() {
  Keyboard.releaseAll();
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
}

void ctrl_shift_enter() {
  Keyboard.releaseAll();
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

void enter() {
  Keyboard.releaseAll();
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
}

void close_window() {
  Keyboard.releaseAll();
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
}

void save_file() {
  Keyboard.releaseAll();
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  Keyboard.release('s');
  Keyboard.release(KEY_LEFT_CTRL);
}

void uac_yes() {
  Keyboard.releaseAll();
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.release(KEY_LEFT_ARROW);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
}

void drop_hint(char text[], char filename[]) {
  Keyboard.releaseAll();
  execute("notepad", false);
  normal_delay();
  Keyboard.print(text);
  save_file();
  normal_delay();
  Keyboard.print(filename);
  enter();
  normal_delay();
  close_window();
}

void min_delay() {
  delay(500 / speed);
}

void normal_delay() {
  delay(1000 / speed);
}

void big_delay() {
  delay(1500 / speed);
}

void max_delay() {
  delay(3000 / speed);
}
