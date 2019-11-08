//
//  connection.h
//  bifrost
//
//  Created by @its_a_feature_ on 10/14/19.
//  Copyright © 2019 Cody Thomas (@its_a_feature_). All rights reserved.
//

#ifndef connection_h
#define connection_h

#include <netdb.h>
#include <sys/socket.h>
#include <arpa/inet.h>

@interface kdc : NSObject
@property int fd;

-(int)connectDomain:(char*)domain;
-(int)sendBytes:(NSData*)bytes;
-(NSData*)recvBytes;
-(void)closeConnection;

@end


#endif /* connection_h */
