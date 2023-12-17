#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarVisualPropertyIds)
// Forward declare root types
namespace GlobalNamespace {
class AvatarVisualPropertyIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarVisualPropertyIds);
// Type: ::AvatarVisualPropertyIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15161))
// CS Name: ::AvatarVisualPropertyIds*
class CORDL_TYPE AvatarVisualPropertyIds : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kKeywordPointLightIsLocal offset 0x0
static constexpr ::ConstString  kKeywordPointLightIsLocal{u"POINT_LIGHT_IS_LOCAL"};

static inline void setStaticF_keywordPointLightPrivate(::StringW  value) ;

static inline ::StringW getStaticF_keywordPointLightPrivate() ;

static inline void setStaticF_kUvColorsPropertyId(int32_t  value) ;

static inline int32_t getStaticF_kUvColorsPropertyId() ;

static inline void setStaticF_uvRimLightColorsPropertyId(int32_t  value) ;

static inline int32_t getStaticF_uvRimLightColorsPropertyId() ;

static inline void setStaticF_colorPropertyId(int32_t  value) ;

static inline int32_t getStaticF_colorPropertyId() ;

static inline void setStaticF_rimLightColorPropertyId(int32_t  value) ;

static inline int32_t getStaticF_rimLightColorPropertyId() ;

static inline void setStaticF_rimLightEdgeStartPropertyId(int32_t  value) ;

static inline int32_t getStaticF_rimLightEdgeStartPropertyId() ;

static inline void setStaticF_segmentToHighlightPropertyId(int32_t  value) ;

static inline int32_t getStaticF_segmentToHighlightPropertyId() ;

static inline void setStaticF_enableReflectionTexturePropertyId(int32_t  value) ;

static inline int32_t getStaticF_enableReflectionTexturePropertyId() ;

static inline void setStaticF_enableReflectionProbePropertyId(int32_t  value) ;

static inline int32_t getStaticF_enableReflectionProbePropertyId() ;

static inline void setStaticF_hologramColorPropertyId(int32_t  value) ;

static inline int32_t getStaticF_hologramColorPropertyId() ;

static inline void setStaticF_haloHighlightColorPropertyId(int32_t  value) ;

static inline int32_t getStaticF_haloHighlightColorPropertyId() ;

static inline void setStaticF_haloBaseColorPropertyId(int32_t  value) ;

static inline int32_t getStaticF_haloBaseColorPropertyId() ;

static inline void setStaticF_hologramPhaseOffsetPropertyId(int32_t  value) ;

static inline int32_t getStaticF_hologramPhaseOffsetPropertyId() ;

static inline void setStaticF_hologramStripeSpeedPropertyId(int32_t  value) ;

static inline int32_t getStaticF_hologramStripeSpeedPropertyId() ;

static inline void setStaticF_hologramFillPropertyId(int32_t  value) ;

static inline int32_t getStaticF_hologramFillPropertyId() ;

static inline void setStaticF_holoMaterializePropertyId(int32_t  value) ;

static inline int32_t getStaticF_holoMaterializePropertyId() ;

static inline void setStaticF_holoHaltScanPropertyId(int32_t  value) ;

static inline int32_t getStaticF_holoHaltScanPropertyId() ;

static inline void setStaticF_nominalDiffuseLevelPropertyId(int32_t  value) ;

static inline int32_t getStaticF_nominalDiffuseLevelPropertyId() ;

static inline void setStaticF_enviroPrivatePointLightColorPropertyId(int32_t  value) ;

static inline int32_t getStaticF_enviroPrivatePointLightColorPropertyId() ;

static inline void setStaticF_nametagPrivatePointLight(int32_t  value) ;

static inline int32_t getStaticF_nametagPrivatePointLight() ;

static inline void setStaticF_nametagPrivatePointLightColor(int32_t  value) ;

static inline int32_t getStaticF_nametagPrivatePointLightColor() ;

static inline void setStaticF_nametagPointLightPositionLocal(int32_t  value) ;

static inline int32_t getStaticF_nametagPointLightPositionLocal() ;

static inline void setStaticF_nametagPrivatePointLightPosition(int32_t  value) ;

static inline int32_t getStaticF_nametagPrivatePointLightPosition() ;

static inline void setStaticF_nametagEnableReflectionProbe(int32_t  value) ;

static inline int32_t getStaticF_nametagEnableReflectionProbe() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarVisualPropertyIds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarVisualPropertyIds(AvatarVisualPropertyIds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarVisualPropertyIds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarVisualPropertyIds(AvatarVisualPropertyIds const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarVisualPropertyIds()  = default;
public:


// Fields

// Static field keywordPointLightPrivate

// Static field kUvColorsPropertyId

// Static field uvRimLightColorsPropertyId

// Static field colorPropertyId

// Static field rimLightColorPropertyId

// Static field rimLightEdgeStartPropertyId

// Static field segmentToHighlightPropertyId

// Static field enableReflectionTexturePropertyId

// Static field enableReflectionProbePropertyId

// Static field hologramColorPropertyId

// Static field haloHighlightColorPropertyId

// Static field haloBaseColorPropertyId

// Static field hologramPhaseOffsetPropertyId

// Static field hologramStripeSpeedPropertyId

// Static field hologramFillPropertyId

// Static field holoMaterializePropertyId

// Static field holoHaltScanPropertyId

// Static field nominalDiffuseLevelPropertyId

// Static field enviroPrivatePointLightColorPropertyId

// Static field nametagPrivatePointLight

// Static field nametagPrivatePointLightColor

// Static field nametagPointLightPositionLocal

// Static field nametagPrivatePointLightPosition

// Static field nametagEnableReflectionProbe


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarVisualPropertyIds, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarVisualPropertyIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarVisualPropertyIds*, "", "AvatarVisualPropertyIds");
