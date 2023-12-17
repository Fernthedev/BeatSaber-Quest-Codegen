#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ColorPage)
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ColorPage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ColorPage);
// Type: UnityEngine.UIElements::ColorPage
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7332))
// CS Name: ::UnityEngine.UIElements::ColorPage
struct CORDL_TYPE ColorPage : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field isValid offset 0x0
 __declspec(property(get=__get_isValid, put=__set_isValid)) bool  isValid;

/// @brief Field pageAndID offset 0x4
 __declspec(property(get=__get_pageAndID, put=__set_pageAndID)) ::UnityEngine::Color32  pageAndID;

constexpr void __set_isValid(bool  value) ;

constexpr bool& __get_isValid() ;

constexpr bool const& __get_isValid() const;

constexpr void __set_pageAndID(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_pageAndID() ;

constexpr ::UnityEngine::Color32 const& __get_pageAndID() const;

/// @brief Method Init addr 0x2e79a78 size 0x60 virtual false final false
static inline ::UnityEngine::UIElements::ColorPage Init(::UnityEngine::UIElements::UIR::RenderChain*  renderChain, ::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr ColorPage(bool  isValid, ::UnityEngine::Color32  pageAndID) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ColorPage(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ColorPage()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ColorPage, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColorPage, "UnityEngine.UIElements", "ColorPage");
