int hour = 0;
int minute = 0;
int second = 0;

while (1)
{
    clearAllClock();

    setNumberOnClock(hour);
    setNumberOnClock(minute);
    setNumberOnClock(second);

    HAL_Delay(1000);
    second++;

    if (second >= 12)
    {
        second = 0;
        minute++;

        if (minute >= 12)
        {
            minute = 0;
            hour++;

            if (hour >= 12)
            {
                hour = 0;
            }
        }
    }
}
