#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseVertexEffect)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct UIVertex;
}
// Forward declare root types
namespace UnityEngine::UI {
class BaseVertexEffect;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::BaseVertexEffect);
// Type: UnityEngine.UI::BaseVertexEffect
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13142))
// CS Name: ::UnityEngine.UI::BaseVertexEffect*
class CORDL_TYPE BaseVertexEffect : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ModifyVertices addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  vertices) ;

static inline ::UnityEngine::UI::BaseVertexEffect* New_ctor() ;

/// @brief Method .ctor addr 0x2d90518 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseVertexEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVertexEffect(BaseVertexEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVertexEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVertexEffect(BaseVertexEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseVertexEffect()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::BaseVertexEffect, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::BaseVertexEffect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::BaseVertexEffect*, "UnityEngine.UI", "BaseVertexEffect");
