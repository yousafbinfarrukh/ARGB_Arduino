void eeprom_persist()
{
    int E_LED_MODE = EEPROM.read(LED_STORE);
    if(led_mode != E_LED_MODE)
    {
      led_mode = E_LED_MODE;
    }

    int E_WAIT_TIME = EEPROM.read(WT_STORE);
    if(WAIT_TIME != E_WAIT_TIME)
    {
      WAIT_TIME = E_WAIT_TIME;
    }


    int E_R = EEPROM.read(R_STORE);
    if(r != E_R)
    {
      r = E_R;
    }

    int E_G = EEPROM.read(G_STORE);
    if(g != E_G)
    {
      g = E_G;
    }

    int E_B = EEPROM.read(B_STORE);
    if(b != E_B)
    {
      b = E_B;
    }
}
