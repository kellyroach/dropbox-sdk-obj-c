///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGAddFolderMemberError;
@class DBSHARINGAddMemberSelectorError;
@class DBSHARINGSharedFolderAccessError;

#pragma mark - API Object

///
/// The AddFolderMemberError union.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGAddFolderMemberError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBSHARINGAddFolderMemberErrorTag enum type represents the possible tag states with which the
/// DBSHARINGAddFolderMemberError union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGAddFolderMemberErrorTag) {
  /// Unable to access shared folder.
  DBSHARINGAddFolderMemberErrorAccessError,

  /// The current user's e-mail address is unverified.
  DBSHARINGAddFolderMemberErrorEmailUnverified,

  /// members in AddFolderMemberArg contains a bad invitation recipient.
  DBSHARINGAddFolderMemberErrorBadMember,

  /// Your team policy does not allow sharing outside of the team.
  DBSHARINGAddFolderMemberErrorCantShareOutsideTeam,

  /// The value is the member limit that was reached.
  DBSHARINGAddFolderMemberErrorTooManyMembers,

  /// The value is the pending invite limit that was reached.
  DBSHARINGAddFolderMemberErrorTooManyPendingInvites,

  /// The current user has hit the limit of invites they can send per day. Try again in 24 hours.
  DBSHARINGAddFolderMemberErrorRateLimit,

  /// The current user is trying to share with too many people at once.
  DBSHARINGAddFolderMemberErrorTooManyInvitees,

  /// The current user's account doesn't support this action. An example of this is when adding a
  /// read-only member. This action can only be performed by users that have upgraded to a Pro or
  /// Business plan.
  DBSHARINGAddFolderMemberErrorInsufficientPlan,

  /// This action cannot be performed on a team shared folder.
  DBSHARINGAddFolderMemberErrorTeamFolder,

  /// The current user does not have permission to perform this action.
  DBSHARINGAddFolderMemberErrorNoPermission,

  /// (no description).
  DBSHARINGAddFolderMemberErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGAddFolderMemberErrorTag tag;

/// Unable to access shared folder. Ensure the isAccessError method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderAccessError * _Nonnull accessError;

/// members in AddFolderMemberArg contains a bad invitation recipient. Ensure the isBadMember method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGAddMemberSelectorError * _Nonnull badMember;

/// The value is the member limit that was reached. Ensure the isTooManyMembers method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) NSNumber * _Nonnull tooManyMembers;

/// The value is the pending invite limit that was reached. Ensure the isTooManyPendingInvites
/// method returns true before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) NSNumber * _Nonnull tooManyPendingInvites;

#pragma mark - Constructors

///
/// Initializes union class with tag state of AccessError.
///
/// About the AccessError tag state: Unable to access shared folder.
///
/// @param accessError Unable to access shared folder.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithAccessError:(DBSHARINGSharedFolderAccessError * _Nonnull)accessError;

///
/// Initializes union class with tag state of EmailUnverified.
///
/// About the EmailUnverified tag state: The current user's e-mail address is unverified.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithEmailUnverified;

///
/// Initializes union class with tag state of BadMember.
///
/// About the BadMember tag state: :field:`AddFolderMemberArg.members` contains a bad invitation
/// recipient.
///
/// @param badMember :field:`AddFolderMemberArg.members` contains a bad invitation recipient.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithBadMember:(DBSHARINGAddMemberSelectorError * _Nonnull)badMember;

///
/// Initializes union class with tag state of CantShareOutsideTeam.
///
/// About the CantShareOutsideTeam tag state: Your team policy does not allow sharing outside of the
/// team.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithCantShareOutsideTeam;

///
/// Initializes union class with tag state of TooManyMembers.
///
/// About the TooManyMembers tag state: The value is the member limit that was reached.
///
/// @param tooManyMembers The value is the member limit that was reached.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithTooManyMembers:(NSNumber * _Nonnull)tooManyMembers;

