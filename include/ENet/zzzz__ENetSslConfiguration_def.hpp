#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ENetSslConfiguration)
namespace ENet {
struct SslMode;
}
// Forward declare root types
namespace ENet {
struct ENetSslConfiguration;
}
// Write type traits
MARK_VAL_T(::ENet::ENetSslConfiguration);
// Type: ENet::ENetSslConfiguration
namespace ENet {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15218))
// CS Name: ::ENet::ENetSslConfiguration
struct CORDL_TYPE ENetSslConfiguration : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field mode offset 0x0
 __declspec(property(get=__get_mode, put=__set_mode)) ::ENet::SslMode  mode;

/// @brief Field certificatePath offset 0x8
 __declspec(property(get=__get_certificatePath, put=__set_certificatePath)) ::StringW  certificatePath;

/// @brief Field certificate offset 0x10
 __declspec(property(get=__get_certificate, put=__set_certificate)) ::StringW  certificate;

/// @brief Field privateKeyPath offset 0x18
 __declspec(property(get=__get_privateKeyPath, put=__set_privateKeyPath)) ::StringW  privateKeyPath;

/// @brief Field privateKey offset 0x20
 __declspec(property(get=__get_privateKey, put=__set_privateKey)) ::StringW  privateKey;

/// @brief Field validateCertificate offset 0x28
 __declspec(property(get=__get_validateCertificate, put=__set_validateCertificate)) int32_t  validateCertificate;

/// @brief Field rootCertificatePath offset 0x30
 __declspec(property(get=__get_rootCertificatePath, put=__set_rootCertificatePath)) ::StringW  rootCertificatePath;

/// @brief Field rootCertificate offset 0x38
 __declspec(property(get=__get_rootCertificate, put=__set_rootCertificate)) ::StringW  rootCertificate;

/// @brief Field hostName offset 0x40
 __declspec(property(get=__get_hostName, put=__set_hostName)) ::StringW  hostName;

constexpr void __set_mode(::ENet::SslMode  value) ;

constexpr ::ENet::SslMode& __get_mode() ;

constexpr ::ENet::SslMode const& __get_mode() const;

constexpr void __set_certificatePath(::StringW  value) ;

constexpr ::StringW& __get_certificatePath() ;

constexpr ::StringW const& __get_certificatePath() const;

constexpr void __set_certificate(::StringW  value) ;

constexpr ::StringW& __get_certificate() ;

constexpr ::StringW const& __get_certificate() const;

constexpr void __set_privateKeyPath(::StringW  value) ;

constexpr ::StringW& __get_privateKeyPath() ;

constexpr ::StringW const& __get_privateKeyPath() const;

constexpr void __set_privateKey(::StringW  value) ;

constexpr ::StringW& __get_privateKey() ;

constexpr ::StringW const& __get_privateKey() const;

constexpr void __set_validateCertificate(int32_t  value) ;

constexpr int32_t& __get_validateCertificate() ;

constexpr int32_t const& __get_validateCertificate() const;

constexpr void __set_rootCertificatePath(::StringW  value) ;

constexpr ::StringW& __get_rootCertificatePath() ;

constexpr ::StringW const& __get_rootCertificatePath() const;

constexpr void __set_rootCertificate(::StringW  value) ;

constexpr ::StringW& __get_rootCertificate() ;

constexpr ::StringW const& __get_rootCertificate() const;

constexpr void __set_hostName(::StringW  value) ;

constexpr ::StringW& __get_hostName() ;

constexpr ::StringW const& __get_hostName() const;

// Ctor Parameters [CppParam { name: "mode", ty: "::ENet::SslMode", modifiers: "", def_value: None }, CppParam { name: "certificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "certificate", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateKeyPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "validateCertificate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rootCertificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "rootCertificate", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hostName", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ENetSslConfiguration(::ENet::SslMode  mode, ::StringW  certificatePath, ::StringW  certificate, ::StringW  privateKeyPath, ::StringW  privateKey, int32_t  validateCertificate, ::StringW  rootCertificatePath, ::StringW  rootCertificate, ::StringW  hostName) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ENetSslConfiguration(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ENetSslConfiguration()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::ENetSslConfiguration, 0x48>, "Size mismatch!");

} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetSslConfiguration, "ENet", "ENetSslConfiguration");
