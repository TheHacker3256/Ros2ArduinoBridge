//Define motors
AF_DCMotor motor1(FRONT_LEFT_MOTOR);
AF_DCMotor motor2(FRONT_RIGHT_MOTOR);
AF_DCMotor motor3(BACK_LEFT_MOTOR);
AF_DCMotor motor4(BACK_RIGHT_MOTOR);

void motorSetup(){
  //setup motor 1
  motor1.setSpeed(200);
  motor1.run(RELEASE);
  //setup motor 2
  motor2.setSpeed(200);
  motor2.run(RELEASE);
  //setup motor 3
  motor3.setSpeed(200);
  motor3.run(RELEASE);
  //setup motor 4
  motor4.setSpeed(200);
  motor4.run(RELEASE);
}

void m1(int val) {
  if (val > 255) { val = 255; }
  if (val < -255) { val = -255; }

  int vala = 0;
  if (val > 1) { vala = map(val, 0, 255, 0, 255); motor1.run(FORWARD);
  } else if (val < -1) { vala = map(val * -1, 0, 255, 0, 255); motor1.run(BACKWARD);
  } else {motor1.run(RELEASE);}
  motor1.setSpeed(vala);
}

void m2(int val) {
  if (val > 255) { val = 255; }
  if (val < -255) { val = -255; }

  int vala = 0;
  if (val > 1) { vala = map(val, 0, 255, 0, 255); motor2.run(FORWARD);
  } else if (val < -1) { vala = map(val * -1, 0, 255, 0, 255); motor2.run(BACKWARD);
  } else {motor2.run(RELEASE);}
  motor2.setSpeed(vala);
}

void m3(int val) {
  if (val > 255) { val = 255; }
  if (val < -255) { val = -255; }

  int vala = 0;
  if (val > 1) { vala = map(val, 0, 255, 0, 255); motor3.run(FORWARD);
  } else if (val < -1) { vala = map(val * -1, 0, 255, 0, 255); motor3.run(BACKWARD);
  } else { motor3.run(RELEASE); }
  motor3.setSpeed(vala);
}

void m4(int val) {
  if (val > 255) { val = 255; }
  if (val < -255) { val = -255; }

  int vala = 0;
  if (val > 1) { vala = map(val, 0, 255, 0, 255); motor4.run(FORWARD);
  } else if (val < -1) { vala = map(val * -1, 0, 255, 0, 255); motor4.run(BACKWARD);
  } else { motor4.run(RELEASE); }
  motor4.setSpeed(vala);
}