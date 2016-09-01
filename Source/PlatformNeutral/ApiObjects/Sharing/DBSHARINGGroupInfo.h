///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import "DBTEAMCOMMONGroupSummary.h"
#import <Foundation/Foundation.h>

@class DBSHARINGGroupInfo;
@class DBTEAMCOMMONGroupManagementType;
@class DBTEAMCOMMONGroupType;

#pragma mark - API Object

///
/// The GroupInfo struct.
///
/// The information about a group. Groups is a way to manage a list of users  who need same access
/// permission to the shared folder.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGGroupInfo : DBTEAMCOMMONGroupSummary <DBSerializable>

#pragma mark - Instance fields

/// The type of group.
@property(nonatomic, readonly) DBTEAMCOMMONGroupType * _Nonnull groupType;

/// If the current user is an owner of the group.
@property(nonatomic, readonly) NSNumber * _Nonnull isOwner;

/// If the group is owned by the current user's team.
@property(nonatomic, readonly) NSNumber * _Nonnull sameTeam;

#pragma mark - Constructors

///
/// Full constructor for the DBSHARINGGroupInfo struct (exposes all instance variables).
///
/// @param groupName (no description).
/// @param groupId (no description).
/// @param groupManagementType Who is allowed to manage the group.
/// @param groupType The type of group.
/// @param isOwner If the current user is an owner of the group.
/// @param sameTeam If the group is owned by the current user's team.
/// @param groupExternalId External ID of group. This is an arbitrary ID that an admin can attach to
/// a group.
/// @param memberCount The number of members in the group.
///
/// @return An initialized DBSHARINGGroupInfo instance.
///
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName
                                  groupId:(NSString * _Nonnull)groupId
                      groupManagementType:(DBTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType
                                groupType:(DBTEAMCOMMONGroupType * _Nonnull)groupType
                                  isOwner:(NSNumber * _Nonnull)isOwner
                                 sameTeam:(NSNumber * _Nonnull)sameTeam
                          groupExternalId:(NSString * _Nullable)groupExternalId
                              memberCount:(NSNumber * _Nullable)memberCount;

///
/// Convenience constructor for the DBSHARINGGroupInfo struct (exposes only non-nullable instance
/// variables with no default value).
///
/// @param groupName (no description).
/// @param groupId (no description).
/// @param groupManagementType Who is allowed to manage the group.
/// @param groupType The type of group.
/// @param isOwner If the current user is an owner of the group.
/// @param sameTeam If the group is owned by the current user's team.
///
/// @return An initialized DBSHARINGGroupInfo instance.
///
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName
                                  groupId:(NSString * _Nonnull)groupId
                      groupManagementType:(DBTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType
                                groupType:(DBTEAMCOMMONGroupType * _Nonnull)groupType
                                  isOwner:(NSNumber * _Nonnull)isOwner
                                 sameTeam:(NSNumber * _Nonnull)sameTeam;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the GroupInfo struct.
///
@interface DBSHARINGGroupInfoSerializer : NSObject

///
/// Serializes DBSHARINGGroupInfo instances.
///
/// @param instance An instance of the DBSHARINGGroupInfo API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGGroupInfo API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGGroupInfo * _Nonnull)instance;

///
/// Deserializes DBSHARINGGroupInfo instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGGroupInfo API object.
///
/// @return An instantiation of the DBSHARINGGroupInfo object.
///
+ (DBSHARINGGroupInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
