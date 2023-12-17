#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MatchResult)
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultErrorCode;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::MatchResult);
// Type: UnityEngine.UIElements.StyleSheets::MatchResult
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7481))
// CS Name: ::UnityEngine.UIElements.StyleSheets::MatchResult
struct CORDL_TYPE MatchResult : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field errorCode offset 0x0
 __declspec(property(get=__get_errorCode, put=__set_errorCode)) ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  errorCode;

/// @brief Field errorValue offset 0x8
 __declspec(property(get=__get_errorValue, put=__set_errorValue)) ::StringW  errorValue;

 __declspec(property(get=get_success)) bool  success;

constexpr void __set_errorCode(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode& __get_errorCode() ;

constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const& __get_errorCode() const;

constexpr void __set_errorValue(::StringW  value) ;

constexpr ::StringW& __get_errorValue() ;

constexpr ::StringW const& __get_errorValue() const;

/// @brief Method get_success addr 0x2df1400 size 0x10 virtual false final false
inline bool get_success() ;

// Ctor Parameters [CppParam { name: "errorCode", ty: "::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode", modifiers: "", def_value: None }, CppParam { name: "errorValue", ty: "::StringW", modifiers: "", def_value: None }]
constexpr MatchResult(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  errorCode, ::StringW  errorValue) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MatchResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MatchResult()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::MatchResult, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::MatchResult, "UnityEngine.UIElements.StyleSheets", "MatchResult");