///
/// Initializes union class with tag state of TooManyPendingInvites.
///
/// About the TooManyPendingInvites tag state: The value is the pending invite limit that was
/// reached.
///
/// @param tooManyPendingInvites The value is the pending invite limit that was reached.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithTooManyPendingInvites:(NSNumber * _Nonnull)tooManyPendingInvites;

///
/// Initializes union class with tag state of RateLimit.
///
/// About the RateLimit tag state: The current user has hit the limit of invites they can send per
/// day. Try again in 24 hours.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithRateLimit;

///
/// Initializes union class with tag state of TooManyInvitees.
///
/// About the TooManyInvitees tag state: The current user is trying to share with too many people at
/// once.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithTooManyInvitees;

///
/// Initializes union class with tag state of InsufficientPlan.
///
/// About the InsufficientPlan tag state: The current user's account doesn't support this action. An
/// example of this is when adding a read-only member. This action can only be performed by users
/// that have upgraded to a Pro or Business plan.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithInsufficientPlan;

///
/// Initializes union class with tag state of TeamFolder.
///
/// About the TeamFolder tag state: This action cannot be performed on a team shared folder.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithTeamFolder;

///
/// Initializes union class with tag state of NoPermission.
///
/// About the NoPermission tag state: The current user does not have permission to perform this
/// action.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithNoPermission;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBSHARINGAddFolderMemberError instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value AccessError.
///
/// @note Call this method and ensure it returns true before accessing the accessError property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value AccessError.
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value EmailUnverified.
///
/// @return Whether the union's current tag state has value EmailUnverified.
///
- (BOOL)isEmailUnverified;

///
/// Retrieves whether the union's current tag state has value BadMember.
///
/// @note Call this method and ensure it returns true before accessing the badMember property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value BadMember.
///
- (BOOL)isBadMember;

///
/// Retrieves whether the union's current tag state has value CantShareOutsideTeam.
///
/// @return Whether the union's current tag state has value CantShareOutsideTeam.
///
- (BOOL)isCantShareOutsideTeam;

///
/// Retrieves whether the union's current tag state has value TooManyMembers.
///
/// @note Call this method and ensure it returns true before accessing the tooManyMembers property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value TooManyMembers.
///
- (BOOL)isTooManyMembers;

///
/// Retrieves whether the union's current tag state has value TooManyPendingInvites.
///
/// @note Call this method and ensure it returns true before accessing the tooManyPendingInvites
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value TooManyPendingInvites.
///
- (BOOL)isTooManyPendingInvites;

///
/// Retrieves whether the union's current tag state has value RateLimit.
///
/// @return Whether the union's current tag state has value RateLimit.
///
- (BOOL)isRateLimit;

///
/// Retrieves whether the union's current tag state has value TooManyInvitees.
///
/// @return Whether the union's current tag state has value TooManyInvitees.
///
- (BOOL)isTooManyInvitees;

///
/// Retrieves whether the union's current tag state has value InsufficientPlan.
///
/// @return Whether the union's current tag state has value InsufficientPlan.
///
- (BOOL)isInsufficientPlan;

///
/// Retrieves whether the union's current tag state has value TeamFolder.
///
/// @return Whether the union's current tag state has value TeamFolder.
///
- (BOOL)isTeamFolder;

///
/// Retrieves whether the union's current tag state has value NoPermission.
///
/// @return Whether the union's current tag state has value NoPermission.
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value Other.
///
/// @return Whether the union's current tag state has value Other.
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBSHARINGAddFolderMemberError union.
///
@interface DBSHARINGAddFolderMemberErrorSerializer : NSObject

///
/// Serializes DBSHARINGAddFolderMemberError instances.
///
/// @param instance An instance of the DBSHARINGAddFolderMemberError API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGAddFolderMemberError API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGAddFolderMemberError * _Nonnull)instance;

///
/// Deserializes DBSHARINGAddFolderMemberError instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGAddFolderMemberError API
/// object.
///
/// @return An instantiation of the DBSHARINGAddFolderMemberError object.
///
+ (DBSHARINGAddFolderMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
