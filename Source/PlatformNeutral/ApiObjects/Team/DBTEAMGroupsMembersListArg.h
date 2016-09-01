///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMGroupSelector;
@class DBTEAMGroupsMembersListArg;

#pragma mark - API Object

///
/// The GroupsMembersListArg struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGroupsMembersListArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The group whose members are to be listed.
@property(nonatomic, readonly) DBTEAMGroupSelector * _Nonnull group;

/// Number of results to return per call.
@property(nonatomic, readonly) NSNumber * _Nonnull limit;

#pragma mark - Constructors

///
/// Full constructor for the DBTEAMGroupsMembersListArg struct (exposes all instance variables).
///
/// @param group The group whose members are to be listed.
/// @param limit Number of results to return per call.
///
/// @return An initialized DBTEAMGroupsMembersListArg instance.
///
- (nonnull instancetype)initWithGroup:(DBTEAMGroupSelector * _Nonnull)group limit:(NSNumber * _Nullable)limit;

///
/// Convenience constructor for the DBTEAMGroupsMembersListArg struct (exposes only non-nullable
/// instance variables with no default value).
///
/// @param group The group whose members are to be listed.
///
/// @return An initialized DBTEAMGroupsMembersListArg instance.
///
- (nonnull instancetype)initWithGroup:(DBTEAMGroupSelector * _Nonnull)group;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the GroupsMembersListArg struct.
///
@interface DBTEAMGroupsMembersListArgSerializer : NSObject

///
/// Serializes DBTEAMGroupsMembersListArg instances.
///
/// @param instance An instance of the DBTEAMGroupsMembersListArg API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMGroupsMembersListArg API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupsMembersListArg * _Nonnull)instance;

///
/// Deserializes DBTEAMGroupsMembersListArg instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMGroupsMembersListArg API
/// object.
///
/// @return An instantiation of the DBTEAMGroupsMembersListArg object.
///
+ (DBTEAMGroupsMembersListArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
