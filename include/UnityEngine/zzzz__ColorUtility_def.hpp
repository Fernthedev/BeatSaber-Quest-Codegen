#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ColorUtility)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class ColorUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ColorUtility);
// Type: UnityEngine::ColorUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10248))
// CS Name: ::UnityEngine::ColorUtility*
class CORDL_TYPE ColorUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ToHtmlStringRGB addr 0x2cd8614 size 0x3f0 virtual false final false
static inline ::StringW ToHtmlStringRGB(::UnityEngine::Color  color) ;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorUtility(ColorUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorUtility(ColorUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorUtility()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ColorUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ColorUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorUtility*, "UnityEngine", "ColorUtility");
