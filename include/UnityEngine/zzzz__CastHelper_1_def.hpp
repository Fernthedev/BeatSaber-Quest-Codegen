#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CastHelper_1)
// Forward declare root types
namespace UnityEngine {
template<typename T>
struct CastHelper_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::CastHelper_1);
// Type: UnityEngine::CastHelper`1
namespace UnityEngine {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10205))
// CS Name: ::UnityEngine::CastHelper`1<T>
struct CORDL_TYPE CastHelper_1 : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field t offset 0x0
 __declspec(property(get=__get_t, put=__set_t)) T  t;

/// @brief Field onePointerFurtherThanT offset 0x8
 __declspec(property(get=__get_onePointerFurtherThanT, put=__set_onePointerFurtherThanT)) ::cordl_internals::intptr_t  onePointerFurtherThanT;

constexpr void __set_t(T  value) ;

constexpr T& __get_t() ;

constexpr T const& __get_t() const;

constexpr void __set_onePointerFurtherThanT(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_onePointerFurtherThanT() ;

constexpr ::cordl_internals::intptr_t const& __get_onePointerFurtherThanT() const;

// Ctor Parameters [CppParam { name: "t", ty: "T", modifiers: "", def_value: None }, CppParam { name: "onePointerFurtherThanT", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr CastHelper_1(T  t, ::cordl_internals::intptr_t  onePointerFurtherThanT) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CastHelper_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CastHelper_1()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::CastHelper_1, "UnityEngine", "CastHelper`1");
