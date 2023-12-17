#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LobbyPlayerPermissionsModel)
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyPlayerPermissionsModel);
// Type: ::LobbyPlayerPermissionsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4505))
// CS Name: ::LobbyPlayerPermissionsModel*
class CORDL_TYPE LobbyPlayerPermissionsModel : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _menuRpcManager offset 0x10
 __declspec(property(get=__get__menuRpcManager, put=__set__menuRpcManager)) ::GlobalNamespace::IMenuRpcManager*  _menuRpcManager;

/// @brief Field _multiplayerSessionManager offset 0x18
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field <isPartyOwner>k__BackingField offset 0x20
 __declspec(property(get=__get__isPartyOwner_k__BackingField, put=__set__isPartyOwner_k__BackingField)) bool  _isPartyOwner_k__BackingField;

/// @brief Field <hasRecommendBeatmapPermission>k__BackingField offset 0x21
 __declspec(property(get=__get__hasRecommendBeatmapPermission_k__BackingField, put=__set__hasRecommendBeatmapPermission_k__BackingField)) bool  _hasRecommendBeatmapPermission_k__BackingField;

/// @brief Field <hasRecommendModifiersPermission>k__BackingField offset 0x22
 __declspec(property(get=__get__hasRecommendModifiersPermission_k__BackingField, put=__set__hasRecommendModifiersPermission_k__BackingField)) bool  _hasRecommendModifiersPermission_k__BackingField;

/// @brief Field <hasKickVotePermission>k__BackingField offset 0x23
 __declspec(property(get=__get__hasKickVotePermission_k__BackingField, put=__set__hasKickVotePermission_k__BackingField)) bool  _hasKickVotePermission_k__BackingField;

/// @brief Field <hasInvitePermission>k__BackingField offset 0x24
 __declspec(property(get=__get__hasInvitePermission_k__BackingField, put=__set__hasInvitePermission_k__BackingField)) bool  _hasInvitePermission_k__BackingField;

/// @brief Field permissionsChangedEvent offset 0x28
 __declspec(property(get=__get_permissionsChangedEvent, put=__set_permissionsChangedEvent)) ::System::Action*  permissionsChangedEvent;

 __declspec(property(get=get_isPartyOwner, put=set_isPartyOwner)) bool  isPartyOwner;

 __declspec(property(get=get_hasRecommendBeatmapPermission, put=set_hasRecommendBeatmapPermission)) bool  hasRecommendBeatmapPermission;

 __declspec(property(get=get_hasRecommendModifiersPermission, put=set_hasRecommendModifiersPermission)) bool  hasRecommendModifiersPermission;

 __declspec(property(get=get_hasKickVotePermission, put=set_hasKickVotePermission)) bool  hasKickVotePermission;

 __declspec(property(get=get_hasInvitePermission, put=set_hasInvitePermission)) bool  hasInvitePermission;

constexpr void __set__menuRpcManager(::GlobalNamespace::IMenuRpcManager*  value) ;

constexpr ::GlobalNamespace::IMenuRpcManager* __get__menuRpcManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> __get__menuRpcManager() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__isPartyOwner_k__BackingField(bool  value) ;

constexpr bool& __get__isPartyOwner_k__BackingField() ;

constexpr bool const& __get__isPartyOwner_k__BackingField() const;

constexpr void __set__hasRecommendBeatmapPermission_k__BackingField(bool  value) ;

constexpr bool& __get__hasRecommendBeatmapPermission_k__BackingField() ;

constexpr bool const& __get__hasRecommendBeatmapPermission_k__BackingField() const;

constexpr void __set__hasRecommendModifiersPermission_k__BackingField(bool  value) ;

constexpr bool& __get__hasRecommendModifiersPermission_k__BackingField() ;

constexpr bool const& __get__hasRecommendModifiersPermission_k__BackingField() const;

constexpr void __set__hasKickVotePermission_k__BackingField(bool  value) ;

constexpr bool& __get__hasKickVotePermission_k__BackingField() ;

constexpr bool const& __get__hasKickVotePermission_k__BackingField() const;

constexpr void __set__hasInvitePermission_k__BackingField(bool  value) ;

constexpr bool& __get__hasInvitePermission_k__BackingField() ;

constexpr bool const& __get__hasInvitePermission_k__BackingField() const;

constexpr void __set_permissionsChangedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_permissionsChangedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_permissionsChangedEvent() const;

/// @brief Method get_isPartyOwner addr 0x235b8b0 size 0x8 virtual false final false
inline bool get_isPartyOwner() ;

/// @brief Method set_isPartyOwner addr 0x235b8b8 size 0xc virtual false final false
inline void set_isPartyOwner(bool  value) ;

/// @brief Method get_hasRecommendBeatmapPermission addr 0x235b8c4 size 0x8 virtual false final false
inline bool get_hasRecommendBeatmapPermission() ;

/// @brief Method set_hasRecommendBeatmapPermission addr 0x235b8cc size 0xc virtual false final false
inline void set_hasRecommendBeatmapPermission(bool  value) ;

/// @brief Method get_hasRecommendModifiersPermission addr 0x235b8d8 size 0x8 virtual false final false
inline bool get_hasRecommendModifiersPermission() ;

/// @brief Method set_hasRecommendModifiersPermission addr 0x235b8e0 size 0xc virtual false final false
inline void set_hasRecommendModifiersPermission(bool  value) ;

/// @brief Method get_hasKickVotePermission addr 0x235b8ec size 0x8 virtual false final false
inline bool get_hasKickVotePermission() ;

/// @brief Method set_hasKickVotePermission addr 0x235b8f4 size 0xc virtual false final false
inline void set_hasKickVotePermission(bool  value) ;

/// @brief Method get_hasInvitePermission addr 0x235b900 size 0x8 virtual false final false
inline bool get_hasInvitePermission() ;

/// @brief Method set_hasInvitePermission addr 0x235b908 size 0xc virtual false final false
inline void set_hasInvitePermission(bool  value) ;

/// @brief Method add_permissionsChangedEvent addr 0x235b914 size 0x9c virtual false final false
inline void add_permissionsChangedEvent(::System::Action*  value) ;

/// @brief Method remove_permissionsChangedEvent addr 0x235b9b0 size 0x9c virtual false final false
inline void remove_permissionsChangedEvent(::System::Action*  value) ;

/// @brief Method Activate addr 0x235614c size 0xf0 virtual false final false
inline void Activate() ;

/// @brief Method Deactivate addr 0x23563dc size 0xf0 virtual false final false
inline void Deactivate() ;

/// @brief Method SetPlayerPermissions addr 0x235b28c size 0x44 virtual false final false
inline void SetPlayerPermissions(bool  isPartyOwner, bool  hasRecommendBeatmapPermission, bool  hasRecommendModifiersPermission, bool  hasKickVotePermission, bool  hasInvitePermission) ;

/// @brief Method HandleMenuRpcManagerSetPlayersPermissionConfiguration addr 0x235ba4c size 0x2ac virtual false final false
inline void HandleMenuRpcManagerSetPlayersPermissionConfiguration(::StringW  userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*  playersLobbyPermissionConfiguration) ;

static inline ::GlobalNamespace::LobbyPlayerPermissionsModel* New_ctor() ;

/// @brief Method .ctor addr 0x235bcf8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerPermissionsModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyPlayerPermissionsModel(LobbyPlayerPermissionsModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerPermissionsModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyPlayerPermissionsModel(LobbyPlayerPermissionsModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LobbyPlayerPermissionsModel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayerPermissionsModel, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyPlayerPermissionsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayerPermissionsModel*, "", "LobbyPlayerPermissionsModel");
