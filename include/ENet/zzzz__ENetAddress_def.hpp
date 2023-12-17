#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ENetAddress)
// Forward declare root types
namespace ENet {
struct ENetAddress;
}
// Write type traits
MARK_VAL_T(::ENet::ENetAddress);
// Type: ENet::ENetAddress
namespace ENet {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15217))
// CS Name: ::ENet::ENetAddress
struct CORDL_TYPE ENetAddress : public ::bs_hook::ValueTypeWrapper<0x12> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x12};

/// @brief Field port offset 0x10
 __declspec(property(get=__get_port, put=__set_port)) uint16_t  port;

constexpr void __set_port(uint16_t  value) ;

constexpr uint16_t& __get_port() ;

constexpr uint16_t const& __get_port() const;

// Ctor Parameters [CppParam { name: "port", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr ENetAddress(uint16_t  port) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ENetAddress(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x12>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ENetAddress()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::ENetAddress, 0x12>, "Size mismatch!");

} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetAddress, "ENet", "ENetAddress");
