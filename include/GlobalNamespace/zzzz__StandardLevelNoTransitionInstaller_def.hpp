#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelNoTransitionInstaller)
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelNoTransitionInstaller);
// Type: ::StandardLevelNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6042))
// CS Name: ::StandardLevelNoTransitionInstaller*
class CORDL_TYPE StandardLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::NoTransitionInstaller)]{};

/// @brief Field _scenesTransitionSetupData offset 0x18
 __declspec(property(get=__get__scenesTransitionSetupData, put=__set__scenesTransitionSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  _scenesTransitionSetupData;

/// @brief Field _standardLevelNoTransitionInstallerData offset 0x20
 __declspec(property(get=__get__standardLevelNoTransitionInstallerData, put=__set__standardLevelNoTransitionInstallerData)) ::GlobalNamespace::StandardLevelNoTransitionInstallerData*  _standardLevelNoTransitionInstallerData;

 __declspec(property(get=get_standardLevelNoTransitionInstallerData)) ::GlobalNamespace::StandardLevelNoTransitionInstallerData*  standardLevelNoTransitionInstallerData;

constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* __get__scenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> __get__scenesTransitionSetupData() const;

constexpr void __set__standardLevelNoTransitionInstallerData(::GlobalNamespace::StandardLevelNoTransitionInstallerData*  value) ;

constexpr ::GlobalNamespace::StandardLevelNoTransitionInstallerData* __get__standardLevelNoTransitionInstallerData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelNoTransitionInstallerData*> __get__standardLevelNoTransitionInstallerData() const;

/// @brief Method get_standardLevelNoTransitionInstallerData addr 0x231b74c size 0x8 virtual false final false
inline ::GlobalNamespace::StandardLevelNoTransitionInstallerData* get_standardLevelNoTransitionInstallerData() ;

/// @brief Method InstallBindings addr 0x231b754 size 0x150 virtual true final false
inline void InstallBindings(::Zenject::DiContainer*  container) ;

static inline ::GlobalNamespace::StandardLevelNoTransitionInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x231bf10 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandardLevelNoTransitionInstaller()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelNoTransitionInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelNoTransitionInstaller*, "", "StandardLevelNoTransitionInstaller");
