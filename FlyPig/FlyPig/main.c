//
//  main.c
//  FlyPig
//
//  Created by tino又想吃肉了 on 2020/12/21.
//

#include <stdio.h>
#include "AirRoute.h"
#include "Ports.h"
int main(int argc, const char * argv[]) {
    airport port;
    initAirport(&port);
    searchWithDestination(port, "北京");
    orderTicket(&port, 342, 2);
    orderTicket(&port, 342, 1);
    orderTicket(&port, 342, 3);
//    orderTicket(&port, 342, 300);
//    orderTicket(&port, 342, 350);
    cancelTicket(&port, "周三", 342, 2);
    printf("欢迎下次光临，再见\n");
    return 0;
}
