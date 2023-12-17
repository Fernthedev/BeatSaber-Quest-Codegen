#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VolumeLayerPreset)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeLayerPreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VolumeLayerPreset);
// Type: HoudiniEngineUnity::HEU_VolumeLayerPreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9611))
// CS Name: ::HoudiniEngineUnity::HEU_VolumeLayerPreset*
class CORDL_TYPE HEU_VolumeLayerPreset : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _layerName offset 0x10
 __declspec(property(get=__get__layerName, put=__set__layerName)) ::StringW  _layerName;

/// @brief Field _strength offset 0x18
 __declspec(property(get=__get__strength, put=__set__strength)) float_t  _strength;

/// @brief Field _uiExpanded offset 0x1c
 __declspec(property(get=__get__uiExpanded, put=__set__uiExpanded)) bool  _uiExpanded;

/// @brief Field _tile offset 0x20
 __declspec(property(get=__get__tile, put=__set__tile)) int32_t  _tile;

constexpr void __set__layerName(::StringW  value) ;

constexpr ::StringW& __get__layerName() ;

constexpr ::StringW const& __get__layerName() const;

constexpr void __set__strength(float_t  value) ;

constexpr float_t& __get__strength() ;

constexpr float_t const& __get__strength() const;

constexpr void __set__uiExpanded(bool  value) ;

constexpr bool& __get__uiExpanded() ;

constexpr bool const& __get__uiExpanded() const;

constexpr void __set__tile(int32_t  value) ;

constexpr int32_t& __get__tile() ;

constexpr int32_t const& __get__tile() const;

static inline ::HoudiniEngineUnity::HEU_VolumeLayerPreset* New_ctor() ;

/// @brief Method .ctor addr 0x214e868 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayerPreset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_VolumeLayerPreset(HEU_VolumeLayerPreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayerPreset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_VolumeLayerPreset(HEU_VolumeLayerPreset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_VolumeLayerPreset()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VolumeLayerPreset, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeLayerPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeLayerPreset*, "HoudiniEngineUnity", "HEU_VolumeLayerPreset");
