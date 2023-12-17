#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTuple_1)
// Forward declare root types
namespace Mono {
template<typename T1>
struct ValueTuple_1;
}
// Write type traits
MARK_GEN_VAL_T(::Mono::ValueTuple_1);
// Type: Mono::ValueTuple`1
namespace Mono {
// cpp template
template<typename T1>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2243))
// CS Name: ::Mono::ValueTuple`1<T1>
struct CORDL_TYPE ValueTuple_1 : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Item1 offset 0x0
 __declspec(property(get=__get_Item1, put=__set_Item1)) T1  Item1;

constexpr void __set_Item1(T1  value) ;

constexpr T1& __get_Item1() ;

constexpr T1 const& __get_Item1() const;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }]
constexpr ValueTuple_1(T1  Item1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValueTuple_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValueTuple_1()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_1, "Mono", "ValueTuple`1");
