//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@interface SidecarRequest : NSObject
{
    struct os_unfair_lock_s _lock;
    NSArray *_devices_deprecated;
    SidecarDevice *_device;
    NSArray *_items;
    NSProgress *_progress;
    NSMutableArray *_sendTransfers;
    NSError *_error;
    double _timeStart;
    double _timeAccept;
    double _timeTransfer;
    double _timeFinish;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic) double timeFinish; // @synthesize timeFinish=_timeFinish;
@property(nonatomic) double timeTransfer; // @synthesize timeTransfer=_timeTransfer;
@property(nonatomic) double timeAccept; // @synthesize timeAccept=_timeAccept;
@property(nonatomic) double timeStart; // @synthesize timeStart=_timeStart;
- (void)accept;
- (id)sessionForDevice:(id)arg1;
- (void)sidecarServiceTerminate;
- (void)sidecarSession:(id)arg1 invalidatedWithError:(id)arg2;
- (void)sidecarSession:(id)arg1 receivedMessage:(id)arg2;
- (void)sidecarTransfer:(id)arg1 receivedItems:(id)arg2 messageType:(long long)arg3;
- (void)sidecarTransfer:(id)arg1 didComplete:(id)arg2;
- (void)writeToPasteboard:(id)arg1;
- (void)readFromPasteboard:(id)arg1;
- (void)_sendMessage:(id)arg1;
- (void)sendItems:(id)arg1;
- (void)sendItems:(id)arg1 complete:(_Bool)arg2;
- (void)startWithTransport:(long long)arg1 reconnectToRequestID:(long long)arg2;
- (void)startWithTransport:(long long)arg1;
- (void)start;
@property(readonly, nonatomic) long long requestID; // @dynamic requestID;
- (void)cancel;
@property(readonly) NSString *localizedItemName;
@property(readonly) NSString *localizedDescription;
@property(retain) NSError *error; // @dynamic error;
@property(readonly) NSString *uniformTypeIdentifier;
@property(readonly) NSData *data; // @dynamic data;
- (void)setItems:(id)arg1;
@property(readonly) NSArray *items; // @dynamic items;
@property(copy) NSArray *devices; // @dynamic devices;
@property(readonly, nonatomic) SidecarDevice *device; // @dynamic device;
@property(readonly, getter=isFinished) _Bool finished; // @dynamic finished;
@property(readonly, getter=isCancelled) _Bool cancelled; // @dynamic cancelled;
- (void)dealloc;
- (id)initWithSession:(id)arg1 message:(id)arg2;
- (id)initWithService:(id)arg1 device:(id)arg2;
- (void)_messageTrace;
- (void)_registerStreamListeners;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

