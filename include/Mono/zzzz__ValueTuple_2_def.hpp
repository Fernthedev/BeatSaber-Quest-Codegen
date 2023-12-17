#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTuple_2)
// Forward declare root types
namespace Mono {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Write type traits
MARK_GEN_VAL_T(::Mono::ValueTuple_2);
// Type: Mono::ValueTuple`2
namespace Mono {
// cpp template
template<typename T1,typename T2>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2244))
// CS Name: ::Mono::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2 : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

constexpr void __set_Item1(T1  value) ;

constexpr T1& __get_Item1() ;

constexpr T1 const& __get_Item1() const;

constexpr void __set_Item2(T2  value) ;

constexpr T2& __get_Item2() ;

constexpr T2 const& __get_Item2() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr ValueTuple_2(T1  Item1, T2  Item2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_2()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_2, "Mono", "ValueTuple`2");
