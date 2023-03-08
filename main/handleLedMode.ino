void handleLedMode()
{
  switch (led_mode)
  {
  case MODE_RAINBOW:
    rainbow(WAIT_TIME);
    break;
  case MODE_RAINBOW_CYCLE:
    rainbowCycle(WAIT_TIME);
    break;

  case MODE_RAINBOW_THEATRE:
     theaterChaseRainbow(WAIT_TIME);
     break;

  case MODE_THEATRE_WHITE:
    theaterChase(strip.Color(255, 255, 255), WAIT_TIME);
    break;

  case MODE_THEATRE_RED:
    theaterChase(strip.Color(255,   0,   0), WAIT_TIME);
    break;

  case MODE_THEATRE_GREEN:
    theaterChase(strip.Color(0,   255,   0), WAIT_TIME);
    break;

  case MODE_THEATRE_BLUE:
    theaterChase(strip.Color(  0,   0, 255), WAIT_TIME);
    break;

  case MODE_RED:
    colorWipe(strip.Color(255, 0, 0), WAIT_TIME);
    break;

  case MODE_GREEN:
    colorWipe(strip.Color(0, 255, 0), WAIT_TIME);
    break;

  case MODE_BLUE:
    colorWipe(strip.Color(0, 0, 255), WAIT_TIME);
    break;

  case MODE_CUSTOM:
    colorWipe(strip.Color(r, g, b), WAIT_TIME);
    break;

  case MODE_TURNOFF:
    colorWipe(strip.Color(0, 0, 0), WAIT_TIME);
    break;

  default:
    rainbow(20);
    break;
  }
}
