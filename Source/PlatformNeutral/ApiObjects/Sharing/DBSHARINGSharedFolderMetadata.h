///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGSharedFolderMetadataBase.h"
#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGAccessLevel;
@class DBSHARINGFolderPermission;
@class DBSHARINGFolderPolicy;
@class DBSHARINGSharedFolderMetadata;
@class DBUSERSTeam;

#pragma mark - API Object

///
/// The SharedFolderMetadata struct.
///
/// The metadata which includes basic information about the shared folder.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGSharedFolderMetadata : DBSHARINGSharedFolderMetadataBase <DBSerializable>

#pragma mark - Instance fields

/// The lower-cased full path of this shared folder. Absent for unmounted folders.
@property(nonatomic, readonly) NSString * _Nullable pathLower;

/// The name of the this shared folder.
@property(nonatomic, readonly, copy) NSString * _Nonnull name;

/// The ID of the shared folder.
@property(nonatomic, readonly, copy) NSString * _Nonnull sharedFolderId;

/// Actions the current user may perform on the folder and its contents. The set of permissions
/// corresponds to the FolderActions in the request.
@property(nonatomic, readonly) NSArray<DBSHARINGFolderPermission *> * _Nullable permissions;

/// Timestamp indicating when the current user was invited to this shared folder.
@property(nonatomic, readonly) NSDate * _Nonnull timeInvited;

/// URL for displaying a web preview of the shared folder.
@property(nonatomic, readonly, copy) NSString * _Nonnull previewUrl;

#pragma mark - Constructors

///
/// Full constructor for the DBSHARINGSharedFolderMetadata struct (exposes all instance variables).
///
/// @param accessType The current user's access level for this shared folder.
/// @param isTeamFolder Whether this folder is a :link:`team folder
/// https://www.dropbox.com/en/help/986`.
/// @param policy Policies governing this shared folder.
/// @param name The name of the this shared folder.
/// @param sharedFolderId The ID of the shared folder.
/// @param timeInvited Timestamp indicating when the current user was invited to this shared folder.
/// @param previewUrl URL for displaying a web preview of the shared folder.
/// @param ownerTeam The team that owns the folder. This field is not present if the folder is not
/// owned by a team.
/// @param parentSharedFolderId The ID of the parent shared folder. This field is present only if
/// the folder is contained within another shared folder.
/// @param pathLower The lower-cased full path of this shared folder. Absent for unmounted folders.
/// @param permissions Actions the current user may perform on the folder and its contents. The set
/// of permissions corresponds to the FolderActions in the request.
///
/// @return An initialized DBSHARINGSharedFolderMetadata instance.
///
- (nonnull instancetype)initWithAccessType:(DBSHARINGAccessLevel * _Nonnull)accessType
                              isTeamFolder:(NSNumber * _Nonnull)isTeamFolder
                                    policy:(DBSHARINGFolderPolicy * _Nonnull)policy
                                      name:(NSString * _Nonnull)name
                            sharedFolderId:(NSString * _Nonnull)sharedFolderId
                               timeInvited:(NSDate * _Nonnull)timeInvited
                                previewUrl:(NSString * _Nonnull)previewUrl
                                 ownerTeam:(DBUSERSTeam * _Nullable)ownerTeam
                      parentSharedFolderId:(NSString * _Nullable)parentSharedFolderId
                                 pathLower:(NSString * _Nullable)pathLower
                               permissions:(NSArray<DBSHARINGFolderPermission *> * _Nullable)permissions;

///
/// Convenience constructor for the DBSHARINGSharedFolderMetadata struct (exposes only non-nullable
/// instance variables with no default value).
///
/// @param accessType The current user's access level for this shared folder.
/// @param isTeamFolder Whether this folder is a :link:`team folder
/// https://www.dropbox.com/en/help/986`.
/// @param policy Policies governing this shared folder.
/// @param name The name of the this shared folder.
/// @param sharedFolderId The ID of the shared folder.
/// @param timeInvited Timestamp indicating when the current user was invited to this shared folder.
/// @param previewUrl URL for displaying a web preview of the shared folder.
///
/// @return An initialized DBSHARINGSharedFolderMetadata instance.
///
- (nonnull instancetype)initWithAccessType:(DBSHARINGAccessLevel * _Nonnull)accessType
                              isTeamFolder:(NSNumber * _Nonnull)isTeamFolder
                                    policy:(DBSHARINGFolderPolicy * _Nonnull)policy
                                      name:(NSString * _Nonnull)name
                            sharedFolderId:(NSString * _Nonnull)sharedFolderId
                               timeInvited:(NSDate * _Nonnull)timeInvited
                                previewUrl:(NSString * _Nonnull)previewUrl;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the SharedFolderMetadata struct.
///
@interface DBSHARINGSharedFolderMetadataSerializer : NSObject

///
/// Serializes DBSHARINGSharedFolderMetadata instances.
///
/// @param instance An instance of the DBSHARINGSharedFolderMetadata API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGSharedFolderMetadata API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGSharedFolderMetadata * _Nonnull)instance;

///
/// Deserializes DBSHARINGSharedFolderMetadata instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGSharedFolderMetadata API
/// object.
///
/// @return An instantiation of the DBSHARINGSharedFolderMetadata object.
///
+ (DBSHARINGSharedFolderMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
