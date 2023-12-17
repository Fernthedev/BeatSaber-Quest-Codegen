#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentInfoSO)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class EnvironmentSizeData;
}
namespace GlobalNamespace {
class EnvironmentLightGroups;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapLightshowSaveData;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentInfoSO);
// Type: ::EnvironmentInfoSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4170))
// CS Name: ::EnvironmentInfoSO*
class CORDL_TYPE EnvironmentInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field kLightGroupSubDir offset 0x0
static constexpr ::ConstString  kLightGroupSubDir{u"LightGroups"};

/// @brief Field _environmentName offset 0x18
 __declspec(property(get=__get__environmentName, put=__set__environmentName)) ::StringW  _environmentName;

/// @brief Field _colorScheme offset 0x20
 __declspec(property(get=__get__colorScheme, put=__set__colorScheme)) ::GlobalNamespace::ColorSchemeSO*  _colorScheme;

/// @brief Field _sceneInfo offset 0x28
 __declspec(property(get=__get__sceneInfo, put=__set__sceneInfo)) ::GlobalNamespace::SceneInfo*  _sceneInfo;

/// @brief Field _serializedName offset 0x30
 __declspec(property(get=__get__serializedName, put=__set__serializedName)) ::StringW  _serializedName;

/// @brief Field _environmentAssetDirectory offset 0x38
 __declspec(property(get=__get__environmentAssetDirectory, put=__set__environmentAssetDirectory)) ::StringW  _environmentAssetDirectory;

/// @brief Field _environmentType offset 0x40
 __declspec(property(get=__get__environmentType, put=__set__environmentType)) ::GlobalNamespace::EnvironmentTypeSO*  _environmentType;

/// @brief Field _environmentSizeData offset 0x48
 __declspec(property(get=__get__environmentSizeData, put=__set__environmentSizeData)) ::GlobalNamespace::EnvironmentSizeData*  _environmentSizeData;

/// @brief Field _environmentIntensityReductionOptions offset 0x50
 __declspec(property(get=__get__environmentIntensityReductionOptions, put=__set__environmentIntensityReductionOptions)) ::GlobalNamespace::EnvironmentIntensityReductionOptions*  _environmentIntensityReductionOptions;

/// @brief Field _environmentKeywords offset 0x58
 __declspec(property(get=__get__environmentKeywords, put=__set__environmentKeywords)) ::System::Collections::Generic::List_1<::StringW>*  _environmentKeywords;

/// @brief Field _lightGroups offset 0x60
 __declspec(property(get=__get__lightGroups, put=__set__lightGroups)) ::GlobalNamespace::EnvironmentLightGroups*  _lightGroups;

/// @brief Field _defaultEnvironmentEvents offset 0x68
 __declspec(property(get=__get__defaultEnvironmentEvents, put=__set__defaultEnvironmentEvents)) ::GlobalNamespace::DefaultEnvironmentEvents*  _defaultEnvironmentEvents;

