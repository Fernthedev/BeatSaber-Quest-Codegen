#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLobbyAvatarPlace)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarPlace__Pool;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarPlace__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarPlace);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool);
// Type: ::MultiplayerLobbyAvatarPlace
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5225))
// CS Name: ::MultiplayerLobbyAvatarPlace*
class CORDL_TYPE MultiplayerLobbyAvatarPlace : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Method SetPositionAndRotation addr 0x2251d00 size 0x78 virtual false final false
inline void SetPositionAndRotation(::UnityEngine::Vector3  worldPos, ::UnityEngine::Quaternion  rotation) ;

static inline ::GlobalNamespace::MultiplayerLobbyAvatarPlace* New_ctor() ;

/// @brief Method .ctor addr 0x2251d78 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlace", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLobbyAvatarPlace(MultiplayerLobbyAvatarPlace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlace", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLobbyAvatarPlace(MultiplayerLobbyAvatarPlace const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLobbyAvatarPlace()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarPlace, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2821 }), TypeDefinitionIndex(TypeDefinitionIndex(5225)), TypeDefinitionIndex(TypeDefinitionIndex(11050))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5224))
// CS Name: ::MultiplayerLobbyAvatarPlace::Pool*
class CORDL_TYPE __MultiplayerLobbyAvatarPlace__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>)]{};

static inline ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x2251d80 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarPlace__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerLobbyAvatarPlace__Pool(__MultiplayerLobbyAvatarPlace__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarPlace__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerLobbyAvatarPlace__Pool(__MultiplayerLobbyAvatarPlace__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerLobbyAvatarPlace__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarPlace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarPlace*, "", "MultiplayerLobbyAvatarPlace");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*, "", "MultiplayerLobbyAvatarPlace/Pool");
