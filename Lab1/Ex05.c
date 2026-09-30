while (1)
{
    for (int i = 9; i >= 0; i--)
    {
        display7SEG(i);
        HAL_Delay(1000);
    }
}
