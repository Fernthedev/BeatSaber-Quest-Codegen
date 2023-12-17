#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(PlatformInstallerSO)
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class SonyAchievementIdsModelSO;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformInstallerSO);
// Type: ::PlatformInstallerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11147))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4038))
// CS Name: ::PlatformInstallerSO*
class CORDL_TYPE PlatformInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Zenject::ScriptableObjectInstaller)]{};

/// @brief Field _setupData offset 0x20
 __declspec(property(get=__get__setupData, put=__set__setupData)) ::GlobalNamespace::AppInitSetupData*  _setupData;

/// @brief Field _ps4AchievementIdsModel offset 0x28
 __declspec(property(get=__get__ps4AchievementIdsModel, put=__set__ps4AchievementIdsModel)) ::GlobalNamespace::SonyAchievementIdsModelSO*  _ps4AchievementIdsModel;

/// @brief Field _ps5AchievementIdsModel offset 0x30
 __declspec(property(get=__get__ps5AchievementIdsModel, put=__set__ps5AchievementIdsModel)) ::GlobalNamespace::SonyAchievementIdsModelSO*  _ps5AchievementIdsModel;

/// @brief Field _achievementIdsModel offset 0x38
 __declspec(property(get=__get__achievementIdsModel, put=__set__achievementIdsModel)) ::GlobalNamespace::AchievementIdsModelSO*  _achievementIdsModel;

/// @brief Field _mockPlatformAdditionalContentModelInitialData offset 0x40
 __declspec(property(get=__get__mockPlatformAdditionalContentModelInitialData, put=__set__mockPlatformAdditionalContentModelInitialData)) ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  _mockPlatformAdditionalContentModelInitialData;

constexpr void __set__setupData(::GlobalNamespace::AppInitSetupData*  value) ;

constexpr ::GlobalNamespace::AppInitSetupData* __get__setupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> __get__setupData() const;

constexpr void __set__ps4AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO*  value) ;

constexpr ::GlobalNamespace::SonyAchievementIdsModelSO* __get__ps4AchievementIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> __get__ps4AchievementIdsModel() const;

constexpr void __set__ps5AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO*  value) ;

constexpr ::GlobalNamespace::SonyAchievementIdsModelSO* __get__ps5AchievementIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> __get__ps5AchievementIdsModel() const;

constexpr void __set__achievementIdsModel(::GlobalNamespace::AchievementIdsModelSO*  value) ;

constexpr ::GlobalNamespace::AchievementIdsModelSO* __get__achievementIdsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementIdsModelSO*> __get__achievementIdsModel() const;

constexpr void __set__mockPlatformAdditionalContentModelInitialData(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  value) ;

constexpr ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* __get__mockPlatformAdditionalContentModelInitialData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*> __get__mockPlatformAdditionalContentModelInitialData() const;

/// @brief Method InstallBindings addr 0x2229a34 size 0x90 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::PlatformInstallerSO* New_ctor() ;

/// @brief Method .ctor addr 0x2229ac4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInstallerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInstallerSO(PlatformInstallerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInstallerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInstallerSO(PlatformInstallerSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlatformInstallerSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstallerSO, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstallerSO*, "", "PlatformInstallerSO");
