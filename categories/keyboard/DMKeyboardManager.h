//
//  DMKeyboardManager.h
//  Pods
//
//  Created by Dmitry Avvakumov on 07.03.17.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DMKeyboardManager : NSObject

#pragma mark - Shared instance
+ (DMKeyboardManager *) sharedInstance;

/* show / hide button */
@property (strong, nonatomic) UIImage *keyboardImage;
@property (strong, nonatomic) NSString *keyboardTitle;

/* height */
@property (assign, nonatomic) CGFloat keyboardHeight;

- (void)resignKeyboard;

@end
