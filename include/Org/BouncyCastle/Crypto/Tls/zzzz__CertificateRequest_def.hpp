#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateRequest)
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertificateRequest);
// Type: Org.BouncyCastle.Crypto.Tls::CertificateRequest
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1187))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CertificateRequest*
class CORDL_TYPE CertificateRequest : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field mCertificateTypes offset 0x10
 __declspec(property(get=__get_mCertificateTypes, put=__set_mCertificateTypes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mCertificateTypes;

/// @brief Field mSupportedSignatureAlgorithms offset 0x18
 __declspec(property(get=__get_mSupportedSignatureAlgorithms, put=__set_mSupportedSignatureAlgorithms)) ::System::Collections::IList*  mSupportedSignatureAlgorithms;

/// @brief Field mCertificateAuthorities offset 0x20
 __declspec(property(get=__get_mCertificateAuthorities, put=__set_mCertificateAuthorities)) ::System::Collections::IList*  mCertificateAuthorities;

 __declspec(property(get=get_CertificateTypes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  CertificateTypes;

 __declspec(property(get=get_SupportedSignatureAlgorithms)) ::System::Collections::IList*  SupportedSignatureAlgorithms;

 __declspec(property(get=get_CertificateAuthorities)) ::System::Collections::IList*  CertificateAuthorities;

constexpr void __set_mCertificateTypes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mCertificateTypes() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mCertificateTypes() const;

constexpr void __set_mSupportedSignatureAlgorithms(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_mSupportedSignatureAlgorithms() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_mSupportedSignatureAlgorithms() const;

constexpr void __set_mCertificateAuthorities(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_mCertificateAuthorities() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_mCertificateAuthorities() const;

static inline ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  certificateTypes, ::System::Collections::IList*  supportedSignatureAlgorithms, ::System::Collections::IList*  certificateAuthorities) ;

/// @brief Method .ctor addr 0xf5ef98 size 0x3c virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  certificateTypes, ::System::Collections::IList*  supportedSignatureAlgorithms, ::System::Collections::IList*  certificateAuthorities) ;

/// @brief Method get_CertificateTypes addr 0xf5efd4 size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_CertificateTypes() ;

/// @brief Method get_SupportedSignatureAlgorithms addr 0xf5efdc size 0x8 virtual true final false
inline ::System::Collections::IList* get_SupportedSignatureAlgorithms() ;

/// @brief Method get_CertificateAuthorities addr 0xf5efe4 size 0x8 virtual true final false
inline ::System::Collections::IList* get_CertificateAuthorities() ;

/// @brief Method Encode addr 0xf5efec size 0x920 virtual true final false
inline void Encode(::System::IO::Stream*  output) ;

/// @brief Method Parse addr 0xf5f90c size 0x308 virtual false final false
static inline ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::System::IO::Stream*  input) ;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateRequest(CertificateRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateRequest(CertificateRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertificateRequest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateRequest, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, "Org.BouncyCastle.Crypto.Tls", "CertificateRequest");
