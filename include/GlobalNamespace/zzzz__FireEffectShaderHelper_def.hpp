#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FireEffectShaderHelper)
// Forward declare root types
namespace GlobalNamespace {
class FireEffectShaderHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FireEffectShaderHelper);
// Type: ::FireEffectShaderHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4008))
// CS Name: ::FireEffectShaderHelper*
class CORDL_TYPE FireEffectShaderHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_effectStartSongTimePropertyId(int32_t  value) ;

static inline int32_t getStaticF_effectStartSongTimePropertyId() ;

static inline void setStaticF_colorPropertyId(int32_t  value) ;

static inline int32_t getStaticF_colorPropertyId() ;

static inline void setStaticF_privatePointLightColorPropertyId(int32_t  value) ;

static inline int32_t getStaticF_privatePointLightColorPropertyId() ;

// Ctor Parameters [CppParam { name: "", ty: "FireEffectShaderHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FireEffectShaderHelper(FireEffectShaderHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FireEffectShaderHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FireEffectShaderHelper(FireEffectShaderHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FireEffectShaderHelper()  = default;
public:


// Fields

// Static field effectStartSongTimePropertyId

// Static field colorPropertyId

// Static field privatePointLightColorPropertyId


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireEffectShaderHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireEffectShaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireEffectShaderHelper*, "", "FireEffectShaderHelper");
