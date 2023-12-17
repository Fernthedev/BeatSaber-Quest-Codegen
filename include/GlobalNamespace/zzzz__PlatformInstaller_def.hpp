#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "Zenject/zzzz__Installer_3_def.hpp"
CORDL_MODULE_EXPORT(PlatformInstaller)
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformInstaller);
// Type: ::PlatformInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11133), inst: 3910 }), TypeDefinitionIndex(TypeDefinitionIndex(15394)), TypeDefinitionIndex(TypeDefinitionIndex(11133)), TypeDefinitionIndex(TypeDefinitionIndex(4105))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4039))
// CS Name: ::PlatformInstaller*
class CORDL_TYPE PlatformInstaller : public ::Zenject::Installer_3<::GlobalNamespace::AppInitSetupData*,::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*,::GlobalNamespace::PlatformInstaller*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::Installer_3<::GlobalNamespace::AppInitSetupData*,::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*,::GlobalNamespace::PlatformInstaller*>)]{};

/// @brief Field _isTest offset 0x18
 __declspec(property(get=__get__isTest, put=__set__isTest)) bool  _isTest;

/// @brief Field _mockPlatformAdditionalContentModelInitialData offset 0x20
 __declspec(property(get=__get__mockPlatformAdditionalContentModelInitialData, put=__set__mockPlatformAdditionalContentModelInitialData)) ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  _mockPlatformAdditionalContentModelInitialData;

constexpr void __set__isTest(bool  value) ;

constexpr bool& __get__isTest() ;

constexpr bool const& __get__isTest() const;

constexpr void __set__mockPlatformAdditionalContentModelInitialData(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  value) ;

constexpr ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* __get__mockPlatformAdditionalContentModelInitialData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*> __get__mockPlatformAdditionalContentModelInitialData() const;

static inline ::GlobalNamespace::PlatformInstaller* New_ctor(::GlobalNamespace::AppInitSetupData*  appInitSetupData, ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  mockPlatformAdditionalContentModelInitialData) ;

/// @brief Method .ctor addr 0x2229acc size 0x78 virtual false final false
inline void _ctor(::GlobalNamespace::AppInitSetupData*  appInitSetupData, ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  mockPlatformAdditionalContentModelInitialData) ;

/// @brief Method InstallBindings addr 0x2229b44 size 0x28 virtual true final false
inline void InstallBindings() ;

/// @brief Method BindPlatformUserModel addr 0x2229b6c size 0xdc virtual false final false
inline void BindPlatformUserModel() ;

/// @brief Method BindBeatmapDataAssetFileModel addr 0x2229d38 size 0x7c virtual false final false
inline void BindBeatmapDataAssetFileModel() ;

/// @brief Method BindAchievementsHandler addr 0x2229c48 size 0x7c virtual false final false
inline void BindAchievementsHandler() ;

/// @brief Method BindAdditionalContentModel addr 0x2229cc4 size 0x74 virtual false final false
inline void BindAdditionalContentModel() ;

/// @brief Method BindMockPlatformAdditionalContentModel addr 0x2229db4 size 0x9c virtual false final false
inline void BindMockPlatformAdditionalContentModel() ;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInstaller(PlatformInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInstaller(PlatformInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlatformInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstaller*, "", "PlatformInstaller");
