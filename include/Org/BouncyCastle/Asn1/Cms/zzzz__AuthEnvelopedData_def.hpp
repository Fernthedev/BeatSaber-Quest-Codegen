#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(AuthEnvelopedData)
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AuthEnvelopedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData);
// Type: Org.BouncyCastle.Asn1.Cms::AuthEnvelopedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(60))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::AuthEnvelopedData*
class CORDL_TYPE AuthEnvelopedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field originatorInfo offset 0x18
 __declspec(property(get=__get_originatorInfo, put=__set_originatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo;

/// @brief Field recipientInfos offset 0x20
 __declspec(property(get=__get_recipientInfos, put=__set_recipientInfos)) ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos;

/// @brief Field authEncryptedContentInfo offset 0x28
 __declspec(property(get=__get_authEncryptedContentInfo, put=__set_authEncryptedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  authEncryptedContentInfo;

/// @brief Field authAttrs offset 0x30
 __declspec(property(get=__get_authAttrs, put=__set_authAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  authAttrs;

/// @brief Field mac offset 0x38
 __declspec(property(get=__get_mac, put=__set_mac)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  mac;

/// @brief Field unauthAttrs offset 0x40
 __declspec(property(get=__get_unauthAttrs, put=__set_unauthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  unauthAttrs;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

 __declspec(property(get=get_OriginatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  OriginatorInfo;

 __declspec(property(get=get_RecipientInfos)) ::Org::BouncyCastle::Asn1::Asn1Set*  RecipientInfos;

 __declspec(property(get=get_AuthEncryptedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  AuthEncryptedContentInfo;

 __declspec(property(get=get_AuthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  AuthAttrs;

 __declspec(property(get=get_Mac)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  Mac;

 __declspec(property(get=get_UnauthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  UnauthAttrs;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* __get_originatorInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> __get_originatorInfo() const;

constexpr void __set_recipientInfos(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_recipientInfos() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_recipientInfos() const;

constexpr void __set_authEncryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* __get_authEncryptedContentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*> __get_authEncryptedContentInfo() const;

constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_authAttrs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_authAttrs() const;

constexpr void __set_mac(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_mac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_mac() const;

constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_unauthAttrs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_unauthAttrs() const;

static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  authEncryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString*  mac, ::Org::BouncyCastle::Asn1::Asn1Set*  unauthAttrs) ;

/// @brief Method .ctor addr 0xe73ed8 size 0xac virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  authEncryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString*  mac, ::Org::BouncyCastle::Asn1::Asn1Set*  unauthAttrs) ;

static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe73f84 size 0x2e8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe743e4 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method GetInstance addr 0xe743fc size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Version addr 0xe74574 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

/// @brief Method get_OriginatorInfo addr 0xe7457c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* get_OriginatorInfo() ;

/// @brief Method get_RecipientInfos addr 0xe74584 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_RecipientInfos() ;

/// @brief Method get_AuthEncryptedContentInfo addr 0xe7458c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* get_AuthEncryptedContentInfo() ;

/// @brief Method get_AuthAttrs addr 0xe74594 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AuthAttrs() ;

/// @brief Method get_Mac addr 0xe7459c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Mac() ;

/// @brief Method get_UnauthAttrs addr 0xe745a4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnauthAttrs() ;

/// @brief Method ToAsn1Object addr 0xe745ac size 0x1cc virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthEnvelopedData(AuthEnvelopedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthEnvelopedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthEnvelopedData(AuthEnvelopedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AuthEnvelopedData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*, "Org.BouncyCastle.Asn1.Cms", "AuthEnvelopedData");
