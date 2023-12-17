#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLobbyInstaller)
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyInstaller);
// Type: ::MultiplayerLobbyInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5399))
// CS Name: ::MultiplayerLobbyInstaller*
class CORDL_TYPE MultiplayerLobbyInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _multiplayerLobbyAvatarControllerPrefab offset 0x20
 __declspec(property(get=__get__multiplayerLobbyAvatarControllerPrefab, put=__set__multiplayerLobbyAvatarControllerPrefab)) ::GlobalNamespace::MultiplayerLobbyAvatarController*  _multiplayerLobbyAvatarControllerPrefab;

/// @brief Field _multiplayerAvatarPlacePrefab offset 0x28
 __declspec(property(get=__get__multiplayerAvatarPlacePrefab, put=__set__multiplayerAvatarPlacePrefab)) ::GlobalNamespace::MultiplayerLobbyAvatarPlace*  _multiplayerAvatarPlacePrefab;

constexpr void __set__multiplayerLobbyAvatarControllerPrefab(::GlobalNamespace::MultiplayerLobbyAvatarController*  value) ;

constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController* __get__multiplayerLobbyAvatarControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarController*> __get__multiplayerLobbyAvatarControllerPrefab() const;

constexpr void __set__multiplayerAvatarPlacePrefab(::GlobalNamespace::MultiplayerLobbyAvatarPlace*  value) ;

constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlace* __get__multiplayerAvatarPlacePrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarPlace*> __get__multiplayerAvatarPlacePrefab() const;

/// @brief Method InstallBindings addr 0x2272bf0 size 0xec virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::MultiplayerLobbyInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x2272cdc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLobbyInstaller(MultiplayerLobbyInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLobbyInstaller(MultiplayerLobbyInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLobbyInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyInstaller, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyInstaller*, "", "MultiplayerLobbyInstaller");
