#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DSAParameters)
// Forward declare root types
namespace System::Security::Cryptography {
struct DSAParameters;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::DSAParameters);
// Type: System.Security.Cryptography::DSAParameters
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2930))
// CS Name: ::System.Security.Cryptography::DSAParameters
struct CORDL_TYPE DSAParameters : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field P offset 0x0
 __declspec(property(get=__get_P, put=__set_P)) ::ArrayW<uint8_t,::Array<uint8_t>*>  P;

/// @brief Field Q offset 0x8
 __declspec(property(get=__get_Q, put=__set_Q)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Q;

/// @brief Field G offset 0x10
 __declspec(property(get=__get_G, put=__set_G)) ::ArrayW<uint8_t,::Array<uint8_t>*>  G;

/// @brief Field Y offset 0x18
 __declspec(property(get=__get_Y, put=__set_Y)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Y;

/// @brief Field J offset 0x20
 __declspec(property(get=__get_J, put=__set_J)) ::ArrayW<uint8_t,::Array<uint8_t>*>  J;

/// @brief Field X offset 0x28
 __declspec(property(get=__get_X, put=__set_X)) ::ArrayW<uint8_t,::Array<uint8_t>*>  X;

/// @brief Field Seed offset 0x30
 __declspec(property(get=__get_Seed, put=__set_Seed)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Seed;

/// @brief Field Counter offset 0x38
 __declspec(property(get=__get_Counter, put=__set_Counter)) int32_t  Counter;

constexpr void __set_P(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_P() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_P() const;

constexpr void __set_Q(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Q() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Q() const;

constexpr void __set_G(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_G() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_G() const;

constexpr void __set_Y(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Y() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Y() const;

constexpr void __set_J(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_J() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_J() const;

constexpr void __set_X(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_X() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_X() const;

constexpr void __set_Seed(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Seed() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Seed() const;

constexpr void __set_Counter(int32_t  value) ;

constexpr int32_t& __get_Counter() ;

constexpr int32_t const& __get_Counter() const;

// Ctor Parameters [CppParam { name: "P", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Q", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "G", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "J", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "X", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Seed", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Counter", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DSAParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  P, ::ArrayW<uint8_t,::Array<uint8_t>*>  Q, ::ArrayW<uint8_t,::Array<uint8_t>*>  G, ::ArrayW<uint8_t,::Array<uint8_t>*>  Y, ::ArrayW<uint8_t,::Array<uint8_t>*>  J, ::ArrayW<uint8_t,::Array<uint8_t>*>  X, ::ArrayW<uint8_t,::Array<uint8_t>*>  Seed, int32_t  Counter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DSAParameters(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DSAParameters()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSAParameters, 0x40>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSAParameters, "System.Security.Cryptography", "DSAParameters");
