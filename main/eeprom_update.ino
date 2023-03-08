void eeprom_update()
{
    EEPROM.update(LED_STORE, led_mode);
    EEPROM.update(WT_STORE, WAIT_TIME);
    EEPROM.update(R_STORE, r);
    EEPROM.update(G_STORE, g);
    EEPROM.update(B_STORE, b);
}
