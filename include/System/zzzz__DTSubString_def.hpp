#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DTSubString)
namespace System {
struct DTSubStringType;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
struct DTSubString;
}
// Write type traits
MARK_VAL_T(::System::DTSubString);
// Type: System::DTSubString
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2394))
// CS Name: ::System::DTSubString
struct CORDL_TYPE DTSubString : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field s offset 0x0
 __declspec(property(get=__get_s, put=__set_s)) ::System::ReadOnlySpan_1<char16_t>  s;

/// @brief Field index offset 0x10
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field length offset 0x14
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field type offset 0x18
 __declspec(property(get=__get_type, put=__set_type)) ::System::DTSubStringType  type;

/// @brief Field value offset 0x1c
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

 __declspec(property(get=get_Item)) char16_t  Item[];

constexpr void __set_s(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get_s() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get_s() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_type(::System::DTSubStringType  value) ;

constexpr ::System::DTSubStringType& __get_type() ;

constexpr ::System::DTSubStringType const& __get_type() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

/// @brief Method get_Item addr 0x25a5844 size 0x2c virtual false final false
inline char16_t get_Item(int32_t  relativeIndex) ;

// Ctor Parameters [CppParam { name: "s", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::DTSubStringType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DTSubString(::System::ReadOnlySpan_1<char16_t>  s, int32_t  index, int32_t  length, ::System::DTSubStringType  type, int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DTSubString(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DTSubString()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DTSubString, 0x20>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::DTSubString, "System", "DTSubString");
