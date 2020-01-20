/*
    This file is part of the ChipWhisperer Example Targets
    Copyright (C) 2019-2020 NewAE Technology Inc.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef IMXRT1062_HAL_H_
#define IMXRT1062_HAL_H_

#define trigger_setup()
#define trigger_high()
#define trigger_low()

void init_uart(void);
void putch(char c);
char getch(void);

#endif //IMXRT1062