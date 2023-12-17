#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayersSpecificSettingsAtGameStartModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel);
MARK_REF_PTR_T(::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0);
// Type: ::<>c__DisplayClass13_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12928))
// CS Name: ::PlayersSpecificSettingsAtGameStartModel::<>c__DisplayClass13_0*
class CORDL_TYPE __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field player offset 0x10
 __declspec(property(get=__get_player, put=__set_player)) ::GlobalNamespace::IConnectedPlayer*  player;

constexpr void __set_player(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get_player() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get_player() const;

static inline ::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0* New_ctor() ;

/// @brief Method .ctor addr 0xe52fc0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SaveFromNetSerializable>b__0 addr 0xe52fc8 size 0x11c virtual false final false
inline bool _SaveFromNetSerializable_b__0(::GlobalNamespace::IConnectedPlayer*  p) ;

// Ctor Parameters [CppParam { name: "", ty: "__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0(__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0(__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PlayersSpecificSettingsAtGameStartModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12929))
// CS Name: ::PlayersSpecificSettingsAtGameStartModel*
class CORDL_TYPE PlayersSpecificSettingsAtGameStartModel : public ::System::Object {
public:
// Declarations
using __c__DisplayClass13_0 = ::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <localPlayerSpecificSettings>k__BackingField offset 0x10
 __declspec(property(get=__get__localPlayerSpecificSettings_k__BackingField, put=__set__localPlayerSpecificSettings_k__BackingField)) ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*  _localPlayerSpecificSettings_k__BackingField;

/// @brief Field <playersAtGameStartNetSerializable>k__BackingField offset 0x18
 __declspec(property(get=__get__playersAtGameStartNetSerializable_k__BackingField, put=__set__playersAtGameStartNetSerializable_k__BackingField)) ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*  _playersAtGameStartNetSerializable_k__BackingField;

/// @brief Field _multiplayerSessionManager offset 0x20
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

 __declspec(property(get=get_playersAtGameStart)) ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*  playersAtGameStart;

 __declspec(property(get=get_localPlayerSpecificSettings, put=set_localPlayerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*  localPlayerSpecificSettings;

 __declspec(property(get=get_playersAtGameStartNetSerializable, put=set_playersAtGameStartNetSerializable)) ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*  playersAtGameStartNetSerializable;

constexpr void __set__localPlayerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*  value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* __get__localPlayerSpecificSettings_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*> __get__localPlayerSpecificSettings_k__BackingField() const;

constexpr void __set__playersAtGameStartNetSerializable_k__BackingField(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*  value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* __get__playersAtGameStartNetSerializable_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*> __get__playersAtGameStartNetSerializable_k__BackingField() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

/// @brief Method get_playersAtGameStart addr 0xe52770 size 0x18 virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_playersAtGameStart() ;

/// @brief Method get_localPlayerSpecificSettings addr 0xe52788 size 0x8 virtual false final false
inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* get_localPlayerSpecificSettings() ;

/// @brief Method set_localPlayerSpecificSettings addr 0xe52790 size 0x8 virtual false final false
inline void set_localPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*  value) ;

/// @brief Method get_playersAtGameStartNetSerializable addr 0xe52798 size 0x8 virtual false final false
inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* get_playersAtGameStartNetSerializable() ;

/// @brief Method set_playersAtGameStartNetSerializable addr 0xe527a0 size 0x8 virtual false final false
inline void set_playersAtGameStartNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*  value) ;

static inline ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* New_ctor(::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*  localPlayerSpecificSettings) ;

/// @brief Method .ctor addr 0xe527a8 size 0x84 virtual false final false
inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*  localPlayerSpecificSettings) ;

/// @brief Method GetPlayerSpecificSettingsForUserId addr 0xe5282c size 0x3a8 virtual false final false
inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* GetPlayerSpecificSettingsForUserId(::StringW  userId) ;

/// @brief Method SaveFromNetSerializable addr 0xe52bd4 size 0x3ec virtual false final false
inline void SaveFromNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*  playersAtGameStartNetSerializable) ;

// Ctor Parameters [CppParam { name: "", ty: "PlayersSpecificSettingsAtGameStartModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayersSpecificSettingsAtGameStartModel(PlayersSpecificSettingsAtGameStartModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayersSpecificSettingsAtGameStartModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayersSpecificSettingsAtGameStartModel(PlayersSpecificSettingsAtGameStartModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayersSpecificSettingsAtGameStartModel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, "", "PlayersSpecificSettingsAtGameStartModel");
NEED_NO_BOX(::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0*, "", "PlayersSpecificSettingsAtGameStartModel/<>c__DisplayClass13_0");