/// @brief Field _defaultLightshowSaveData offset 0x70
 __declspec(property(get=__get__defaultLightshowSaveData, put=__set__defaultLightshowSaveData)) ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*  _defaultLightshowSaveData;

 __declspec(property(get=get_sceneInfo)) ::GlobalNamespace::SceneInfo*  sceneInfo;

 __declspec(property(get=get_environmentName)) ::StringW  environmentName;

 __declspec(property(get=get_colorScheme)) ::GlobalNamespace::ColorSchemeSO*  colorScheme;

 __declspec(property(get=get_serializedName)) ::StringW  serializedName;

 __declspec(property(get=get_environmentAssetDirectory)) ::StringW  environmentAssetDirectory;

 __declspec(property(get=get_environmentType)) ::GlobalNamespace::EnvironmentTypeSO*  environmentType;

 __declspec(property(get=get_environmentSizeData)) ::GlobalNamespace::EnvironmentSizeData*  environmentSizeData;

 __declspec(property(get=get_environmentIntensityReductionOptions)) ::GlobalNamespace::EnvironmentIntensityReductionOptions*  environmentIntensityReductionOptions;

 __declspec(property(get=get_environmentKeywords)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  environmentKeywords;

 __declspec(property(get=get_lightGroups)) ::GlobalNamespace::EnvironmentLightGroups*  lightGroups;

 __declspec(property(get=get_defaultEnvironmentEvents)) ::GlobalNamespace::DefaultEnvironmentEvents*  defaultEnvironmentEvents;

 __declspec(property(get=get_defaultLightshowSaveData)) ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*  defaultLightshowSaveData;

constexpr void __set__environmentName(::StringW  value) ;

constexpr ::StringW& __get__environmentName() ;

constexpr ::StringW const& __get__environmentName() const;

constexpr void __set__colorScheme(::GlobalNamespace::ColorSchemeSO*  value) ;

constexpr ::GlobalNamespace::ColorSchemeSO* __get__colorScheme() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> __get__colorScheme() const;

constexpr void __set__sceneInfo(::GlobalNamespace::SceneInfo*  value) ;

constexpr ::GlobalNamespace::SceneInfo* __get__sceneInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> __get__sceneInfo() const;

constexpr void __set__serializedName(::StringW  value) ;

constexpr ::StringW& __get__serializedName() ;

constexpr ::StringW const& __get__serializedName() const;

constexpr void __set__environmentAssetDirectory(::StringW  value) ;

constexpr ::StringW& __get__environmentAssetDirectory() ;

constexpr ::StringW const& __get__environmentAssetDirectory() const;

constexpr void __set__environmentType(::GlobalNamespace::EnvironmentTypeSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentTypeSO* __get__environmentType() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> __get__environmentType() const;

constexpr void __set__environmentSizeData(::GlobalNamespace::EnvironmentSizeData*  value) ;

constexpr ::GlobalNamespace::EnvironmentSizeData* __get__environmentSizeData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSizeData*> __get__environmentSizeData() const;

constexpr void __set__environmentIntensityReductionOptions(::GlobalNamespace::EnvironmentIntensityReductionOptions*  value) ;

constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions* __get__environmentIntensityReductionOptions() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentIntensityReductionOptions*> __get__environmentIntensityReductionOptions() const;

constexpr void __set__environmentKeywords(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get__environmentKeywords() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get__environmentKeywords() const;

constexpr void __set__lightGroups(::GlobalNamespace::EnvironmentLightGroups*  value) ;

constexpr ::GlobalNamespace::EnvironmentLightGroups* __get__lightGroups() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentLightGroups*> __get__lightGroups() const;

constexpr void __set__defaultEnvironmentEvents(::GlobalNamespace::DefaultEnvironmentEvents*  value) ;

constexpr ::GlobalNamespace::DefaultEnvironmentEvents* __get__defaultEnvironmentEvents() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultEnvironmentEvents*> __get__defaultEnvironmentEvents() const;

constexpr void __set__defaultLightshowSaveData(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*  value) ;

constexpr ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* __get__defaultLightshowSaveData() ;

constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*> __get__defaultLightshowSaveData() const;

/// @brief Method get_sceneInfo addr 0x22402dc size 0x8 virtual false final false
inline ::GlobalNamespace::SceneInfo* get_sceneInfo() ;

/// @brief Method get_environmentName addr 0x22402e4 size 0x8 virtual false final false
inline ::StringW get_environmentName() ;

/// @brief Method get_colorScheme addr 0x22402ec size 0x8 virtual false final false
inline ::GlobalNamespace::ColorSchemeSO* get_colorScheme() ;

/// @brief Method get_serializedName addr 0x22402f4 size 0x8 virtual false final false
inline ::StringW get_serializedName() ;

/// @brief Method get_environmentAssetDirectory addr 0x22402fc size 0x8 virtual false final false
inline ::StringW get_environmentAssetDirectory() ;

/// @brief Method get_environmentType addr 0x2240304 size 0x8 virtual false final false
inline ::GlobalNamespace::EnvironmentTypeSO* get_environmentType() ;

/// @brief Method get_environmentSizeData addr 0x224030c size 0x8 virtual false final false
inline ::GlobalNamespace::EnvironmentSizeData* get_environmentSizeData() ;

/// @brief Method get_environmentIntensityReductionOptions addr 0x2240314 size 0x8 virtual false final false
inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* get_environmentIntensityReductionOptions() ;

/// @brief Method get_environmentKeywords addr 0x224031c size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords() ;

/// @brief Method get_lightGroups addr 0x2240324 size 0x8 virtual false final false
inline ::GlobalNamespace::EnvironmentLightGroups* get_lightGroups() ;

/// @brief Method get_defaultEnvironmentEvents addr 0x224032c size 0x8 virtual false final false
inline ::GlobalNamespace::DefaultEnvironmentEvents* get_defaultEnvironmentEvents() ;

/// @brief Method get_defaultLightshowSaveData addr 0x2240334 size 0x8 virtual false final false
inline ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* get_defaultLightshowSaveData() ;

static inline ::GlobalNamespace::EnvironmentInfoSO* New_ctor() ;

/// @brief Method .ctor addr 0x224033c size 0x50 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfoSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentInfoSO(EnvironmentInfoSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfoSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentInfoSO(EnvironmentInfoSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentInfoSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentInfoSO, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentInfoSO*, "", "EnvironmentInfoSO");
