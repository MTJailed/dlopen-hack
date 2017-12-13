#import <Foundation/Foundation.h>
@interface Interposer : NSObject
@property int debugMode;
- (void)interpose:(char*)symbol override:(char*)override;
@end
