//
//  UIDevice+Hardware.h
//  ACKeyboard
//
//  Created by Arnaud Coomans on 8/23/14.
//
//

#import <UIKit/UIKit.h>

@interface UIDevice (Hardware)

/** The internal name of the machine, eg "iPhone7,1" for an iPhone 6 Plus
 */
- (NSString *)machine;

@end
