#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MatchResultInfo)
namespace UnityEngine::UIElements {
struct PseudoStates;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::MatchResultInfo);
// Type: UnityEngine.UIElements.StyleSheets::MatchResultInfo
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7468))
// CS Name: ::UnityEngine.UIElements.StyleSheets::MatchResultInfo
struct CORDL_TYPE MatchResultInfo : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field success offset 0x0
 __declspec(property(get=__get_success, put=__set_success)) bool  success;

/// @brief Field triggerPseudoMask offset 0x4
 __declspec(property(get=__get_triggerPseudoMask, put=__set_triggerPseudoMask)) ::UnityEngine::UIElements::PseudoStates  triggerPseudoMask;

/// @brief Field dependencyPseudoMask offset 0x8
 __declspec(property(get=__get_dependencyPseudoMask, put=__set_dependencyPseudoMask)) ::UnityEngine::UIElements::PseudoStates  dependencyPseudoMask;

constexpr void __set_success(bool  value) ;

constexpr bool& __get_success() ;

constexpr bool const& __get_success() const;

constexpr void __set_triggerPseudoMask(::UnityEngine::UIElements::PseudoStates  value) ;

constexpr ::UnityEngine::UIElements::PseudoStates& __get_triggerPseudoMask() ;

constexpr ::UnityEngine::UIElements::PseudoStates const& __get_triggerPseudoMask() const;

constexpr void __set_dependencyPseudoMask(::UnityEngine::UIElements::PseudoStates  value) ;

constexpr ::UnityEngine::UIElements::PseudoStates& __get_dependencyPseudoMask() ;

constexpr ::UnityEngine::UIElements::PseudoStates const& __get_dependencyPseudoMask() const;

/// @brief Method .ctor addr 0x2de9874 size 0x10 virtual false final false
inline void _ctor(bool  success, ::UnityEngine::UIElements::PseudoStates  triggerPseudoMask, ::UnityEngine::UIElements::PseudoStates  dependencyPseudoMask) ;

// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "triggerPseudoMask", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }, CppParam { name: "dependencyPseudoMask", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }]
constexpr MatchResultInfo(bool  success, ::UnityEngine::UIElements::PseudoStates  triggerPseudoMask, ::UnityEngine::UIElements::PseudoStates  dependencyPseudoMask) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MatchResultInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MatchResultInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::MatchResultInfo, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::MatchResultInfo, "UnityEngine.UIElements.StyleSheets", "MatchResultInfo");
