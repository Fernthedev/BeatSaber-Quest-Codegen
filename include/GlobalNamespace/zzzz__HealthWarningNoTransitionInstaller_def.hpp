#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(HealthWarningNoTransitionInstaller)
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningNoTransitionInstaller);
// Type: ::HealthWarningNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6038))
// CS Name: ::HealthWarningNoTransitionInstaller*
class CORDL_TYPE HealthWarningNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::NoTransitionInstaller)]{};

/// @brief Field _healthWarningSceneSetupData offset 0x18
 __declspec(property(get=__get__healthWarningSceneSetupData, put=__set__healthWarningSceneSetupData)) ::GlobalNamespace::HealthWarningSceneSetupData*  _healthWarningSceneSetupData;

/// @brief Field _scenesTransitionSetupData offset 0x20
 __declspec(property(get=__get__scenesTransitionSetupData, put=__set__scenesTransitionSetupData)) ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*  _scenesTransitionSetupData;

constexpr void __set__healthWarningSceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData*  value) ;

constexpr ::GlobalNamespace::HealthWarningSceneSetupData* __get__healthWarningSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningSceneSetupData*> __get__healthWarningSceneSetupData() const;

constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* __get__scenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*> __get__scenesTransitionSetupData() const;

/// @brief Method InstallBindings addr 0x231b09c size 0x44 virtual true final false
inline void InstallBindings(::Zenject::DiContainer*  container) ;

static inline ::GlobalNamespace::HealthWarningNoTransitionInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x231b0e8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningNoTransitionInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HealthWarningNoTransitionInstaller(HealthWarningNoTransitionInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningNoTransitionInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HealthWarningNoTransitionInstaller(HealthWarningNoTransitionInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HealthWarningNoTransitionInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningNoTransitionInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningNoTransitionInstaller*, "", "HealthWarningNoTransitionInstaller");
