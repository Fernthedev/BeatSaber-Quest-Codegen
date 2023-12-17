#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MissionGameplayInstaller)
namespace GlobalNamespace {
class MissionGameplaySceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionGameplayInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionGameplayInstaller);
// Type: ::MissionGameplayInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5397))
// CS Name: ::MissionGameplayInstaller*
class CORDL_TYPE MissionGameplayInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _sceneSetupData offset 0x20
 __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData)) ::GlobalNamespace::MissionGameplaySceneSetupData*  _sceneSetupData;

constexpr void __set__sceneSetupData(::GlobalNamespace::MissionGameplaySceneSetupData*  value) ;

constexpr ::GlobalNamespace::MissionGameplaySceneSetupData* __get__sceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionGameplaySceneSetupData*> __get__sceneSetupData() const;

/// @brief Method InstallBindings addr 0x2272134 size 0x490 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::MissionGameplayInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x22725c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplayInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionGameplayInstaller(MissionGameplayInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplayInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionGameplayInstaller(MissionGameplayInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionGameplayInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionGameplayInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionGameplayInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionGameplayInstaller*, "", "MissionGameplayInstaller");
