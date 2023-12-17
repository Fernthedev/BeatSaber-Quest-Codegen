#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerObservable)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObservable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerObservable);
// Type: ::MultiplayerConnectedPlayerObservable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5197))
// CS Name: ::MultiplayerConnectedPlayerObservable*
class CORDL_TYPE MultiplayerConnectedPlayerObservable : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _connectedPlayer offset 0x10
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

 __declspec(property(get=get_offsetSyncTime)) int64_t  offsetSyncTime;

 __declspec(property(get=get_isFailed)) bool  isFailed;

/// @brief Convert operator to "::GlobalNamespace::IMultiplayerObservable"
constexpr operator  ::GlobalNamespace::IMultiplayerObservable*() noexcept;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

static inline ::GlobalNamespace::MultiplayerConnectedPlayerObservable* New_ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method .ctor addr 0x22463a4 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method get_offsetSyncTime addr 0x22463cc size 0xa4 virtual true final true
inline int64_t get_offsetSyncTime() ;

/// @brief Method get_isFailed addr 0x2246470 size 0xc virtual true final true
inline bool get_isFailed() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObservable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConnectedPlayerObservable(MultiplayerConnectedPlayerObservable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObservable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConnectedPlayerObservable(MultiplayerConnectedPlayerObservable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConnectedPlayerObservable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerObservable, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObservable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObservable*, "", "MultiplayerConnectedPlayerObservable");
