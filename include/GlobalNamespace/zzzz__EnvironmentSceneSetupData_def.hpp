#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentSceneSetupData)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentSceneSetupData);
// Type: ::EnvironmentSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6048))
// CS Name: ::EnvironmentSceneSetupData*
class CORDL_TYPE EnvironmentSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::SceneSetupData)]{};

/// @brief Field hideBranding offset 0x10
 __declspec(property(get=__get_hideBranding, put=__set_hideBranding)) bool  hideBranding;

/// @brief Field environmentInfo offset 0x18
 __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo;

/// @brief Field previewBeatmapLevel offset 0x20
 __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel;

constexpr void __set_hideBranding(bool  value) ;

constexpr bool& __get_hideBranding() ;

constexpr bool const& __get_hideBranding() const;

constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get_environmentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get_environmentInfo() const;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_previewBeatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_previewBeatmapLevel() const;

static inline ::GlobalNamespace::EnvironmentSceneSetupData* New_ctor(::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, bool  hideBranding) ;

/// @brief Method .ctor addr 0x231c3d0 size 0x3c virtual false final false
inline void _ctor(::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, bool  hideBranding) ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentSceneSetupData(EnvironmentSceneSetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentSceneSetupData(EnvironmentSceneSetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentSceneSetupData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSceneSetupData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSceneSetupData*, "", "EnvironmentSceneSetupData");
