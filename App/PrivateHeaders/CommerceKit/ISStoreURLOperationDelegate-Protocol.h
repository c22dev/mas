//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "ISURLOperationDelegate.h"

#import "ISURLOperationDelegate-Protocol.h"

@class ISStoreURLOperation, NSNumber, NSString;

NS_ASSUME_NONNULL_BEGIN

@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>

@optional
- (BOOL)operation:(ISStoreURLOperation *)arg1 shouldSetStoreFrontID:(NSString *)arg2;
- (void)operation:(ISStoreURLOperation *)arg1 didAuthenticateWithDSID:(NSNumber *)arg2;
@end

NS_ASSUME_NONNULL_END
