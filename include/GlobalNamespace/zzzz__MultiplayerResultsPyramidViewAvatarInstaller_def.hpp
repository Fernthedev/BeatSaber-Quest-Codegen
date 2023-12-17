#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerResultsPyramidViewAvatarInstaller)
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatarInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller);
// Type: ::MultiplayerResultsPyramidViewAvatarInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5246))
// CS Name: ::MultiplayerResultsPyramidViewAvatarInstaller*
class CORDL_TYPE MultiplayerResultsPyramidViewAvatarInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _connectedPlayer offset 0x20
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

/// @brief Method InstallBindings addr 0x2258940 size 0x250 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x2258b90 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatarInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerResultsPyramidViewAvatarInstaller(MultiplayerResultsPyramidViewAvatarInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatarInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerResultsPyramidViewAvatarInstaller(MultiplayerResultsPyramidViewAvatarInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerResultsPyramidViewAvatarInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller*, "", "MultiplayerResultsPyramidViewAvatarInstaller");
