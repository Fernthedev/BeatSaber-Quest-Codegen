#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(SpawnChevronObjectPoolsInstaller)
namespace GlobalNamespace {
class SpawnRotationChevron;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnChevronObjectPoolsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnChevronObjectPoolsInstaller);
// Type: ::SpawnChevronObjectPoolsInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4993))
// CS Name: ::SpawnChevronObjectPoolsInstaller*
class CORDL_TYPE SpawnChevronObjectPoolsInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _spawnRotationChevronPrefab offset 0x20
 __declspec(property(get=__get__spawnRotationChevronPrefab, put=__set__spawnRotationChevronPrefab)) ::GlobalNamespace::SpawnRotationChevron*  _spawnRotationChevronPrefab;

constexpr void __set__spawnRotationChevronPrefab(::GlobalNamespace::SpawnRotationChevron*  value) ;

constexpr ::GlobalNamespace::SpawnRotationChevron* __get__spawnRotationChevronPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SpawnRotationChevron*> __get__spawnRotationChevronPrefab() const;

/// @brief Method InstallBindings addr 0x23b55c4 size 0x84 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::SpawnChevronObjectPoolsInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x23b5648 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SpawnChevronObjectPoolsInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnChevronObjectPoolsInstaller(SpawnChevronObjectPoolsInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnChevronObjectPoolsInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnChevronObjectPoolsInstaller(SpawnChevronObjectPoolsInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpawnChevronObjectPoolsInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnChevronObjectPoolsInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnChevronObjectPoolsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnChevronObjectPoolsInstaller*, "", "SpawnChevronObjectPoolsInstaller");
