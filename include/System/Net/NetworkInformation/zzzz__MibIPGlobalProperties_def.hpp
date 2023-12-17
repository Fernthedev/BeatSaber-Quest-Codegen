#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MibIPGlobalProperties)
// Forward declare root types
namespace System::Net::NetworkInformation {
class MibIPGlobalProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::MibIPGlobalProperties);
// Type: System.Net.NetworkInformation::MibIPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9286))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9288))
// CS Name: ::System.Net.NetworkInformation::MibIPGlobalProperties*
class CORDL_TYPE MibIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Net::NetworkInformation::UnixIPGlobalProperties)]{};

/// @brief Field StatisticsFile offset 0x10
 __declspec(property(get=__get_StatisticsFile, put=__set_StatisticsFile)) ::StringW  StatisticsFile;

/// @brief Field StatisticsFileIPv6 offset 0x18
 __declspec(property(get=__get_StatisticsFileIPv6, put=__set_StatisticsFileIPv6)) ::StringW  StatisticsFileIPv6;

/// @brief Field TcpFile offset 0x20
 __declspec(property(get=__get_TcpFile, put=__set_TcpFile)) ::StringW  TcpFile;

/// @brief Field Tcp6File offset 0x28
 __declspec(property(get=__get_Tcp6File, put=__set_Tcp6File)) ::StringW  Tcp6File;

/// @brief Field UdpFile offset 0x30
 __declspec(property(get=__get_UdpFile, put=__set_UdpFile)) ::StringW  UdpFile;

/// @brief Field Udp6File offset 0x38
 __declspec(property(get=__get_Udp6File, put=__set_Udp6File)) ::StringW  Udp6File;

constexpr void __set_StatisticsFile(::StringW  value) ;

constexpr ::StringW& __get_StatisticsFile() ;

constexpr ::StringW const& __get_StatisticsFile() const;

constexpr void __set_StatisticsFileIPv6(::StringW  value) ;

constexpr ::StringW& __get_StatisticsFileIPv6() ;

constexpr ::StringW const& __get_StatisticsFileIPv6() const;

constexpr void __set_TcpFile(::StringW  value) ;

constexpr ::StringW& __get_TcpFile() ;

constexpr ::StringW const& __get_TcpFile() const;

constexpr void __set_Tcp6File(::StringW  value) ;

constexpr ::StringW& __get_Tcp6File() ;

constexpr ::StringW const& __get_Tcp6File() const;

constexpr void __set_UdpFile(::StringW  value) ;

constexpr ::StringW& __get_UdpFile() ;

constexpr ::StringW const& __get_UdpFile() const;

constexpr void __set_Udp6File(::StringW  value) ;

constexpr ::StringW& __get_Udp6File() ;

constexpr ::StringW const& __get_Udp6File() const;

static inline void setStaticF_wsChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_wsChars() ;

static inline ::System::Net::NetworkInformation::MibIPGlobalProperties* New_ctor(::StringW  procDir) ;

/// @brief Method .ctor addr 0x29f0648 size 0x168 virtual false final false
inline void _ctor(::StringW  procDir) ;

// Ctor Parameters [CppParam { name: "", ty: "MibIPGlobalProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MibIPGlobalProperties(MibIPGlobalProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MibIPGlobalProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MibIPGlobalProperties(MibIPGlobalProperties const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MibIPGlobalProperties()  = default;
public:


// Fields

// Static field wsChars


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MibIPGlobalProperties, 0x40>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::MibIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MibIPGlobalProperties*, "System.Net.NetworkInformation", "MibIPGlobalProperties");
