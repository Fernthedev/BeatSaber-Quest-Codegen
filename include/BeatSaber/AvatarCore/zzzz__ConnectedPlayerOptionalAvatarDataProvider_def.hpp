#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectedPlayerOptionalAvatarDataProvider)
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSyncHandler;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class ConnectedPlayerOptionalAvatarDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider);
// Type: BeatSaber.AvatarCore::ConnectedPlayerOptionalAvatarDataProvider
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15203))
// CS Name: ::BeatSaber.AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*
class CORDL_TYPE ConnectedPlayerOptionalAvatarDataProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field dataDidChangeEvent offset 0x10
 __declspec(property(get=__get_dataDidChangeEvent, put=__set_dataDidChangeEvent)) ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*  dataDidChangeEvent;

/// @brief Field _connectedPlayer offset 0x18
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

/// @brief Field _multiplayerSessionManager offset 0x20
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _optionalAvatarDataSyncHandler offset 0x28
 __declspec(property(get=__get__optionalAvatarDataSyncHandler, put=__set__optionalAvatarDataSyncHandler)) ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*  _optionalAvatarDataSyncHandler;

 __declspec(property(get=get_currentData)) ::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>*  currentData;

 __declspec(property(get=get_playbackDelaySeconds)) float_t  playbackDelaySeconds;

/// @brief Convert operator to "::BeatSaber::AvatarCore::IOptionalAvatarDataProvider"
constexpr operator  ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*  value) ;

constexpr ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* __get_dataDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*> __get_dataDidChangeEvent() const;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__optionalAvatarDataSyncHandler(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*  value) ;

constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* __get__optionalAvatarDataSyncHandler() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*> __get__optionalAvatarDataSyncHandler() const;

/// @brief Method get_currentData addr 0xe104cc size 0x38 virtual true final true
inline ::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>* get_currentData() ;

/// @brief Method get_playbackDelaySeconds addr 0xe1056c size 0x12c virtual true final true
inline float_t get_playbackDelaySeconds() ;

/// @brief Method add_dataDidChangeEvent addr 0xe10698 size 0xb0 virtual true final true
inline void add_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*  value) ;

/// @brief Method remove_dataDidChangeEvent addr 0xe10748 size 0xb0 virtual true final true
inline void remove_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*  value) ;

static inline ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider* New_ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer, ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*  optionalAvatarDataSyncHandler) ;

/// @brief Method .ctor addr 0xe107f8 size 0xb4 virtual false final false
inline void _ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer, ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*  optionalAvatarDataSyncHandler) ;

/// @brief Method Dispose addr 0xe1095c size 0x94 virtual true final true
inline void Dispose() ;

/// @brief Method SetDisplayContext addr 0xe10aa0 size 0x4 virtual true final true
inline void SetDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext  avatarDisplayContext) ;

/// @brief Method HandleOptionalAvatarDataSyncHandlerDidChangeOptionalAvatarDataSync addr 0xe10aa4 size 0x16c virtual false final false
inline void HandleOptionalAvatarDataSyncHandlerDidChangeOptionalAvatarDataSync(::GlobalNamespace::IConnectedPlayer*  connectedPlayer, ::BeatSaber::AvatarCore::OptionalAvatarData  optionalAvatarData) ;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerOptionalAvatarDataProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectedPlayerOptionalAvatarDataProvider(ConnectedPlayerOptionalAvatarDataProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerOptionalAvatarDataProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectedPlayerOptionalAvatarDataProvider(ConnectedPlayerOptionalAvatarDataProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConnectedPlayerOptionalAvatarDataProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*, "BeatSaber.AvatarCore", "ConnectedPlayerOptionalAvatarDataProvider");
