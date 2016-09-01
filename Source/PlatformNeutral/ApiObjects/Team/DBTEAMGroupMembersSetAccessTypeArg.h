///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import "DBTEAMGroupMemberSelector.h"
#import <Foundation/Foundation.h>

@class DBTEAMGroupAccessType;
@class DBTEAMGroupMembersSetAccessTypeArg;
@class DBTEAMGroupSelector;
@class DBTEAMUserSelectorArg;

#pragma mark - API Object

///
/// The GroupMembersSetAccessTypeArg struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGroupMembersSetAccessTypeArg : DBTEAMGroupMemberSelector <DBSerializable>

#pragma mark - Instance fields

/// New group access type the user will have.
@property(nonatomic, readonly) DBTEAMGroupAccessType * _Nonnull accessType;

/// Whether to return the list of members in the group.  Note that the default value will cause all
/// the group members  to be returned in the response. This may take a long time for large groups.
@property(nonatomic, readonly) NSNumber * _Nonnull returnMembers;

#pragma mark - Constructors

///
/// Full constructor for the DBTEAMGroupMembersSetAccessTypeArg struct (exposes all instance
/// variables).
///
/// @param group Specify a group.
/// @param user Identity of a user that is a member of :field:`group`.
/// @param accessType New group access type the user will have.
/// @param returnMembers Whether to return the list of members in the group.  Note that the default
/// value will cause all the group members  to be returned in the response. This may take a long
/// time for large groups.
///
/// @return An initialized DBTEAMGroupMembersSetAccessTypeArg instance.
///
- (nonnull instancetype)initWithGroup:(DBTEAMGroupSelector * _Nonnull)group
                                 user:(DBTEAMUserSelectorArg * _Nonnull)user
                           accessType:(DBTEAMGroupAccessType * _Nonnull)accessType
                        returnMembers:(NSNumber * _Nullable)returnMembers;

///
/// Convenience constructor for the DBTEAMGroupMembersSetAccessTypeArg struct (exposes only
/// non-nullable instance variables with no default value).
///
/// @param group Specify a group.
/// @param user Identity of a user that is a member of :field:`group`.
/// @param accessType New group access type the user will have.
///
/// @return An initialized DBTEAMGroupMembersSetAccessTypeArg instance.
///
- (nonnull instancetype)initWithGroup:(DBTEAMGroupSelector * _Nonnull)group
                                 user:(DBTEAMUserSelectorArg * _Nonnull)user
                           accessType:(DBTEAMGroupAccessType * _Nonnull)accessType;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the GroupMembersSetAccessTypeArg struct.
///
@interface DBTEAMGroupMembersSetAccessTypeArgSerializer : NSObject

///
/// Serializes DBTEAMGroupMembersSetAccessTypeArg instances.
///
/// @param instance An instance of the DBTEAMGroupMembersSetAccessTypeArg API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMGroupMembersSetAccessTypeArg
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupMembersSetAccessTypeArg * _Nonnull)instance;

///
/// Deserializes DBTEAMGroupMembersSetAccessTypeArg instances.
///
/// @param dict A json-compatible dictionary representation of the
/// DBTEAMGroupMembersSetAccessTypeArg API object.
///
/// @return An instantiation of the DBTEAMGroupMembersSetAccessTypeArg object.
///
+ (DBTEAMGroupMembersSetAccessTypeArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
