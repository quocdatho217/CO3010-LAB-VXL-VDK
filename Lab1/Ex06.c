int counter = 0;

while (1)
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);

    switch (counter)
    {
        case 0: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET); break;
        case 1: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET); break;
        case 2: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET); break;
        case 3: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET); break;
        case 4: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET); break;
        case 5: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET); break;
        case 6: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET); break;
        case 7: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET); break;
        case 8: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET); break;
        case 9: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET); break;
        case 10: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, GPIO_PIN_RESET); break;
        case 11: HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_RESET); break;
    }

    HAL_Delay(500);
    counter++;

    if (counter >= 12)
    {
        counter = 0;
    }
}
