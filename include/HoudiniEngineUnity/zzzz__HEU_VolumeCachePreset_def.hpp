#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VolumeCachePreset)
namespace HoudiniEngineUnity {
class HEU_VolumeLayerPreset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VolumeCachePreset);
// Type: HoudiniEngineUnity::HEU_VolumeCachePreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9612))
// CS Name: ::HoudiniEngineUnity::HEU_VolumeCachePreset*
class CORDL_TYPE HEU_VolumeCachePreset : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field _objName offset 0x10
 __declspec(property(get=__get__objName, put=__set__objName)) ::StringW  _objName;

/// @brief Field _geoName offset 0x18
 __declspec(property(get=__get__geoName, put=__set__geoName)) ::StringW  _geoName;

/// @brief Field _uiExpanded offset 0x20
 __declspec(property(get=__get__uiExpanded, put=__set__uiExpanded)) bool  _uiExpanded;

/// @brief Field _volumeLayersPresets offset 0x28
 __declspec(property(get=__get__volumeLayersPresets, put=__set__volumeLayersPresets)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*  _volumeLayersPresets;

/// @brief Field _terrainDataPath offset 0x30
 __declspec(property(get=__get__terrainDataPath, put=__set__terrainDataPath)) ::StringW  _terrainDataPath;

/// @brief Field _tile offset 0x38
 __declspec(property(get=__get__tile, put=__set__tile)) int32_t  _tile;

constexpr void __set__objName(::StringW  value) ;

constexpr ::StringW& __get__objName() ;

constexpr ::StringW const& __get__objName() const;

constexpr void __set__geoName(::StringW  value) ;

constexpr ::StringW& __get__geoName() ;

constexpr ::StringW const& __get__geoName() const;

constexpr void __set__uiExpanded(bool  value) ;

constexpr bool& __get__uiExpanded() ;

constexpr bool const& __get__uiExpanded() const;

constexpr void __set__volumeLayersPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>* __get__volumeLayersPresets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*> __get__volumeLayersPresets() const;

constexpr void __set__terrainDataPath(::StringW  value) ;

constexpr ::StringW& __get__terrainDataPath() ;

constexpr ::StringW const& __get__terrainDataPath() const;

constexpr void __set__tile(int32_t  value) ;

constexpr int32_t& __get__tile() ;

constexpr int32_t const& __get__tile() const;

static inline ::HoudiniEngineUnity::HEU_VolumeCachePreset* New_ctor() ;

/// @brief Method .ctor addr 0x214e870 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCachePreset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_VolumeCachePreset(HEU_VolumeCachePreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCachePreset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_VolumeCachePreset(HEU_VolumeCachePreset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_VolumeCachePreset()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VolumeCachePreset, 0x40>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeCachePreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeCachePreset*, "HoudiniEngineUnity", "HEU_VolumeCachePreset");
