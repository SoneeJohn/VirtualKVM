#import <Foundation/Foundation.h>

@protocol KVMThunderBoltObserverDelegate;

@interface KVMDeviceObserver : NSObject

@property (nonatomic, strong) id<KVMThunderBoltObserverDelegate> delegate;
@property (readonly) BOOL macConnected;

- (id)initWithDelegate:(id<KVMThunderBoltObserverDelegate>)delegate;
- (void)startObserving;
- (void)stopObserving;
- (BOOL)isInTargetDisplayMode;

@end

@protocol KVMThunderBoltObserverDelegate <NSObject>

@optional
- (void)deviceObserver:(KVMDeviceObserver *)observer isInitiallyConnected:(BOOL)connected;
- (void)deviceObserverConnected:(KVMDeviceObserver *)observer;
- (void)deviceObserverDisconnected:(KVMDeviceObserver *)observer;

@end
