#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifreq_mtu)
namespace System::Net::NetworkInformation::AixStructs {
struct __ifreq_mtu___ifr_name_e__FixedBuffer;
}
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct __ifreq_mtu___ifr_name_e__FixedBuffer;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_mtu;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer);
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifreq_mtu);
// Type: ::<ifr_name>e__FixedBuffer
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9305))
// CS Name: ::ifreq_mtu::<ifr_name>e__FixedBuffer
struct CORDL_TYPE __ifreq_mtu___ifr_name_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x10> {
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
constexpr __ifreq_mtu___ifr_name_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ifreq_mtu___ifr_name_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ifreq_mtu___ifr_name_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::AixStructs
// Type: System.Net.NetworkInformation.AixStructs::ifreq_mtu
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9306))
// CS Name: ::System.Net.NetworkInformation.AixStructs::ifreq_mtu
struct CORDL_TYPE ifreq_mtu : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
using _ifr_name_e__FixedBuffer = ::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field ifr_name offset 0x0
 __declspec(property(get=__get_ifr_name, put=__set_ifr_name)) ::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer  ifr_name;

/// @brief Field ifru_mtu offset 0x10
 __declspec(property(get=__get_ifru_mtu, put=__set_ifru_mtu)) int32_t  ifru_mtu;

constexpr void __set_ifr_name(::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer  value) ;

constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer& __get_ifr_name() ;

constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer const& __get_ifr_name() const;

constexpr void __set_ifru_mtu(int32_t  value) ;

constexpr int32_t& __get_ifru_mtu() ;

constexpr int32_t const& __get_ifru_mtu() const;

// Ctor Parameters [CppParam { name: "ifr_name", ty: "::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "ifru_mtu", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ifreq_mtu(::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer  ifr_name, int32_t  ifru_mtu) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ifreq_mtu(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ifreq_mtu()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::ifreq_mtu, 0x14>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::__ifreq_mtu___ifr_name_e__FixedBuffer, "System.Net.NetworkInformation.AixStructs", "ifreq_mtu/<ifr_name>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifreq_mtu, "System.Net.NetworkInformation.AixStructs", "ifreq_mtu");
