#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeerConnectionData)
// Forward declare root types
namespace IgnoranceCore {
struct PeerConnectionData;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::PeerConnectionData);
// Type: IgnoranceCore::PeerConnectionData
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15252))
// CS Name: ::IgnoranceCore::PeerConnectionData
struct CORDL_TYPE PeerConnectionData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Port offset 0x0
 __declspec(property(get=__get_Port, put=__set_Port)) uint16_t  Port;

/// @brief Field NativePeerId offset 0x4
 __declspec(property(get=__get_NativePeerId, put=__set_NativePeerId)) uint32_t  NativePeerId;

/// @brief Field IP offset 0x8
 __declspec(property(get=__get_IP, put=__set_IP)) ::StringW  IP;

constexpr void __set_Port(uint16_t  value) ;

constexpr uint16_t& __get_Port() ;

constexpr uint16_t const& __get_Port() const;

constexpr void __set_NativePeerId(uint32_t  value) ;

constexpr uint32_t& __get_NativePeerId() ;

constexpr uint32_t const& __get_NativePeerId() const;

constexpr void __set_IP(::StringW  value) ;

constexpr ::StringW& __get_IP() ;

constexpr ::StringW const& __get_IP() const;

// Ctor Parameters [CppParam { name: "Port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IP", ty: "::StringW", modifiers: "", def_value: None }]
constexpr PeerConnectionData(uint16_t  Port, uint32_t  NativePeerId, ::StringW  IP) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PeerConnectionData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PeerConnectionData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::PeerConnectionData, 0x10>, "Size mismatch!");

} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::PeerConnectionData, "IgnoranceCore", "PeerConnectionData");
