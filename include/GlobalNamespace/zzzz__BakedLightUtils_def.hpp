#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakedLightUtils)
// Forward declare root types
namespace GlobalNamespace {
class BakedLightUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedLightUtils);
// Type: ::BakedLightUtils
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5853))
// CS Name: ::BakedLightUtils*
class CORDL_TYPE BakedLightUtils : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kMirrorParentNameToIgnore offset 0x0
static constexpr ::ConstString  kMirrorParentNameToIgnore{u"PlayersPlace"};

/// @brief Field kDepthOnlyShaderName offset 0x0
static constexpr ::ConstString  kDepthOnlyShaderName{u"Custom/SetDepthOnly"};

static inline void setStaticF__zWritePropertyId(int32_t  value) ;

static inline int32_t getStaticF__zWritePropertyId() ;

static inline void setStaticF__stencilRefValuePropertyId(int32_t  value) ;

static inline int32_t getStaticF__stencilRefValuePropertyId() ;

static inline void setStaticF__stencilCompPropertyId(int32_t  value) ;

static inline int32_t getStaticF__stencilCompPropertyId() ;

static inline void setStaticF__stencilPassOpPropertyId(int32_t  value) ;

static inline int32_t getStaticF__stencilPassOpPropertyId() ;

/// @brief Method ValidateLoadedEnvironmentScene addr 0x22f5e28 size 0x838 virtual false final false
static inline void ValidateLoadedEnvironmentScene(bool  validateBakedGIEnabled) ;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BakedLightUtils(BakedLightUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakedLightUtils(BakedLightUtils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BakedLightUtils()  = default;
public:


// Fields

// Static field _zWritePropertyId

// Static field _stencilRefValuePropertyId

// Static field _stencilCompPropertyId

// Static field _stencilPassOpPropertyId


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightUtils, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightUtils*, "", "BakedLightUtils");
