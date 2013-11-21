#import <Foundation/Foundation.h>

@interface NSRunLoop (PerformBlock)

- (void)performBlockAndWait:(void (^)(BOOL *finish))block;
- (void)performBlockAndWait:(void (^)(BOOL *finish))block timeoutInterval:(NSTimeInterval)timeoutInterval;

@end
