#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestSession)
namespace System::Net {
class HttpWebRequest;
}
namespace System {
struct DateTime;
}
namespace System::Net {
class DigestHeaderParser;
}
namespace System::Net {
class WebRequest;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class Authorization;
}
// Forward declare root types
namespace System::Net {
class DigestSession;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::DigestSession);
// Type: System.Net::DigestSession
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9160))
// CS Name: ::System.Net::DigestSession*
class CORDL_TYPE DigestSession : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field lastUse offset 0x10
 __declspec(property(get=__get_lastUse, put=__set_lastUse)) ::System::DateTime  lastUse;

/// @brief Field _nc offset 0x18
 __declspec(property(get=__get__nc, put=__set__nc)) int32_t  _nc;

/// @brief Field hash offset 0x20
 __declspec(property(get=__get_hash, put=__set_hash)) ::System::Security::Cryptography::HashAlgorithm*  hash;

/// @brief Field parser offset 0x28
 __declspec(property(get=__get_parser, put=__set_parser)) ::System::Net::DigestHeaderParser*  parser;

/// @brief Field _cnonce offset 0x30
 __declspec(property(get=__get__cnonce, put=__set__cnonce)) ::StringW  _cnonce;

 __declspec(property(get=get_Algorithm)) ::StringW  Algorithm;

 __declspec(property(get=get_Realm)) ::StringW  Realm;

 __declspec(property(get=get_Nonce)) ::StringW  Nonce;

 __declspec(property(get=get_Opaque)) ::StringW  Opaque;

 __declspec(property(get=get_QOP)) ::StringW  QOP;

 __declspec(property(get=get_CNonce)) ::StringW  CNonce;

 __declspec(property(get=get_LastUse)) ::System::DateTime  LastUse;

static inline void setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_rng() ;

constexpr void __set_lastUse(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_lastUse() ;

constexpr ::System::DateTime const& __get_lastUse() const;

constexpr void __set__nc(int32_t  value) ;

constexpr int32_t& __get__nc() ;

constexpr int32_t const& __get__nc() const;

constexpr void __set_hash(::System::Security::Cryptography::HashAlgorithm*  value) ;

constexpr ::System::Security::Cryptography::HashAlgorithm* __get_hash() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> __get_hash() const;

constexpr void __set_parser(::System::Net::DigestHeaderParser*  value) ;

constexpr ::System::Net::DigestHeaderParser* __get_parser() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::DigestHeaderParser*> __get_parser() const;

constexpr void __set__cnonce(::StringW  value) ;

constexpr ::StringW& __get__cnonce() ;

constexpr ::StringW const& __get__cnonce() const;

static inline ::System::Net::DigestSession* New_ctor() ;

/// @brief Method .ctor addr 0x29bdd64 size 0x70 virtual false final false
inline void _ctor() ;

/// @brief Method get_Algorithm addr 0x29bddd4 size 0x18 virtual false final false
inline ::StringW get_Algorithm() ;

/// @brief Method get_Realm addr 0x29bddec size 0x18 virtual false final false
inline ::StringW get_Realm() ;

/// @brief Method get_Nonce addr 0x29bde04 size 0x18 virtual false final false
inline ::StringW get_Nonce() ;

/// @brief Method get_Opaque addr 0x29bde1c size 0x18 virtual false final false
inline ::StringW get_Opaque() ;

/// @brief Method get_QOP addr 0x29bde34 size 0x18 virtual false final false
inline ::StringW get_QOP() ;

/// @brief Method get_CNonce addr 0x29bde4c size 0xf4 virtual false final false
inline ::StringW get_CNonce() ;

/// @brief Method Parse addr 0x29bdf40 size 0xe0 virtual false final false
inline bool Parse(::StringW  challenge) ;

/// @brief Method HashToHexString addr 0x29be020 size 0x150 virtual false final false
inline ::StringW HashToHexString(::StringW  toBeHashed) ;

/// @brief Method HA1 addr 0x29be170 size 0x124 virtual false final false
inline ::StringW HA1(::StringW  username, ::StringW  password) ;

/// @brief Method HA2 addr 0x29be294 size 0xd0 virtual false final false
inline ::StringW HA2(::System::Net::HttpWebRequest*  webRequest) ;

/// @brief Method Response addr 0x29be364 size 0x160 virtual false final false
inline ::StringW Response(::StringW  username, ::StringW  password, ::System::Net::HttpWebRequest*  webRequest) ;

/// @brief Method Authenticate addr 0x29be4c4 size 0x5e0 virtual false final false
inline ::System::Net::Authorization* Authenticate(::System::Net::WebRequest*  webRequest, ::System::Net::ICredentials*  credentials) ;

/// @brief Method get_LastUse addr 0x29beaa4 size 0x8 virtual false final false
inline ::System::DateTime get_LastUse() ;

// Ctor Parameters [CppParam { name: "", ty: "DigestSession", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DigestSession(DigestSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DigestSession", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DigestSession(DigestSession const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DigestSession()  = default;
public:


// Fields

// Static field rng


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::DigestSession, 0x38>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::DigestSession);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DigestSession*, "System.Net", "DigestSession");
