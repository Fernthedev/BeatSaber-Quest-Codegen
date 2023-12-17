#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorUtilities)
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class ColorUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::ColorUtilities);
// Type: UnityEngine.TextCore.Text::ColorUtilities
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13731))
// CS Name: ::UnityEngine.TextCore.Text::ColorUtilities*
class CORDL_TYPE ColorUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CompareColors addr 0x2d4c0f8 size 0x10 virtual false final false
static inline bool CompareColors(::UnityEngine::Color32  a, ::UnityEngine::Color32  b) ;

/// @brief Method MultiplyColors addr 0x2d4c108 size 0xc0 virtual false final false
static inline ::UnityEngine::Color32 MultiplyColors(::UnityEngine::Color32  c1, ::UnityEngine::Color32  c2) ;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorUtilities(ColorUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorUtilities(ColorUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorUtilities()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::ColorUtilities, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::ColorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::ColorUtilities*, "UnityEngine.TextCore.Text", "ColorUtilities");
