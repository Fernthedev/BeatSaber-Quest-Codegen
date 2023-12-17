#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITextElement)
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
// Forward declare root types
namespace TMPro {
class ITextElement;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::ITextElement);
// Type: TMPro::ITextElement
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12428))
// CS Name: ::TMPro::ITextElement*
class CORDL_TYPE ITextElement {
public:
// Declarations
 __declspec(property(get=get_sharedMaterial)) ::UnityEngine::Material*  sharedMaterial;

/// @brief Method get_sharedMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Material* get_sharedMaterial() ;

/// @brief Method Rebuild addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Rebuild(::UnityEngine::UI::CanvasUpdate  update) ;

/// @brief Method GetInstanceID addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetInstanceID() ;

// Ctor Parameters [CppParam { name: "", ty: "ITextElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ITextElement(ITextElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ITextElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITextElement(ITextElement const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(::TMPro::ITextElement);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ITextElement*, "TMPro", "ITextElement");
