#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerObjectInstaller)
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerObjectInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerObjectInstaller);
// Type: ::MultiplayerObjectInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5228))
// CS Name: ::MultiplayerObjectInstaller*
class CORDL_TYPE MultiplayerObjectInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _inEnvironmentTextsPrefab offset 0x20
 __declspec(property(get=__get__inEnvironmentTextsPrefab, put=__set__inEnvironmentTextsPrefab)) ::GlobalNamespace::MultiplayerScoreRingItem*  _inEnvironmentTextsPrefab;

/// @brief Field _fireworkItemControllerPrefab offset 0x28
 __declspec(property(get=__get__fireworkItemControllerPrefab, put=__set__fireworkItemControllerPrefab)) ::GlobalNamespace::FireworkItemController*  _fireworkItemControllerPrefab;

/// @brief Field _multiplayerResultsPyramidViewAvatarPrefab offset 0x30
 __declspec(property(get=__get__multiplayerResultsPyramidViewAvatarPrefab, put=__set__multiplayerResultsPyramidViewAvatarPrefab)) ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*  _multiplayerResultsPyramidViewAvatarPrefab;

constexpr void __set__inEnvironmentTextsPrefab(::GlobalNamespace::MultiplayerScoreRingItem*  value) ;

constexpr ::GlobalNamespace::MultiplayerScoreRingItem* __get__inEnvironmentTextsPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreRingItem*> __get__inEnvironmentTextsPrefab() const;

constexpr void __set__fireworkItemControllerPrefab(::GlobalNamespace::FireworkItemController*  value) ;

constexpr ::GlobalNamespace::FireworkItemController* __get__fireworkItemControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> __get__fireworkItemControllerPrefab() const;

constexpr void __set__multiplayerResultsPyramidViewAvatarPrefab(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*  value) ;

constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* __get__multiplayerResultsPyramidViewAvatarPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> __get__multiplayerResultsPyramidViewAvatarPrefab() const;

/// @brief Method InstallBindings addr 0x22529fc size 0x144 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::MultiplayerObjectInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x2252b40 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerObjectInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerObjectInstaller(MultiplayerObjectInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerObjectInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerObjectInstaller(MultiplayerObjectInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerObjectInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerObjectInstaller, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerObjectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerObjectInstaller*, "", "MultiplayerObjectInstaller");
