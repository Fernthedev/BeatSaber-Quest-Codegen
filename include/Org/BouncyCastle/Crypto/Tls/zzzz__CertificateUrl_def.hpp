#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateUrl)
namespace Org::BouncyCastle::Crypto::Tls {
class __CertificateUrl__ListBuffer16;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateUrl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __CertificateUrl__ListBuffer16;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertificateUrl);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__CertificateUrl__ListBuffer16);
// Type: ::ListBuffer16
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1192))
// CS Name: ::CertificateUrl::ListBuffer16*
class CORDL_TYPE __CertificateUrl__ListBuffer16 : public ::System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::IO::MemoryStream)]{};

static inline ::Org::BouncyCastle::Crypto::Tls::__CertificateUrl__ListBuffer16* New_ctor() ;

/// @brief Method .ctor addr 0xf60ab0 size 0x68 virtual false final false
inline void _ctor() ;

/// @brief Method EncodeTo addr 0xf60b18 size 0xe4 virtual false final false
inline void EncodeTo(::System::IO::Stream*  output) ;

// Ctor Parameters [CppParam { name: "", ty: "__CertificateUrl__ListBuffer16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CertificateUrl__ListBuffer16(__CertificateUrl__ListBuffer16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CertificateUrl__ListBuffer16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CertificateUrl__ListBuffer16(__CertificateUrl__ListBuffer16 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CertificateUrl__ListBuffer16()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__CertificateUrl__ListBuffer16, 0x50>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::CertificateUrl
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1193))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CertificateUrl*
class CORDL_TYPE CertificateUrl : public ::System::Object {
public:
// Declarations
using ListBuffer16 = ::Org::BouncyCastle::Crypto::Tls::__CertificateUrl__ListBuffer16;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field mType offset 0x10
 __declspec(property(get=__get_mType, put=__set_mType)) uint8_t  mType;

/// @brief Field mUrlAndHashList offset 0x18
 __declspec(property(get=__get_mUrlAndHashList, put=__set_mUrlAndHashList)) ::System::Collections::IList*  mUrlAndHashList;

 __declspec(property(get=get_Type)) uint8_t  Type;

 __declspec(property(get=get_UrlAndHashList)) ::System::Collections::IList*  UrlAndHashList;

constexpr void __set_mType(uint8_t  value) ;

constexpr uint8_t& __get_mType() ;

constexpr uint8_t const& __get_mType() const;

constexpr void __set_mUrlAndHashList(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_mUrlAndHashList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_mUrlAndHashList() const;

static inline ::Org::BouncyCastle::Crypto::Tls::CertificateUrl* New_ctor(uint8_t  type, ::System::Collections::IList*  urlAndHashList) ;

/// @brief Method .ctor addr 0xf60590 size 0x16c virtual false final false
inline void _ctor(uint8_t  type, ::System::Collections::IList*  urlAndHashList) ;

/// @brief Method get_Type addr 0xf606fc size 0x8 virtual true final false
inline uint8_t get_Type() ;

/// @brief Method get_UrlAndHashList addr 0xf60704 size 0x8 virtual true final false
inline ::System::Collections::IList* get_UrlAndHashList() ;

/// @brief Method Encode addr 0xf6070c size 0x3a4 virtual true final false
inline void Encode(::System::IO::Stream*  output) ;

/// @brief Method parse addr 0xf60bfc size 0x298 virtual false final false
static inline ::Org::BouncyCastle::Crypto::Tls::CertificateUrl* parse(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::System::IO::Stream*  input) ;

// Ctor Parameters [CppParam { name: "", ty: "CertificateUrl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateUrl(CertificateUrl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateUrl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateUrl(CertificateUrl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertificateUrl()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateUrl, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateUrl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateUrl*, "Org.BouncyCastle.Crypto.Tls", "CertificateUrl");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__CertificateUrl__ListBuffer16);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__CertificateUrl__ListBuffer16*, "Org.BouncyCastle.Crypto.Tls", "CertificateUrl/ListBuffer16");
