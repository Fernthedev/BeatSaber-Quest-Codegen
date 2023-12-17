#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Shaders)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Shaders;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Shaders);
// Type: UnityEngine.UIElements.UIR::Shaders
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7416))
// CS Name: ::UnityEngine.UIElements.UIR::Shaders*
class CORDL_TYPE Shaders : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_k_AtlasBlit(::StringW  value) ;

static inline ::StringW getStaticF_k_AtlasBlit() ;

static inline void setStaticF_k_Editor(::StringW  value) ;

static inline ::StringW getStaticF_k_Editor() ;

static inline void setStaticF_k_Runtime(::StringW  value) ;

static inline ::StringW getStaticF_k_Runtime() ;

static inline void setStaticF_k_RuntimeWorld(::StringW  value) ;

static inline ::StringW getStaticF_k_RuntimeWorld() ;

static inline void setStaticF_k_GraphView(::StringW  value) ;

static inline ::StringW getStaticF_k_GraphView() ;

// Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Shaders(Shaders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Shaders(Shaders const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Shaders()  = default;
public:


// Fields

// Static field k_AtlasBlit

// Static field k_Editor

// Static field k_Runtime

// Static field k_RuntimeWorld

// Static field k_GraphView


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Shaders, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Shaders);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Shaders*, "UnityEngine.UIElements.UIR", "Shaders");
