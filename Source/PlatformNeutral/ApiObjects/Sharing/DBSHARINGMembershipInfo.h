///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGAccessLevel;
@class DBSHARINGMemberPermission;
@class DBSHARINGMembershipInfo;

#pragma mark - API Object

///
/// The MembershipInfo struct.
///
/// The information about a member of the shared content.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGMembershipInfo : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The access type for this member.
@property(nonatomic, readonly) DBSHARINGAccessLevel * _Nonnull accessType;

/// The permissions that requesting user has on this member. The set of permissions corresponds to
/// the MemberActions in the request.
@property(nonatomic, readonly) NSArray<DBSHARINGMemberPermission *> * _Nullable permissions;

/// Suggested name initials for a member.
@property(nonatomic, readonly) NSString * _Nullable initials;

/// True if the member has access from a parent folder.
@property(nonatomic, readonly) NSNumber * _Nonnull isInherited;

#pragma mark - Constructors

///
/// Full constructor for the DBSHARINGMembershipInfo struct (exposes all instance variables).
///
/// @param accessType The access type for this member.
/// @param permissions The permissions that requesting user has on this member. The set of
/// permissions corresponds to the MemberActions in the request.
/// @param initials Suggested name initials for a member.
/// @param isInherited True if the member has access from a parent folder.
///
/// @return An initialized DBSHARINGMembershipInfo instance.
///
- (nonnull instancetype)initWithAccessType:(DBSHARINGAccessLevel * _Nonnull)accessType
                               permissions:(NSArray<DBSHARINGMemberPermission *> * _Nullable)permissions
                                  initials:(NSString * _Nullable)initials
                               isInherited:(NSNumber * _Nullable)isInherited;

///
/// Convenience constructor for the DBSHARINGMembershipInfo struct (exposes only non-nullable
/// instance variables with no default value).
///
/// @param accessType The access type for this member.
///
/// @return An initialized DBSHARINGMembershipInfo instance.
///
- (nonnull instancetype)initWithAccessType:(DBSHARINGAccessLevel * _Nonnull)accessType;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the MembershipInfo struct.
///
@interface DBSHARINGMembershipInfoSerializer : NSObject

///
/// Serializes DBSHARINGMembershipInfo instances.
///
/// @param instance An instance of the DBSHARINGMembershipInfo API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGMembershipInfo API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGMembershipInfo * _Nonnull)instance;

///
/// Deserializes DBSHARINGMembershipInfo instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGMembershipInfo API
/// object.
///
/// @return An instantiation of the DBSHARINGMembershipInfo object.
///
+ (DBSHARINGMembershipInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
