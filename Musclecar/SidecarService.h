//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSArray, NSString, SidecarDevice;

@interface SidecarService : NSObject
{
    SidecarDevice *_targetDevice;
}

+ (long long)minimumRapportVersion;
+ (id)supportedPasteboardTypes;
+ (id)allSendTypes;
+ (id)allReturnTypes;
+ (id)returnTypes;
+ (id)name;
+ (id)servicesForPasteboardTypes:(id)arg1;
+ (id)servicesForPasteboardSendTypes:(id)arg1 returnTypes:(id)arg2;
+ (id)extensionForIdentifier:(id)arg1;
+ (id)allMenuServices;
+ (id)allServices;
+ (id)serviceWithName:(id)arg1;
+ (id)menuServices;
+ (id)services;
- (id)copyWithDevice:(id)arg1;
- (id)makeRequestToDevice:(id)arg1;
- (id)makeRequestWithResponder:(id)arg1 sendTypes:(id)arg2 returnTypes:(id)arg3;
- (id)makeRequest;
@property(readonly, nonatomic) NSString *localizedItemName;
@property(readonly, nonatomic) NSString *localizedDescription;
- (id)mutableRequestMessage;
@property(readonly, nonatomic) NSString *serviceExtension;
@property(readonly, nonatomic) NSString *serviceIdentifier;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) NSArray *pasteboardTypes;
@property(readonly, nonatomic) NSArray *sendTypes; // @dynamic sendTypes;
@property(readonly, nonatomic) NSArray *returnTypes;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *devices;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end
