#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UrlAndHash)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class UrlAndHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::UrlAndHash);
// Type: Org.BouncyCastle.Crypto.Tls::UrlAndHash
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1333))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::UrlAndHash*
class CORDL_TYPE UrlAndHash : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field mUrl offset 0x10
 __declspec(property(get=__get_mUrl, put=__set_mUrl)) ::StringW  mUrl;

/// @brief Field mSha1Hash offset 0x18
 __declspec(property(get=__get_mSha1Hash, put=__set_mSha1Hash)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mSha1Hash;

 __declspec(property(get=get_Url)) ::StringW  Url;

 __declspec(property(get=get_Sha1Hash)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Sha1Hash;

constexpr void __set_mUrl(::StringW  value) ;

constexpr ::StringW& __get_mUrl() ;

constexpr ::StringW const& __get_mUrl() const;

constexpr void __set_mSha1Hash(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mSha1Hash() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mSha1Hash() const;

static inline ::Org::BouncyCastle::Crypto::Tls::UrlAndHash* New_ctor(::StringW  url, ::ArrayW<uint8_t,::Array<uint8_t>*>  sha1Hash) ;

/// @brief Method .ctor addr 0xfbfd70 size 0xe8 virtual false final false
inline void _ctor(::StringW  url, ::ArrayW<uint8_t,::Array<uint8_t>*>  sha1Hash) ;

/// @brief Method get_Url addr 0xfbfe58 size 0x8 virtual true final false
inline ::StringW get_Url() ;

/// @brief Method get_Sha1Hash addr 0xfbfe60 size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Sha1Hash() ;

/// @brief Method Encode addr 0xfbfe68 size 0x100 virtual true final false
inline void Encode(::System::IO::Stream*  output) ;

/// @brief Method Parse addr 0xfbff68 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Crypto::Tls::UrlAndHash* Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::System::IO::Stream*  input) ;

// Ctor Parameters [CppParam { name: "", ty: "UrlAndHash", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UrlAndHash(UrlAndHash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UrlAndHash", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UrlAndHash(UrlAndHash const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UrlAndHash()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::UrlAndHash, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::UrlAndHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::UrlAndHash*, "Org.BouncyCastle.Crypto.Tls", "UrlAndHash");
