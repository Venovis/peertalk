//
//  Peertalk.h
//  Peertalk
//
//  Created by Marek Cirkos on 12/04/2016.
//
//

#import <Foundation/Foundation.h>

//! Project version number for Peertalk.
FOUNDATION_EXPORT double PeertalkVersionNumber;

//! Project version string for Peertalk.
FOUNDATION_EXPORT const unsigned char PeertalkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Peertalk/PublicHeader.h>

// This warning needs to be switched off - Sketch itself has this warning on, so when FWs try to import
// this FW, you get build errors. Instead of fixing this third party FW we wallpaper over the cracks.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wquoted-include-in-framework-header"

#import <Peertalk/PTChannel.h>
#import <Peertalk/PTProtocol.h>
#import <Peertalk/PTUSBHub.h>

#pragma clang diagnostic pop
