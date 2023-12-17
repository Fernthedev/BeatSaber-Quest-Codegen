#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheetColor)
namespace UnityEngine {
struct Color32;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetColor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StyleSheetColor);
// Type: UnityEngine.UIElements.StyleSheets::StyleSheetColor
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7474))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleSheetColor*
class CORDL_TYPE StyleSheetColor : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_NameToColor(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color32>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color32>* getStaticF_s_NameToColor() ;

/// @brief Method TryGetColor addr 0x2de7548 size 0xf4 virtual false final false
static inline bool TryGetColor(::StringW  name, ByRef<::UnityEngine::Color>  color) ;

/// @brief Method HexToColor32 addr 0x2dea450 size 0x14 virtual false final false
static inline ::UnityEngine::Color32 HexToColor32(uint32_t  color) ;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleSheetColor(StyleSheetColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleSheetColor(StyleSheetColor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StyleSheetColor()  = default;
public:


// Fields

// Static field s_NameToColor


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSheetColor, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSheetColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetColor*, "UnityEngine.UIElements.StyleSheets", "StyleSheetColor");
