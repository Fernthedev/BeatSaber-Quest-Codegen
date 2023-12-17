#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RSAParameters)
// Forward declare root types
namespace System::Security::Cryptography {
struct RSAParameters;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::RSAParameters);
// Type: System.Security.Cryptography::RSAParameters
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2955))
// CS Name: ::System.Security.Cryptography::RSAParameters
struct CORDL_TYPE RSAParameters : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Exponent offset 0x0
 __declspec(property(get=__get_Exponent, put=__set_Exponent)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Exponent;

/// @brief Field Modulus offset 0x8
 __declspec(property(get=__get_Modulus, put=__set_Modulus)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Modulus;

/// @brief Field P offset 0x10
 __declspec(property(get=__get_P, put=__set_P)) ::ArrayW<uint8_t,::Array<uint8_t>*>  P;

/// @brief Field Q offset 0x18
 __declspec(property(get=__get_Q, put=__set_Q)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Q;

/// @brief Field DP offset 0x20
 __declspec(property(get=__get_DP, put=__set_DP)) ::ArrayW<uint8_t,::Array<uint8_t>*>  DP;

/// @brief Field DQ offset 0x28
 __declspec(property(get=__get_DQ, put=__set_DQ)) ::ArrayW<uint8_t,::Array<uint8_t>*>  DQ;

/// @brief Field InverseQ offset 0x30
 __declspec(property(get=__get_InverseQ, put=__set_InverseQ)) ::ArrayW<uint8_t,::Array<uint8_t>*>  InverseQ;

/// @brief Field D offset 0x38
 __declspec(property(get=__get_D, put=__set_D)) ::ArrayW<uint8_t,::Array<uint8_t>*>  D;

constexpr void __set_Exponent(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Exponent() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Exponent() const;

constexpr void __set_Modulus(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Modulus() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Modulus() const;

constexpr void __set_P(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_P() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_P() const;

constexpr void __set_Q(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Q() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Q() const;

constexpr void __set_DP(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_DP() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_DP() const;

constexpr void __set_DQ(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_DQ() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_DQ() const;

constexpr void __set_InverseQ(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_InverseQ() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_InverseQ() const;

constexpr void __set_D(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_D() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_D() const;

// Ctor Parameters [CppParam { name: "Exponent", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Modulus", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "P", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Q", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "DP", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "DQ", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "InverseQ", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "D", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
constexpr RSAParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  Exponent, ::ArrayW<uint8_t,::Array<uint8_t>*>  Modulus, ::ArrayW<uint8_t,::Array<uint8_t>*>  P, ::ArrayW<uint8_t,::Array<uint8_t>*>  Q, ::ArrayW<uint8_t,::Array<uint8_t>*>  DP, ::ArrayW<uint8_t,::Array<uint8_t>*>  DQ, ::ArrayW<uint8_t,::Array<uint8_t>*>  InverseQ, ::ArrayW<uint8_t,::Array<uint8_t>*>  D) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RSAParameters(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RSAParameters()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAParameters, 0x40>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAParameters, "System.Security.Cryptography", "RSAParameters");
