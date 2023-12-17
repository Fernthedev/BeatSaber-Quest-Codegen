#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeToken)
namespace System {
struct __DateTimeParse__DTT;
}
namespace System {
struct TokenType;
}
// Forward declare root types
namespace System {
struct DateTimeToken;
}
// Write type traits
MARK_VAL_T(::System::DateTimeToken);
// Type: System::DateTimeToken
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2395))
// CS Name: ::System::DateTimeToken
struct CORDL_TYPE DateTimeToken : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field dtt offset 0x0
 __declspec(property(get=__get_dtt, put=__set_dtt)) ::System::__DateTimeParse__DTT  dtt;

/// @brief Field suffix offset 0x4
 __declspec(property(get=__get_suffix, put=__set_suffix)) ::System::TokenType  suffix;

/// @brief Field num offset 0x8
 __declspec(property(get=__get_num, put=__set_num)) int32_t  num;

constexpr void __set_dtt(::System::__DateTimeParse__DTT  value) ;

constexpr ::System::__DateTimeParse__DTT& __get_dtt() ;

constexpr ::System::__DateTimeParse__DTT const& __get_dtt() const;

constexpr void __set_suffix(::System::TokenType  value) ;

constexpr ::System::TokenType& __get_suffix() ;

constexpr ::System::TokenType const& __get_suffix() const;

constexpr void __set_num(int32_t  value) ;

constexpr int32_t& __get_num() ;

constexpr int32_t const& __get_num() const;

// Ctor Parameters [CppParam { name: "dtt", ty: "::System::__DateTimeParse__DTT", modifiers: "", def_value: None }, CppParam { name: "suffix", ty: "::System::TokenType", modifiers: "", def_value: None }, CppParam { name: "num", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeToken(::System::__DateTimeParse__DTT  dtt, ::System::TokenType  suffix, int32_t  num) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DateTimeToken(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DateTimeToken()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeToken, 0xc>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeToken, "System", "DateTimeToken");
