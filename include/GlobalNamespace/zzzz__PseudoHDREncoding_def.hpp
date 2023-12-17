#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PseudoHDREncoding)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class PseudoHDREncoding;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PseudoHDREncoding);
// Type: ::PseudoHDREncoding
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5864))
// CS Name: ::PseudoHDREncoding*
class CORDL_TYPE PseudoHDREncoding : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kPseudoHDREncodingShaderName offset 0x0
static constexpr ::ConstString  kPseudoHDREncodingShaderName{u"Hidden/PseudoHDREncoding"};

static inline void setStaticF__material(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF__material() ;

/// @brief Method CreatePseudoHDREncodedTexture addr 0x22f8108 size 0x1f0 virtual false final false
static inline ::UnityEngine::RenderTexture* CreatePseudoHDREncodedTexture(::UnityEngine::RenderTexture*  src) ;

// Ctor Parameters [CppParam { name: "", ty: "PseudoHDREncoding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PseudoHDREncoding(PseudoHDREncoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PseudoHDREncoding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PseudoHDREncoding(PseudoHDREncoding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PseudoHDREncoding()  = default;
public:


// Fields

// Static field _material


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PseudoHDREncoding, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PseudoHDREncoding);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PseudoHDREncoding*, "", "PseudoHDREncoding");
