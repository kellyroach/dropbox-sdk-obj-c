///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESSyncSetting;
@class DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamSelectiveSyncSettingsChangedDetails` struct.
///
/// Changed sync default.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous value.
@property (nonatomic, readonly) DBFILESSyncSetting *previousValue;

/// New value.
@property (nonatomic, readonly) DBFILESSyncSetting *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param previousValue Previous value.
/// @param dNewValue New value.
///
/// @return An initialized instance.
///
- (instancetype)initWithPreviousValue:(DBFILESSyncSetting *)previousValue dNewValue:(DBFILESSyncSetting *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamSelectiveSyncSettingsChangedDetails`
/// struct.
///
@interface DBTEAMLOGTeamSelectiveSyncSettingsChangedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails` object.
///
+ (DBTEAMLOGTeamSelectiveSyncSettingsChangedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
