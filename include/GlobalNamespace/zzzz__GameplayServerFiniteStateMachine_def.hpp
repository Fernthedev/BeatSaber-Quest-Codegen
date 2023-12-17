#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameplayServerFiniteStateMachine)
namespace GlobalNamespace {
struct __GameplayServerFiniteStateMachine__InitParams;
}
namespace GlobalNamespace {
class GameState;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class GameplayRpcManager;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class MenuRpcManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
namespace GlobalNamespace {
struct __GameplayServerFiniteStateMachine__InitParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayServerFiniteStateMachine);
MARK_VAL_T(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams);
// Type: ::InitParams
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12761))
// CS Name: ::GameplayServerFiniteStateMachine::InitParams
struct CORDL_TYPE __GameplayServerFiniteStateMachine__InitParams : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field taskUtility offset 0x0
 __declspec(property(get=__get_taskUtility, put=__set_taskUtility)) ::BGNet::Core::ITaskUtility*  taskUtility;

/// @brief Field multiplayerSessionManager offset 0x8
 __declspec(property(get=__get_multiplayerSessionManager, put=__set_multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager;

/// @brief Field creatorId offset 0x10
 __declspec(property(get=__get_creatorId, put=__set_creatorId)) ::StringW  creatorId;

/// @brief Field selectionMask offset 0x18
 __declspec(property(get=__get_selectionMask, put=__set_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask;

/// @brief Field configuration offset 0x40
 __declspec(property(get=__get_configuration, put=__set_configuration)) ::GlobalNamespace::GameplayServerConfiguration  configuration;

/// @brief Field beatmapProvider offset 0x58
 __declspec(property(get=__get_beatmapProvider, put=__set_beatmapProvider)) ::GlobalNamespace::IServerBeatmapProvider*  beatmapProvider;

constexpr void __set_taskUtility(::BGNet::Core::ITaskUtility*  value) ;

constexpr ::BGNet::Core::ITaskUtility* __get_taskUtility() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> __get_taskUtility() const;

constexpr void __set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get_multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get_multiplayerSessionManager() const;

constexpr void __set_creatorId(::StringW  value) ;

constexpr ::StringW& __get_creatorId() ;

constexpr ::StringW const& __get_creatorId() const;

constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_selectionMask() ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_selectionMask() const;

constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration  value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_configuration() ;

constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_configuration() const;

constexpr void __set_beatmapProvider(::GlobalNamespace::IServerBeatmapProvider*  value) ;

constexpr ::GlobalNamespace::IServerBeatmapProvider* __get_beatmapProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IServerBeatmapProvider*> __get_beatmapProvider() const;

/// @brief Method .ctor addr 0xe3bff0 size 0x30 virtual false final false
inline void _ctor(::BGNet::Core::ITaskUtility*  taskUtility, ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::StringW  creatorId, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration, ::GlobalNamespace::IServerBeatmapProvider*  beatmapProvider) ;

// Ctor Parameters [CppParam { name: "taskUtility", ty: "::BGNet::Core::ITaskUtility*", modifiers: "", def_value: None }, CppParam { name: "multiplayerSessionManager", ty: "::GlobalNamespace::IMultiplayerSessionManager*", modifiers: "", def_value: None }, CppParam { name: "creatorId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "selectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "configuration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }, CppParam { name: "beatmapProvider", ty: "::GlobalNamespace::IServerBeatmapProvider*", modifiers: "", def_value: None }]
constexpr __GameplayServerFiniteStateMachine__InitParams(::BGNet::Core::ITaskUtility*  taskUtility, ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::StringW  creatorId, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration, ::GlobalNamespace::IServerBeatmapProvider*  beatmapProvider) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GameplayServerFiniteStateMachine__InitParams(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GameplayServerFiniteStateMachine__InitParams()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GameplayServerFiniteStateMachine
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12762))
// CS Name: ::GameplayServerFiniteStateMachine*
class CORDL_TYPE GameplayServerFiniteStateMachine : public ::System::Object {
public:
// Declarations
using InitParams = ::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Object)]{};

/// @brief Field <taskUtility>k__BackingField offset 0x10
 __declspec(property(get=__get__taskUtility_k__BackingField, put=__set__taskUtility_k__BackingField)) ::BGNet::Core::ITaskUtility*  _taskUtility_k__BackingField;

/// @brief Field <multiplayerSessionManager>k__BackingField offset 0x18
 __declspec(property(get=__get__multiplayerSessionManager_k__BackingField, put=__set__multiplayerSessionManager_k__BackingField)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager_k__BackingField;

/// @brief Field <ownerUserId>k__BackingField offset 0x20
 __declspec(property(get=__get__ownerUserId_k__BackingField, put=__set__ownerUserId_k__BackingField)) ::StringW  _ownerUserId_k__BackingField;

/// @brief Field <selectionMask>k__BackingField offset 0x28
 __declspec(property(get=__get__selectionMask_k__BackingField, put=__set__selectionMask_k__BackingField)) ::GlobalNamespace::BeatmapLevelSelectionMask  _selectionMask_k__BackingField;

/// @brief Field <configuration>k__BackingField offset 0x50
 __declspec(property(get=__get__configuration_k__BackingField, put=__set__configuration_k__BackingField)) ::GlobalNamespace::GameplayServerConfiguration  _configuration_k__BackingField;

/// @brief Field <beatmapProvider>k__BackingField offset 0x68
 __declspec(property(get=__get__beatmapProvider_k__BackingField, put=__set__beatmapProvider_k__BackingField)) ::GlobalNamespace::IServerBeatmapProvider*  _beatmapProvider_k__BackingField;

/// @brief Field <menuRpcManager>k__BackingField offset 0x70
 __declspec(property(get=__get__menuRpcManager_k__BackingField, put=__set__menuRpcManager_k__BackingField)) ::GlobalNamespace::MenuRpcManager*  _menuRpcManager_k__BackingField;

/// @brief Field <gameplayRpcManager>k__BackingField offset 0x78
 __declspec(property(get=__get__gameplayRpcManager_k__BackingField, put=__set__gameplayRpcManager_k__BackingField)) ::GlobalNamespace::GameplayRpcManager*  _gameplayRpcManager_k__BackingField;

/// @brief Field state offset 0x80
 __declspec(property(get=__get_state, put=__set_state)) ::GlobalNamespace::GameState*  state;

/// @brief Field enteringState offset 0x88
 __declspec(property(get=__get_enteringState, put=__set_enteringState)) bool  enteringState;

 __declspec(property(get=get_taskUtility, put=set_taskUtility)) ::BGNet::Core::ITaskUtility*  taskUtility;

 __declspec(property(get=get_multiplayerSessionManager, put=set_multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager;

 __declspec(property(get=get_ownerUserId, put=set_ownerUserId)) ::StringW  ownerUserId;

 __declspec(property(get=get_selectionMask, put=set_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask;

 __declspec(property(get=get_configuration, put=set_configuration)) ::GlobalNamespace::GameplayServerConfiguration  configuration;

 __declspec(property(get=get_beatmapProvider, put=set_beatmapProvider)) ::GlobalNamespace::IServerBeatmapProvider*  beatmapProvider;

 __declspec(property(get=get_menuRpcManager, put=set_menuRpcManager)) ::GlobalNamespace::MenuRpcManager*  menuRpcManager;

 __declspec(property(get=get_gameplayRpcManager, put=set_gameplayRpcManager)) ::GlobalNamespace::GameplayRpcManager*  gameplayRpcManager;

constexpr void __set__taskUtility_k__BackingField(::BGNet::Core::ITaskUtility*  value) ;

constexpr ::BGNet::Core::ITaskUtility* __get__taskUtility_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> __get__taskUtility_k__BackingField() const;

constexpr void __set__multiplayerSessionManager_k__BackingField(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager_k__BackingField() const;

constexpr void __set__ownerUserId_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__ownerUserId_k__BackingField() ;

constexpr ::StringW const& __get__ownerUserId_k__BackingField() const;

constexpr void __set__selectionMask_k__BackingField(::GlobalNamespace::BeatmapLevelSelectionMask  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get__selectionMask_k__BackingField() ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get__selectionMask_k__BackingField() const;

constexpr void __set__configuration_k__BackingField(::GlobalNamespace::GameplayServerConfiguration  value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration& __get__configuration_k__BackingField() ;

constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get__configuration_k__BackingField() const;

constexpr void __set__beatmapProvider_k__BackingField(::GlobalNamespace::IServerBeatmapProvider*  value) ;

constexpr ::GlobalNamespace::IServerBeatmapProvider* __get__beatmapProvider_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IServerBeatmapProvider*> __get__beatmapProvider_k__BackingField() const;

constexpr void __set__menuRpcManager_k__BackingField(::GlobalNamespace::MenuRpcManager*  value) ;

constexpr ::GlobalNamespace::MenuRpcManager* __get__menuRpcManager_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuRpcManager*> __get__menuRpcManager_k__BackingField() const;

constexpr void __set__gameplayRpcManager_k__BackingField(::GlobalNamespace::GameplayRpcManager*  value) ;

constexpr ::GlobalNamespace::GameplayRpcManager* __get__gameplayRpcManager_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayRpcManager*> __get__gameplayRpcManager_k__BackingField() const;

constexpr void __set_state(::GlobalNamespace::GameState*  value) ;

constexpr ::GlobalNamespace::GameState* __get_state() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameState*> __get_state() const;

constexpr void __set_enteringState(bool  value) ;

constexpr bool& __get_enteringState() ;

constexpr bool const& __get_enteringState() const;

/// @brief Method get_taskUtility addr 0xe3bf38 size 0x8 virtual false final false
inline ::BGNet::Core::ITaskUtility* get_taskUtility() ;

/// @brief Method set_taskUtility addr 0xe3bf40 size 0x8 virtual false final false
inline void set_taskUtility(::BGNet::Core::ITaskUtility*  value) ;

/// @brief Method get_multiplayerSessionManager addr 0xe3bf48 size 0x8 virtual false final false
inline ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager() ;

/// @brief Method set_multiplayerSessionManager addr 0xe3bf50 size 0x8 virtual false final false
inline void set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

/// @brief Method get_ownerUserId addr 0xe3bf58 size 0x8 virtual false final false
inline ::StringW get_ownerUserId() ;

/// @brief Method set_ownerUserId addr 0xe3bf60 size 0x8 virtual false final false
inline void set_ownerUserId(::StringW  value) ;

/// @brief Method get_selectionMask addr 0xe3bf68 size 0x18 virtual false final false
inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method set_selectionMask addr 0xe3bf80 size 0x18 virtual false final false
inline void set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value) ;

/// @brief Method get_configuration addr 0xe3bf98 size 0x14 virtual false final false
inline ::GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method set_configuration addr 0xe3bfac size 0x14 virtual false final false
inline void set_configuration(::GlobalNamespace::GameplayServerConfiguration  value) ;

/// @brief Method get_beatmapProvider addr 0xe3bfc0 size 0x8 virtual false final false
inline ::GlobalNamespace::IServerBeatmapProvider* get_beatmapProvider() ;

/// @brief Method set_beatmapProvider addr 0xe3bfc8 size 0x8 virtual false final false
inline void set_beatmapProvider(::GlobalNamespace::IServerBeatmapProvider*  value) ;

/// @brief Method get_menuRpcManager addr 0xe3bfd0 size 0x8 virtual false final false
inline ::GlobalNamespace::MenuRpcManager* get_menuRpcManager() ;

/// @brief Method set_menuRpcManager addr 0xe3bfd8 size 0x8 virtual false final false
inline void set_menuRpcManager(::GlobalNamespace::MenuRpcManager*  value) ;

/// @brief Method get_gameplayRpcManager addr 0xe3bfe0 size 0x8 virtual false final false
inline ::GlobalNamespace::GameplayRpcManager* get_gameplayRpcManager() ;

/// @brief Method set_gameplayRpcManager addr 0xe3bfe8 size 0x8 virtual false final false
inline void set_gameplayRpcManager(::GlobalNamespace::GameplayRpcManager*  value) ;

static inline ::GlobalNamespace::GameplayServerFiniteStateMachine* New_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams  initParams) ;

/// @brief Method .ctor addr 0xe3be14 size 0x124 virtual false final false
inline void _ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams  initParams) ;

// Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayServerFiniteStateMachine(GameplayServerFiniteStateMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayServerFiniteStateMachine(GameplayServerFiniteStateMachine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplayServerFiniteStateMachine()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerFiniteStateMachine, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerFiniteStateMachine*, "", "GameplayServerFiniteStateMachine");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, "", "GameplayServerFiniteStateMachine/InitParams");
