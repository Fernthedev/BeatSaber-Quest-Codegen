#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionMultiplier)
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplierType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplier;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier);
// Type: UnityEngine.UIElements.StyleSheets.Syntax::ExpressionMultiplier
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7497))
// CS Name: ::UnityEngine.UIElements.StyleSheets.Syntax::ExpressionMultiplier
struct CORDL_TYPE ExpressionMultiplier : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Infinity offset 0x0
static constexpr int32_t  Infinity{static_cast<int32_t>(0x64)};

/// @brief Field m_Type offset 0x0
 __declspec(property(get=__get_m_Type, put=__set_m_Type)) ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  m_Type;

/// @brief Field min offset 0x4
 __declspec(property(get=__get_min, put=__set_min)) int32_t  min;

/// @brief Field max offset 0x8
 __declspec(property(get=__get_max, put=__set_max)) int32_t  max;

 __declspec(property(get=get_type, put=set_type)) ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  type;

constexpr void __set_m_Type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType& __get_m_Type() ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const& __get_m_Type() const;

constexpr void __set_min(int32_t  value) ;

constexpr int32_t& __get_min() ;

constexpr int32_t const& __get_min() const;

constexpr void __set_max(int32_t  value) ;

constexpr int32_t& __get_max() ;

constexpr int32_t const& __get_max() const;

/// @brief Method get_type addr 0x2df16a0 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType get_type() ;

/// @brief Method set_type addr 0x2df861c size 0x4 virtual false final false
inline void set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  value) ;

/// @brief Method .ctor addr 0x2df888c size 0x10 virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  type) ;

/// @brief Method SetType addr 0x2df889c size 0x54 virtual false final false
inline void SetType(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  value) ;

// Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType", modifiers: "", def_value: None }, CppParam { name: "min", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExpressionMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  m_Type, int32_t  min, int32_t  max) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ExpressionMultiplier(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ExpressionMultiplier()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionMultiplier");
