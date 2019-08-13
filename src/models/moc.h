

#pragma once

#ifndef GO_MOC_539e18_H
#define GO_MOC_539e18_H

#include <stdint.h>

#ifdef __cplusplus
class ModelManager539e18;
void ModelManager539e18_ModelManager539e18_QRegisterMetaTypes();
class QAddress539e18;
void QAddress539e18_QAddress539e18_QRegisterMetaTypes();
class QWallet539e18;
void QWallet539e18_QWallet539e18_QRegisterMetaTypes();
class WalletManager539e18;
void WalletManager539e18_WalletManager539e18_QRegisterMetaTypes();
class WalletModel539e18;
void WalletModel539e18_WalletModel539e18_QRegisterMetaTypes();
class AddressesModel539e18;
void AddressesModel539e18_AddressesModel539e18_QRegisterMetaTypes();
extern "C" {
#endif

struct Moc_PackedString { char* data; long long len; };
struct Moc_PackedList { void* data; long long len; };
struct Moc_PackedString QWallet539e18_Name(void* ptr);
struct Moc_PackedString QWallet539e18_NameDefault(void* ptr);
void QWallet539e18_SetName(void* ptr, struct Moc_PackedString name);
void QWallet539e18_SetNameDefault(void* ptr, struct Moc_PackedString name);
void QWallet539e18_ConnectNameChanged(void* ptr);
void QWallet539e18_DisconnectNameChanged(void* ptr);
void QWallet539e18_NameChanged(void* ptr, struct Moc_PackedString name);
int QWallet539e18_EncryptionEnabled(void* ptr);
int QWallet539e18_EncryptionEnabledDefault(void* ptr);
void QWallet539e18_SetEncryptionEnabled(void* ptr, int encryptionEnabled);
void QWallet539e18_SetEncryptionEnabledDefault(void* ptr, int encryptionEnabled);
void QWallet539e18_ConnectEncryptionEnabledChanged(void* ptr);
void QWallet539e18_DisconnectEncryptionEnabledChanged(void* ptr);
void QWallet539e18_EncryptionEnabledChanged(void* ptr, int encryptionEnabled);
unsigned long long QWallet539e18_Sky(void* ptr);
unsigned long long QWallet539e18_SkyDefault(void* ptr);
void QWallet539e18_SetSky(void* ptr, unsigned long long sky);
void QWallet539e18_SetSkyDefault(void* ptr, unsigned long long sky);
void QWallet539e18_ConnectSkyChanged(void* ptr);
void QWallet539e18_DisconnectSkyChanged(void* ptr);
void QWallet539e18_SkyChanged(void* ptr, unsigned long long sky);
unsigned long long QWallet539e18_CoinHours(void* ptr);
unsigned long long QWallet539e18_CoinHoursDefault(void* ptr);
void QWallet539e18_SetCoinHours(void* ptr, unsigned long long coinHours);
void QWallet539e18_SetCoinHoursDefault(void* ptr, unsigned long long coinHours);
void QWallet539e18_ConnectCoinHoursChanged(void* ptr);
void QWallet539e18_DisconnectCoinHoursChanged(void* ptr);
void QWallet539e18_CoinHoursChanged(void* ptr, unsigned long long coinHours);
struct Moc_PackedString QWallet539e18_FileName(void* ptr);
struct Moc_PackedString QWallet539e18_FileNameDefault(void* ptr);
void QWallet539e18_SetFileName(void* ptr, struct Moc_PackedString fileName);
void QWallet539e18_SetFileNameDefault(void* ptr, struct Moc_PackedString fileName);
void QWallet539e18_ConnectFileNameChanged(void* ptr);
void QWallet539e18_DisconnectFileNameChanged(void* ptr);
void QWallet539e18_FileNameChanged(void* ptr, struct Moc_PackedString fileName);
int QWallet539e18_QWallet539e18_QRegisterMetaType();
int QWallet539e18_QWallet539e18_QRegisterMetaType2(char* typeName);
int QWallet539e18_QWallet539e18_QmlRegisterType();
int QWallet539e18_QWallet539e18_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* QWallet539e18___children_atList(void* ptr, int i);
void QWallet539e18___children_setList(void* ptr, void* i);
void* QWallet539e18___children_newList(void* ptr);
void* QWallet539e18___dynamicPropertyNames_atList(void* ptr, int i);
void QWallet539e18___dynamicPropertyNames_setList(void* ptr, void* i);
void* QWallet539e18___dynamicPropertyNames_newList(void* ptr);
void* QWallet539e18___findChildren_atList(void* ptr, int i);
void QWallet539e18___findChildren_setList(void* ptr, void* i);
void* QWallet539e18___findChildren_newList(void* ptr);
void* QWallet539e18___findChildren_atList3(void* ptr, int i);
void QWallet539e18___findChildren_setList3(void* ptr, void* i);
void* QWallet539e18___findChildren_newList3(void* ptr);
void* QWallet539e18___qFindChildren_atList2(void* ptr, int i);
void QWallet539e18___qFindChildren_setList2(void* ptr, void* i);
void* QWallet539e18___qFindChildren_newList2(void* ptr);
void* QWallet539e18_NewQWallet(void* parent);
void QWallet539e18_DestroyQWallet(void* ptr);
void QWallet539e18_DestroyQWalletDefault(void* ptr);
void QWallet539e18_ChildEventDefault(void* ptr, void* event);
void QWallet539e18_ConnectNotifyDefault(void* ptr, void* sign);
void QWallet539e18_CustomEventDefault(void* ptr, void* event);
void QWallet539e18_DeleteLaterDefault(void* ptr);
void QWallet539e18_DisconnectNotifyDefault(void* ptr, void* sign);
char QWallet539e18_EventDefault(void* ptr, void* e);
char QWallet539e18_EventFilterDefault(void* ptr, void* watched, void* event);
void QWallet539e18_TimerEventDefault(void* ptr, void* event);
void* WalletManager539e18_CreateEncryptedWallet(void* ptr, struct Moc_PackedString seed, struct Moc_PackedString label, struct Moc_PackedString password, int scanN);
void* WalletManager539e18_CreateUnencryptedWallet(void* ptr, struct Moc_PackedString seed, struct Moc_PackedString label, int scanN);
struct Moc_PackedString WalletManager539e18_GetNewSeed(void* ptr, int entropy);
int WalletManager539e18_VerifySeed(void* ptr, struct Moc_PackedString seed);
void WalletManager539e18_NewWalletAddress(void* ptr, struct Moc_PackedString id, int n, struct Moc_PackedString password);
void WalletManager539e18_EncryptWallet(void* ptr, struct Moc_PackedString id, struct Moc_PackedString password);
void WalletManager539e18_DecryptWallet(void* ptr, struct Moc_PackedString id, struct Moc_PackedString password);
struct Moc_PackedList WalletManager539e18_GetWallets(void* ptr);
struct Moc_PackedList WalletManager539e18_GetAddresses(void* ptr, struct Moc_PackedString id);
int WalletManager539e18_WalletManager539e18_QRegisterMetaType();
int WalletManager539e18_WalletManager539e18_QRegisterMetaType2(char* typeName);
int WalletManager539e18_WalletManager539e18_QmlRegisterType();
int WalletManager539e18_WalletManager539e18_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* WalletManager539e18___children_atList(void* ptr, int i);
void WalletManager539e18___children_setList(void* ptr, void* i);
void* WalletManager539e18___children_newList(void* ptr);
void* WalletManager539e18___dynamicPropertyNames_atList(void* ptr, int i);
void WalletManager539e18___dynamicPropertyNames_setList(void* ptr, void* i);
void* WalletManager539e18___dynamicPropertyNames_newList(void* ptr);
void* WalletManager539e18___findChildren_atList(void* ptr, int i);
void WalletManager539e18___findChildren_setList(void* ptr, void* i);
void* WalletManager539e18___findChildren_newList(void* ptr);
void* WalletManager539e18___findChildren_atList3(void* ptr, int i);
void WalletManager539e18___findChildren_setList3(void* ptr, void* i);
void* WalletManager539e18___findChildren_newList3(void* ptr);
void* WalletManager539e18___qFindChildren_atList2(void* ptr, int i);
void WalletManager539e18___qFindChildren_setList2(void* ptr, void* i);
void* WalletManager539e18___qFindChildren_newList2(void* ptr);
void* WalletManager539e18___getWallets_atList(void* ptr, int i);
void WalletManager539e18___getWallets_setList(void* ptr, void* i);
void* WalletManager539e18___getWallets_newList(void* ptr);
void* WalletManager539e18___getAddresses_atList(void* ptr, int i);
void WalletManager539e18___getAddresses_setList(void* ptr, void* i);
void* WalletManager539e18___getAddresses_newList(void* ptr);
void* WalletManager539e18_NewWalletManager(void* parent);
void WalletManager539e18_DestroyWalletManager(void* ptr);
void WalletManager539e18_DestroyWalletManagerDefault(void* ptr);
void WalletManager539e18_ChildEventDefault(void* ptr, void* event);
void WalletManager539e18_ConnectNotifyDefault(void* ptr, void* sign);
void WalletManager539e18_CustomEventDefault(void* ptr, void* event);
void WalletManager539e18_DeleteLaterDefault(void* ptr);
void WalletManager539e18_DisconnectNotifyDefault(void* ptr, void* sign);
char WalletManager539e18_EventDefault(void* ptr, void* e);
char WalletManager539e18_EventFilterDefault(void* ptr, void* watched, void* event);
void WalletManager539e18_TimerEventDefault(void* ptr, void* event);
void WalletModel539e18_AddWallet(void* ptr, void* v0);
void WalletModel539e18_EditWallet(void* ptr, int row, struct Moc_PackedString name, char encryptionEnabled, unsigned long long sky, unsigned long long coinHours);
void WalletModel539e18_RemoveWallet(void* ptr, int row);
void WalletModel539e18_LoadModel(void* ptr, void* v0);
struct Moc_PackedList WalletModel539e18_Roles(void* ptr);
struct Moc_PackedList WalletModel539e18_RolesDefault(void* ptr);
void WalletModel539e18_SetRoles(void* ptr, void* roles);
void WalletModel539e18_SetRolesDefault(void* ptr, void* roles);
void WalletModel539e18_ConnectRolesChanged(void* ptr);
void WalletModel539e18_DisconnectRolesChanged(void* ptr);
void WalletModel539e18_RolesChanged(void* ptr, void* roles);
struct Moc_PackedList WalletModel539e18_Wallets(void* ptr);
struct Moc_PackedList WalletModel539e18_WalletsDefault(void* ptr);
void WalletModel539e18_SetWallets(void* ptr, void* wallets);
void WalletModel539e18_SetWalletsDefault(void* ptr, void* wallets);
void WalletModel539e18_ConnectWalletsChanged(void* ptr);
void WalletModel539e18_DisconnectWalletsChanged(void* ptr);
void WalletModel539e18_WalletsChanged(void* ptr, void* wallets);
int WalletModel539e18_Count(void* ptr);
int WalletModel539e18_CountDefault(void* ptr);
void WalletModel539e18_SetCount(void* ptr, int count);
void WalletModel539e18_SetCountDefault(void* ptr, int count);
void WalletModel539e18_ConnectCountChanged(void* ptr);
void WalletModel539e18_DisconnectCountChanged(void* ptr);
void WalletModel539e18_CountChanged(void* ptr, int count);
int WalletModel539e18_WalletModel539e18_QRegisterMetaType();
int WalletModel539e18_WalletModel539e18_QRegisterMetaType2(char* typeName);
int WalletModel539e18_WalletModel539e18_QmlRegisterType();
int WalletModel539e18_WalletModel539e18_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
int WalletModel539e18_____itemData_keyList_atList(void* ptr, int i);
void WalletModel539e18_____itemData_keyList_setList(void* ptr, int i);
void* WalletModel539e18_____itemData_keyList_newList(void* ptr);
int WalletModel539e18_____roleNames_keyList_atList(void* ptr, int i);
void WalletModel539e18_____roleNames_keyList_setList(void* ptr, int i);
void* WalletModel539e18_____roleNames_keyList_newList(void* ptr);
int WalletModel539e18_____setItemData_roles_keyList_atList(void* ptr, int i);
void WalletModel539e18_____setItemData_roles_keyList_setList(void* ptr, int i);
void* WalletModel539e18_____setItemData_roles_keyList_newList(void* ptr);
void* WalletModel539e18___changePersistentIndexList_from_atList(void* ptr, int i);
void WalletModel539e18___changePersistentIndexList_from_setList(void* ptr, void* i);
void* WalletModel539e18___changePersistentIndexList_from_newList(void* ptr);
void* WalletModel539e18___changePersistentIndexList_to_atList(void* ptr, int i);
void WalletModel539e18___changePersistentIndexList_to_setList(void* ptr, void* i);
void* WalletModel539e18___changePersistentIndexList_to_newList(void* ptr);
int WalletModel539e18___dataChanged_roles_atList(void* ptr, int i);
void WalletModel539e18___dataChanged_roles_setList(void* ptr, int i);
void* WalletModel539e18___dataChanged_roles_newList(void* ptr);
void* WalletModel539e18___itemData_atList(void* ptr, int v, int i);
void WalletModel539e18___itemData_setList(void* ptr, int key, void* i);
void* WalletModel539e18___itemData_newList(void* ptr);
struct Moc_PackedList WalletModel539e18___itemData_keyList(void* ptr);
void* WalletModel539e18___layoutAboutToBeChanged_parents_atList(void* ptr, int i);
void WalletModel539e18___layoutAboutToBeChanged_parents_setList(void* ptr, void* i);
void* WalletModel539e18___layoutAboutToBeChanged_parents_newList(void* ptr);
void* WalletModel539e18___layoutChanged_parents_atList(void* ptr, int i);
void WalletModel539e18___layoutChanged_parents_setList(void* ptr, void* i);
void* WalletModel539e18___layoutChanged_parents_newList(void* ptr);
void* WalletModel539e18___match_atList(void* ptr, int i);
void WalletModel539e18___match_setList(void* ptr, void* i);
void* WalletModel539e18___match_newList(void* ptr);
void* WalletModel539e18___mimeData_indexes_atList(void* ptr, int i);
void WalletModel539e18___mimeData_indexes_setList(void* ptr, void* i);
void* WalletModel539e18___mimeData_indexes_newList(void* ptr);
void* WalletModel539e18___persistentIndexList_atList(void* ptr, int i);
void WalletModel539e18___persistentIndexList_setList(void* ptr, void* i);
void* WalletModel539e18___persistentIndexList_newList(void* ptr);
void* WalletModel539e18___roleNames_atList(void* ptr, int v, int i);
void WalletModel539e18___roleNames_setList(void* ptr, int key, void* i);
void* WalletModel539e18___roleNames_newList(void* ptr);
struct Moc_PackedList WalletModel539e18___roleNames_keyList(void* ptr);
void* WalletModel539e18___setItemData_roles_atList(void* ptr, int v, int i);
void WalletModel539e18___setItemData_roles_setList(void* ptr, int key, void* i);
void* WalletModel539e18___setItemData_roles_newList(void* ptr);
struct Moc_PackedList WalletModel539e18___setItemData_roles_keyList(void* ptr);
int WalletModel539e18_____doSetRoleNames_roleNames_keyList_atList(void* ptr, int i);
void WalletModel539e18_____doSetRoleNames_roleNames_keyList_setList(void* ptr, int i);
void* WalletModel539e18_____doSetRoleNames_roleNames_keyList_newList(void* ptr);
int WalletModel539e18_____setRoleNames_roleNames_keyList_atList(void* ptr, int i);
void WalletModel539e18_____setRoleNames_roleNames_keyList_setList(void* ptr, int i);
void* WalletModel539e18_____setRoleNames_roleNames_keyList_newList(void* ptr);
void* WalletModel539e18___children_atList(void* ptr, int i);
void WalletModel539e18___children_setList(void* ptr, void* i);
void* WalletModel539e18___children_newList(void* ptr);
void* WalletModel539e18___dynamicPropertyNames_atList(void* ptr, int i);
void WalletModel539e18___dynamicPropertyNames_setList(void* ptr, void* i);
void* WalletModel539e18___dynamicPropertyNames_newList(void* ptr);
void* WalletModel539e18___findChildren_atList(void* ptr, int i);
void WalletModel539e18___findChildren_setList(void* ptr, void* i);
void* WalletModel539e18___findChildren_newList(void* ptr);
void* WalletModel539e18___findChildren_atList3(void* ptr, int i);
void WalletModel539e18___findChildren_setList3(void* ptr, void* i);
void* WalletModel539e18___findChildren_newList3(void* ptr);
void* WalletModel539e18___qFindChildren_atList2(void* ptr, int i);
void WalletModel539e18___qFindChildren_setList2(void* ptr, void* i);
void* WalletModel539e18___qFindChildren_newList2(void* ptr);
void* WalletModel539e18___loadModel_v0_atList(void* ptr, int i);
void WalletModel539e18___loadModel_v0_setList(void* ptr, void* i);
void* WalletModel539e18___loadModel_v0_newList(void* ptr);
void* WalletModel539e18___roles_atList(void* ptr, int v, int i);
void WalletModel539e18___roles_setList(void* ptr, int key, void* i);
void* WalletModel539e18___roles_newList(void* ptr);
struct Moc_PackedList WalletModel539e18___roles_keyList(void* ptr);
void* WalletModel539e18___setRoles_roles_atList(void* ptr, int v, int i);
void WalletModel539e18___setRoles_roles_setList(void* ptr, int key, void* i);
void* WalletModel539e18___setRoles_roles_newList(void* ptr);
struct Moc_PackedList WalletModel539e18___setRoles_roles_keyList(void* ptr);
void* WalletModel539e18___rolesChanged_roles_atList(void* ptr, int v, int i);
void WalletModel539e18___rolesChanged_roles_setList(void* ptr, int key, void* i);
void* WalletModel539e18___rolesChanged_roles_newList(void* ptr);
struct Moc_PackedList WalletModel539e18___rolesChanged_roles_keyList(void* ptr);
void* WalletModel539e18___wallets_atList(void* ptr, int i);
void WalletModel539e18___wallets_setList(void* ptr, void* i);
void* WalletModel539e18___wallets_newList(void* ptr);
void* WalletModel539e18___setWallets_wallets_atList(void* ptr, int i);
void WalletModel539e18___setWallets_wallets_setList(void* ptr, void* i);
void* WalletModel539e18___setWallets_wallets_newList(void* ptr);
void* WalletModel539e18___walletsChanged_wallets_atList(void* ptr, int i);
void WalletModel539e18___walletsChanged_wallets_setList(void* ptr, void* i);
void* WalletModel539e18___walletsChanged_wallets_newList(void* ptr);
int WalletModel539e18_____roles_keyList_atList(void* ptr, int i);
void WalletModel539e18_____roles_keyList_setList(void* ptr, int i);
void* WalletModel539e18_____roles_keyList_newList(void* ptr);
int WalletModel539e18_____setRoles_roles_keyList_atList(void* ptr, int i);
void WalletModel539e18_____setRoles_roles_keyList_setList(void* ptr, int i);
void* WalletModel539e18_____setRoles_roles_keyList_newList(void* ptr);
int WalletModel539e18_____rolesChanged_roles_keyList_atList(void* ptr, int i);
void WalletModel539e18_____rolesChanged_roles_keyList_setList(void* ptr, int i);
void* WalletModel539e18_____rolesChanged_roles_keyList_newList(void* ptr);
void* WalletModel539e18_NewWalletModel(void* parent);
void WalletModel539e18_DestroyWalletModel(void* ptr);
void WalletModel539e18_DestroyWalletModelDefault(void* ptr);
char WalletModel539e18_DropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
long long WalletModel539e18_FlagsDefault(void* ptr, void* index);
void* WalletModel539e18_IndexDefault(void* ptr, int row, int column, void* parent);
void* WalletModel539e18_SiblingDefault(void* ptr, int row, int column, void* idx);
void* WalletModel539e18_BuddyDefault(void* ptr, void* index);
char WalletModel539e18_CanDropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
char WalletModel539e18_CanFetchMoreDefault(void* ptr, void* parent);
int WalletModel539e18_ColumnCountDefault(void* ptr, void* parent);
void* WalletModel539e18_DataDefault(void* ptr, void* index, int role);
void WalletModel539e18_FetchMoreDefault(void* ptr, void* parent);
char WalletModel539e18_HasChildrenDefault(void* ptr, void* parent);
void* WalletModel539e18_HeaderDataDefault(void* ptr, int section, long long orientation, int role);
char WalletModel539e18_InsertColumnsDefault(void* ptr, int column, int count, void* parent);
char WalletModel539e18_InsertRowsDefault(void* ptr, int row, int count, void* parent);
struct Moc_PackedList WalletModel539e18_ItemDataDefault(void* ptr, void* index);
struct Moc_PackedList WalletModel539e18_MatchDefault(void* ptr, void* start, int role, void* value, int hits, long long flags);
void* WalletModel539e18_MimeDataDefault(void* ptr, void* indexes);
struct Moc_PackedString WalletModel539e18_MimeTypesDefault(void* ptr);
char WalletModel539e18_MoveColumnsDefault(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char WalletModel539e18_MoveRowsDefault(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
void* WalletModel539e18_ParentDefault(void* ptr, void* index);
char WalletModel539e18_RemoveColumnsDefault(void* ptr, int column, int count, void* parent);
char WalletModel539e18_RemoveRowsDefault(void* ptr, int row, int count, void* parent);
void WalletModel539e18_ResetInternalDataDefault(void* ptr);
void WalletModel539e18_RevertDefault(void* ptr);
struct Moc_PackedList WalletModel539e18_RoleNamesDefault(void* ptr);
int WalletModel539e18_RowCountDefault(void* ptr, void* parent);
char WalletModel539e18_SetDataDefault(void* ptr, void* index, void* value, int role);
char WalletModel539e18_SetHeaderDataDefault(void* ptr, int section, long long orientation, void* value, int role);
char WalletModel539e18_SetItemDataDefault(void* ptr, void* index, void* roles);
void WalletModel539e18_SortDefault(void* ptr, int column, long long order);
void* WalletModel539e18_SpanDefault(void* ptr, void* index);
char WalletModel539e18_SubmitDefault(void* ptr);
long long WalletModel539e18_SupportedDragActionsDefault(void* ptr);
long long WalletModel539e18_SupportedDropActionsDefault(void* ptr);
void WalletModel539e18_ChildEventDefault(void* ptr, void* event);
void WalletModel539e18_ConnectNotifyDefault(void* ptr, void* sign);
void WalletModel539e18_CustomEventDefault(void* ptr, void* event);
void WalletModel539e18_DeleteLaterDefault(void* ptr);
void WalletModel539e18_DisconnectNotifyDefault(void* ptr, void* sign);
char WalletModel539e18_EventDefault(void* ptr, void* e);
char WalletModel539e18_EventFilterDefault(void* ptr, void* watched, void* event);
void WalletModel539e18_TimerEventDefault(void* ptr, void* event);
void AddressesModel539e18_AddAddress(void* ptr, void* v0);
void AddressesModel539e18_RemoveAddress(void* ptr, int v0);
void AddressesModel539e18_EditAddress(void* ptr, int v0, struct Moc_PackedString v1, unsigned long long v2, unsigned long long v3, int v4);
void AddressesModel539e18_LoadModel(void* ptr, void* v0);
struct Moc_PackedList AddressesModel539e18_Roles(void* ptr);
struct Moc_PackedList AddressesModel539e18_RolesDefault(void* ptr);
void AddressesModel539e18_SetRoles(void* ptr, void* roles);
void AddressesModel539e18_SetRolesDefault(void* ptr, void* roles);
void AddressesModel539e18_ConnectRolesChanged(void* ptr);
void AddressesModel539e18_DisconnectRolesChanged(void* ptr);
void AddressesModel539e18_RolesChanged(void* ptr, void* roles);
struct Moc_PackedList AddressesModel539e18_Addresses(void* ptr);
struct Moc_PackedList AddressesModel539e18_AddressesDefault(void* ptr);
void AddressesModel539e18_SetAddresses(void* ptr, void* addresses);
void AddressesModel539e18_SetAddressesDefault(void* ptr, void* addresses);
void AddressesModel539e18_ConnectAddressesChanged(void* ptr);
void AddressesModel539e18_DisconnectAddressesChanged(void* ptr);
void AddressesModel539e18_AddressesChanged(void* ptr, void* addresses);
int AddressesModel539e18_Count(void* ptr);
int AddressesModel539e18_CountDefault(void* ptr);
void AddressesModel539e18_SetCount(void* ptr, int count);
void AddressesModel539e18_SetCountDefault(void* ptr, int count);
void AddressesModel539e18_ConnectCountChanged(void* ptr);
void AddressesModel539e18_DisconnectCountChanged(void* ptr);
void AddressesModel539e18_CountChanged(void* ptr, int count);
int AddressesModel539e18_AddressesModel539e18_QRegisterMetaType();
int AddressesModel539e18_AddressesModel539e18_QRegisterMetaType2(char* typeName);
int AddressesModel539e18_AddressesModel539e18_QmlRegisterType();
int AddressesModel539e18_AddressesModel539e18_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
int AddressesModel539e18_____itemData_keyList_atList(void* ptr, int i);
void AddressesModel539e18_____itemData_keyList_setList(void* ptr, int i);
void* AddressesModel539e18_____itemData_keyList_newList(void* ptr);
int AddressesModel539e18_____roleNames_keyList_atList(void* ptr, int i);
void AddressesModel539e18_____roleNames_keyList_setList(void* ptr, int i);
void* AddressesModel539e18_____roleNames_keyList_newList(void* ptr);
int AddressesModel539e18_____setItemData_roles_keyList_atList(void* ptr, int i);
void AddressesModel539e18_____setItemData_roles_keyList_setList(void* ptr, int i);
void* AddressesModel539e18_____setItemData_roles_keyList_newList(void* ptr);
void* AddressesModel539e18___changePersistentIndexList_from_atList(void* ptr, int i);
void AddressesModel539e18___changePersistentIndexList_from_setList(void* ptr, void* i);
void* AddressesModel539e18___changePersistentIndexList_from_newList(void* ptr);
void* AddressesModel539e18___changePersistentIndexList_to_atList(void* ptr, int i);
void AddressesModel539e18___changePersistentIndexList_to_setList(void* ptr, void* i);
void* AddressesModel539e18___changePersistentIndexList_to_newList(void* ptr);
int AddressesModel539e18___dataChanged_roles_atList(void* ptr, int i);
void AddressesModel539e18___dataChanged_roles_setList(void* ptr, int i);
void* AddressesModel539e18___dataChanged_roles_newList(void* ptr);
void* AddressesModel539e18___itemData_atList(void* ptr, int v, int i);
void AddressesModel539e18___itemData_setList(void* ptr, int key, void* i);
void* AddressesModel539e18___itemData_newList(void* ptr);
struct Moc_PackedList AddressesModel539e18___itemData_keyList(void* ptr);
void* AddressesModel539e18___layoutAboutToBeChanged_parents_atList(void* ptr, int i);
void AddressesModel539e18___layoutAboutToBeChanged_parents_setList(void* ptr, void* i);
void* AddressesModel539e18___layoutAboutToBeChanged_parents_newList(void* ptr);
void* AddressesModel539e18___layoutChanged_parents_atList(void* ptr, int i);
void AddressesModel539e18___layoutChanged_parents_setList(void* ptr, void* i);
void* AddressesModel539e18___layoutChanged_parents_newList(void* ptr);
void* AddressesModel539e18___match_atList(void* ptr, int i);
void AddressesModel539e18___match_setList(void* ptr, void* i);
void* AddressesModel539e18___match_newList(void* ptr);
void* AddressesModel539e18___mimeData_indexes_atList(void* ptr, int i);
void AddressesModel539e18___mimeData_indexes_setList(void* ptr, void* i);
void* AddressesModel539e18___mimeData_indexes_newList(void* ptr);
void* AddressesModel539e18___persistentIndexList_atList(void* ptr, int i);
void AddressesModel539e18___persistentIndexList_setList(void* ptr, void* i);
void* AddressesModel539e18___persistentIndexList_newList(void* ptr);
void* AddressesModel539e18___roleNames_atList(void* ptr, int v, int i);
void AddressesModel539e18___roleNames_setList(void* ptr, int key, void* i);
void* AddressesModel539e18___roleNames_newList(void* ptr);
struct Moc_PackedList AddressesModel539e18___roleNames_keyList(void* ptr);
void* AddressesModel539e18___setItemData_roles_atList(void* ptr, int v, int i);
void AddressesModel539e18___setItemData_roles_setList(void* ptr, int key, void* i);
void* AddressesModel539e18___setItemData_roles_newList(void* ptr);
struct Moc_PackedList AddressesModel539e18___setItemData_roles_keyList(void* ptr);
int AddressesModel539e18_____doSetRoleNames_roleNames_keyList_atList(void* ptr, int i);
void AddressesModel539e18_____doSetRoleNames_roleNames_keyList_setList(void* ptr, int i);
void* AddressesModel539e18_____doSetRoleNames_roleNames_keyList_newList(void* ptr);
int AddressesModel539e18_____setRoleNames_roleNames_keyList_atList(void* ptr, int i);
void AddressesModel539e18_____setRoleNames_roleNames_keyList_setList(void* ptr, int i);
void* AddressesModel539e18_____setRoleNames_roleNames_keyList_newList(void* ptr);
void* AddressesModel539e18___children_atList(void* ptr, int i);
void AddressesModel539e18___children_setList(void* ptr, void* i);
void* AddressesModel539e18___children_newList(void* ptr);
void* AddressesModel539e18___dynamicPropertyNames_atList(void* ptr, int i);
void AddressesModel539e18___dynamicPropertyNames_setList(void* ptr, void* i);
void* AddressesModel539e18___dynamicPropertyNames_newList(void* ptr);
void* AddressesModel539e18___findChildren_atList(void* ptr, int i);
void AddressesModel539e18___findChildren_setList(void* ptr, void* i);
void* AddressesModel539e18___findChildren_newList(void* ptr);
void* AddressesModel539e18___findChildren_atList3(void* ptr, int i);
void AddressesModel539e18___findChildren_setList3(void* ptr, void* i);
void* AddressesModel539e18___findChildren_newList3(void* ptr);
void* AddressesModel539e18___qFindChildren_atList2(void* ptr, int i);
void AddressesModel539e18___qFindChildren_setList2(void* ptr, void* i);
void* AddressesModel539e18___qFindChildren_newList2(void* ptr);
void* AddressesModel539e18___loadModel_v0_atList(void* ptr, int i);
void AddressesModel539e18___loadModel_v0_setList(void* ptr, void* i);
void* AddressesModel539e18___loadModel_v0_newList(void* ptr);
void* AddressesModel539e18___roles_atList(void* ptr, int v, int i);
void AddressesModel539e18___roles_setList(void* ptr, int key, void* i);
void* AddressesModel539e18___roles_newList(void* ptr);
struct Moc_PackedList AddressesModel539e18___roles_keyList(void* ptr);
void* AddressesModel539e18___setRoles_roles_atList(void* ptr, int v, int i);
void AddressesModel539e18___setRoles_roles_setList(void* ptr, int key, void* i);
void* AddressesModel539e18___setRoles_roles_newList(void* ptr);
struct Moc_PackedList AddressesModel539e18___setRoles_roles_keyList(void* ptr);
void* AddressesModel539e18___rolesChanged_roles_atList(void* ptr, int v, int i);
void AddressesModel539e18___rolesChanged_roles_setList(void* ptr, int key, void* i);
void* AddressesModel539e18___rolesChanged_roles_newList(void* ptr);
struct Moc_PackedList AddressesModel539e18___rolesChanged_roles_keyList(void* ptr);
void* AddressesModel539e18___addresses_atList(void* ptr, int i);
void AddressesModel539e18___addresses_setList(void* ptr, void* i);
void* AddressesModel539e18___addresses_newList(void* ptr);
void* AddressesModel539e18___setAddresses_addresses_atList(void* ptr, int i);
void AddressesModel539e18___setAddresses_addresses_setList(void* ptr, void* i);
void* AddressesModel539e18___setAddresses_addresses_newList(void* ptr);
void* AddressesModel539e18___addressesChanged_addresses_atList(void* ptr, int i);
void AddressesModel539e18___addressesChanged_addresses_setList(void* ptr, void* i);
void* AddressesModel539e18___addressesChanged_addresses_newList(void* ptr);
int AddressesModel539e18_____roles_keyList_atList(void* ptr, int i);
void AddressesModel539e18_____roles_keyList_setList(void* ptr, int i);
void* AddressesModel539e18_____roles_keyList_newList(void* ptr);
int AddressesModel539e18_____setRoles_roles_keyList_atList(void* ptr, int i);
void AddressesModel539e18_____setRoles_roles_keyList_setList(void* ptr, int i);
void* AddressesModel539e18_____setRoles_roles_keyList_newList(void* ptr);
int AddressesModel539e18_____rolesChanged_roles_keyList_atList(void* ptr, int i);
void AddressesModel539e18_____rolesChanged_roles_keyList_setList(void* ptr, int i);
void* AddressesModel539e18_____rolesChanged_roles_keyList_newList(void* ptr);
void* AddressesModel539e18_NewAddressesModel(void* parent);
void AddressesModel539e18_DestroyAddressesModel(void* ptr);
void AddressesModel539e18_DestroyAddressesModelDefault(void* ptr);
char AddressesModel539e18_DropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
long long AddressesModel539e18_FlagsDefault(void* ptr, void* index);
void* AddressesModel539e18_IndexDefault(void* ptr, int row, int column, void* parent);
void* AddressesModel539e18_SiblingDefault(void* ptr, int row, int column, void* idx);
void* AddressesModel539e18_BuddyDefault(void* ptr, void* index);
char AddressesModel539e18_CanDropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
char AddressesModel539e18_CanFetchMoreDefault(void* ptr, void* parent);
int AddressesModel539e18_ColumnCountDefault(void* ptr, void* parent);
void* AddressesModel539e18_DataDefault(void* ptr, void* index, int role);
void AddressesModel539e18_FetchMoreDefault(void* ptr, void* parent);
char AddressesModel539e18_HasChildrenDefault(void* ptr, void* parent);
void* AddressesModel539e18_HeaderDataDefault(void* ptr, int section, long long orientation, int role);
char AddressesModel539e18_InsertColumnsDefault(void* ptr, int column, int count, void* parent);
char AddressesModel539e18_InsertRowsDefault(void* ptr, int row, int count, void* parent);
struct Moc_PackedList AddressesModel539e18_ItemDataDefault(void* ptr, void* index);
struct Moc_PackedList AddressesModel539e18_MatchDefault(void* ptr, void* start, int role, void* value, int hits, long long flags);
void* AddressesModel539e18_MimeDataDefault(void* ptr, void* indexes);
struct Moc_PackedString AddressesModel539e18_MimeTypesDefault(void* ptr);
char AddressesModel539e18_MoveColumnsDefault(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char AddressesModel539e18_MoveRowsDefault(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
void* AddressesModel539e18_ParentDefault(void* ptr, void* index);
char AddressesModel539e18_RemoveColumnsDefault(void* ptr, int column, int count, void* parent);
char AddressesModel539e18_RemoveRowsDefault(void* ptr, int row, int count, void* parent);
void AddressesModel539e18_ResetInternalDataDefault(void* ptr);
void AddressesModel539e18_RevertDefault(void* ptr);
struct Moc_PackedList AddressesModel539e18_RoleNamesDefault(void* ptr);
int AddressesModel539e18_RowCountDefault(void* ptr, void* parent);
char AddressesModel539e18_SetDataDefault(void* ptr, void* index, void* value, int role);
char AddressesModel539e18_SetHeaderDataDefault(void* ptr, int section, long long orientation, void* value, int role);
char AddressesModel539e18_SetItemDataDefault(void* ptr, void* index, void* roles);
void AddressesModel539e18_SortDefault(void* ptr, int column, long long order);
void* AddressesModel539e18_SpanDefault(void* ptr, void* index);
char AddressesModel539e18_SubmitDefault(void* ptr);
long long AddressesModel539e18_SupportedDragActionsDefault(void* ptr);
long long AddressesModel539e18_SupportedDropActionsDefault(void* ptr);
void AddressesModel539e18_ChildEventDefault(void* ptr, void* event);
void AddressesModel539e18_ConnectNotifyDefault(void* ptr, void* sign);
void AddressesModel539e18_CustomEventDefault(void* ptr, void* event);
void AddressesModel539e18_DeleteLaterDefault(void* ptr);
void AddressesModel539e18_DisconnectNotifyDefault(void* ptr, void* sign);
char AddressesModel539e18_EventDefault(void* ptr, void* e);
char AddressesModel539e18_EventFilterDefault(void* ptr, void* watched, void* event);
void AddressesModel539e18_TimerEventDefault(void* ptr, void* event);
void ModelManager539e18_SetWalletManager(void* ptr, void* v0);
void* ModelManager539e18_GetAddressModel(void* ptr, struct Moc_PackedString v0);
int ModelManager539e18_ModelManager539e18_QRegisterMetaType();
int ModelManager539e18_ModelManager539e18_QRegisterMetaType2(char* typeName);
int ModelManager539e18_ModelManager539e18_QmlRegisterType();
int ModelManager539e18_ModelManager539e18_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* ModelManager539e18___children_atList(void* ptr, int i);
void ModelManager539e18___children_setList(void* ptr, void* i);
void* ModelManager539e18___children_newList(void* ptr);
void* ModelManager539e18___dynamicPropertyNames_atList(void* ptr, int i);
void ModelManager539e18___dynamicPropertyNames_setList(void* ptr, void* i);
void* ModelManager539e18___dynamicPropertyNames_newList(void* ptr);
void* ModelManager539e18___findChildren_atList(void* ptr, int i);
void ModelManager539e18___findChildren_setList(void* ptr, void* i);
void* ModelManager539e18___findChildren_newList(void* ptr);
void* ModelManager539e18___findChildren_atList3(void* ptr, int i);
void ModelManager539e18___findChildren_setList3(void* ptr, void* i);
void* ModelManager539e18___findChildren_newList3(void* ptr);
void* ModelManager539e18___qFindChildren_atList2(void* ptr, int i);
void ModelManager539e18___qFindChildren_setList2(void* ptr, void* i);
void* ModelManager539e18___qFindChildren_newList2(void* ptr);
void* ModelManager539e18_NewModelManager(void* parent);
void ModelManager539e18_DestroyModelManager(void* ptr);
void ModelManager539e18_DestroyModelManagerDefault(void* ptr);
void ModelManager539e18_ChildEventDefault(void* ptr, void* event);
void ModelManager539e18_ConnectNotifyDefault(void* ptr, void* sign);
void ModelManager539e18_CustomEventDefault(void* ptr, void* event);
void ModelManager539e18_DeleteLaterDefault(void* ptr);
void ModelManager539e18_DisconnectNotifyDefault(void* ptr, void* sign);
char ModelManager539e18_EventDefault(void* ptr, void* e);
char ModelManager539e18_EventFilterDefault(void* ptr, void* watched, void* event);
void ModelManager539e18_TimerEventDefault(void* ptr, void* event);
struct Moc_PackedString QAddress539e18_Address(void* ptr);
struct Moc_PackedString QAddress539e18_AddressDefault(void* ptr);
void QAddress539e18_SetAddress(void* ptr, struct Moc_PackedString address);
void QAddress539e18_SetAddressDefault(void* ptr, struct Moc_PackedString address);
void QAddress539e18_ConnectAddressChanged(void* ptr);
void QAddress539e18_DisconnectAddressChanged(void* ptr);
void QAddress539e18_AddressChanged(void* ptr, struct Moc_PackedString address);
unsigned long long QAddress539e18_AddressSky(void* ptr);
unsigned long long QAddress539e18_AddressSkyDefault(void* ptr);
void QAddress539e18_SetAddressSky(void* ptr, unsigned long long addressSky);
void QAddress539e18_SetAddressSkyDefault(void* ptr, unsigned long long addressSky);
void QAddress539e18_ConnectAddressSkyChanged(void* ptr);
void QAddress539e18_DisconnectAddressSkyChanged(void* ptr);
void QAddress539e18_AddressSkyChanged(void* ptr, unsigned long long addressSky);
unsigned long long QAddress539e18_AddressCoinHours(void* ptr);
unsigned long long QAddress539e18_AddressCoinHoursDefault(void* ptr);
void QAddress539e18_SetAddressCoinHours(void* ptr, unsigned long long addressCoinHours);
void QAddress539e18_SetAddressCoinHoursDefault(void* ptr, unsigned long long addressCoinHours);
void QAddress539e18_ConnectAddressCoinHoursChanged(void* ptr);
void QAddress539e18_DisconnectAddressCoinHoursChanged(void* ptr);
void QAddress539e18_AddressCoinHoursChanged(void* ptr, unsigned long long addressCoinHours);
int QAddress539e18_Marked(void* ptr);
int QAddress539e18_MarkedDefault(void* ptr);
void QAddress539e18_SetMarked(void* ptr, int marked);
void QAddress539e18_SetMarkedDefault(void* ptr, int marked);
void QAddress539e18_ConnectMarkedChanged(void* ptr);
void QAddress539e18_DisconnectMarkedChanged(void* ptr);
void QAddress539e18_MarkedChanged(void* ptr, int marked);
int QAddress539e18_QAddress539e18_QRegisterMetaType();
int QAddress539e18_QAddress539e18_QRegisterMetaType2(char* typeName);
int QAddress539e18_QAddress539e18_QmlRegisterType();
int QAddress539e18_QAddress539e18_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* QAddress539e18___children_atList(void* ptr, int i);
void QAddress539e18___children_setList(void* ptr, void* i);
void* QAddress539e18___children_newList(void* ptr);
void* QAddress539e18___dynamicPropertyNames_atList(void* ptr, int i);
void QAddress539e18___dynamicPropertyNames_setList(void* ptr, void* i);
void* QAddress539e18___dynamicPropertyNames_newList(void* ptr);
void* QAddress539e18___findChildren_atList(void* ptr, int i);
void QAddress539e18___findChildren_setList(void* ptr, void* i);
void* QAddress539e18___findChildren_newList(void* ptr);
void* QAddress539e18___findChildren_atList3(void* ptr, int i);
void QAddress539e18___findChildren_setList3(void* ptr, void* i);
void* QAddress539e18___findChildren_newList3(void* ptr);
void* QAddress539e18___qFindChildren_atList2(void* ptr, int i);
void QAddress539e18___qFindChildren_setList2(void* ptr, void* i);
void* QAddress539e18___qFindChildren_newList2(void* ptr);
void* QAddress539e18_NewQAddress(void* parent);
void QAddress539e18_DestroyQAddress(void* ptr);
void QAddress539e18_DestroyQAddressDefault(void* ptr);
void QAddress539e18_ChildEventDefault(void* ptr, void* event);
void QAddress539e18_ConnectNotifyDefault(void* ptr, void* sign);
void QAddress539e18_CustomEventDefault(void* ptr, void* event);
void QAddress539e18_DeleteLaterDefault(void* ptr);
void QAddress539e18_DisconnectNotifyDefault(void* ptr, void* sign);
char QAddress539e18_EventDefault(void* ptr, void* e);
char QAddress539e18_EventFilterDefault(void* ptr, void* watched, void* event);
void QAddress539e18_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif