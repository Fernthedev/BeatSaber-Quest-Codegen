#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifreq)
namespace System::Net::NetworkInformation::AixStructs {
struct __ifreq___ifr_name_e__FixedBuffer;
}
namespace System::Net::NetworkInformation::AixStructs {
struct sockaddr;
}
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct __ifreq___ifr_name_e__FixedBuffer;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer);
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifreq);
// Type: ::<ifr_name>e__FixedBuffer
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9301))
// CS Name: ::ifreq::<ifr_name>e__FixedBuffer
struct CORDL_TYPE __ifreq___ifr_name_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __ifreq___ifr_name_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ifreq___ifr_name_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ifreq___ifr_name_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::AixStructs
// Type: System.Net.NetworkInformation.AixStructs::ifreq
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9302))
// CS Name: ::System.Net.NetworkInformation.AixStructs::ifreq
struct CORDL_TYPE ifreq : public ::bs_hook::ValueTypeWrapper<0x12> {
public:
// Declarations
using _ifr_name_e__FixedBuffer = ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x12};

/// @brief Field ifr_name offset 0x0
 __declspec(property(get=__get_ifr_name, put=__set_ifr_name)) ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer  ifr_name;

/// @brief Field ifru_addr offset 0x10
 __declspec(property(get=__get_ifru_addr, put=__set_ifru_addr)) ::System::Net::NetworkInformation::AixStructs::sockaddr  ifru_addr;

constexpr void __set_ifr_name(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer  value) ;

constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer& __get_ifr_name() ;

constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer const& __get_ifr_name() const;

constexpr void __set_ifru_addr(::System::Net::NetworkInformation::AixStructs::sockaddr  value) ;

constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr& __get_ifru_addr() ;

constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr const& __get_ifru_addr() const;

// Ctor Parameters [CppParam { name: "ifr_name", ty: "::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "ifru_addr", ty: "::System::Net::NetworkInformation::AixStructs::sockaddr", modifiers: "", def_value: None }]
constexpr ifreq(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer  ifr_name, ::System::Net::NetworkInformation::AixStructs::sockaddr  ifru_addr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ifreq(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x12>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ifreq()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::ifreq, 0x12>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer, "System.Net.NetworkInformation.AixStructs", "ifreq/<ifr_name>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifreq, "System.Net.NetworkInformation.AixStructs", "ifreq");
