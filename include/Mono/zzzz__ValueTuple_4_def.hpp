#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTuple_4)
// Forward declare root types
namespace Mono {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
// Write type traits
MARK_GEN_VAL_T(::Mono::ValueTuple_4);
// Type: Mono::ValueTuple`4
namespace Mono {
// cpp template
template<typename T1,typename T2,typename T3,typename T4>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2246))
// CS Name: ::Mono::ValueTuple`4<T1,T2,T3,T4>
struct CORDL_TYPE ValueTuple_4 : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

/// @brief Field Item2 offset 0x8
 __declspec(property(get=__get_Item2, put=__set_Item2)) T2  Item2;

/// @brief Field Item3 offset 0x10
 __declspec(property(get=__get_Item3, put=__set_Item3)) T3  Item3;

/// @brief Field Item4 offset 0x18
 __declspec(property(get=__get_Item4, put=__set_Item4)) T4  Item4;

constexpr void __set_Item1(T1  value) ;

constexpr T1& __get_Item1() ;

constexpr T1 const& __get_Item1() const;

constexpr void __set_Item2(T2  value) ;

constexpr T2& __get_Item2() ;

constexpr T2 const& __get_Item2() const;

constexpr void __set_Item3(T3  value) ;

constexpr T3& __get_Item3() ;

constexpr T3 const& __get_Item3() const;

constexpr void __set_Item4(T4  value) ;

constexpr T4& __get_Item4() ;

constexpr T4 const& __get_Item4() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: None }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: None }]
constexpr ValueTuple_4(T1  Item1, T2  Item2, T3  Item3, T4  Item4) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_4()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_4, "Mono", "ValueTuple`4");
