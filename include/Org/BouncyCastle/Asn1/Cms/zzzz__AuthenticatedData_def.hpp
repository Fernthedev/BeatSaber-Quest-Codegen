#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticatedData)
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AuthenticatedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData);
// Type: Org.BouncyCastle.Asn1.Cms::AuthenticatedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(58))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::AuthenticatedData*
class CORDL_TYPE AuthenticatedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field originatorInfo offset 0x18
 __declspec(property(get=__get_originatorInfo, put=__set_originatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo;

/// @brief Field recipientInfos offset 0x20
 __declspec(property(get=__get_recipientInfos, put=__set_recipientInfos)) ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos;

/// @brief Field macAlgorithm offset 0x28
 __declspec(property(get=__get_macAlgorithm, put=__set_macAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  macAlgorithm;

/// @brief Field digestAlgorithm offset 0x30
 __declspec(property(get=__get_digestAlgorithm, put=__set_digestAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithm;

/// @brief Field encapsulatedContentInfo offset 0x38
 __declspec(property(get=__get_encapsulatedContentInfo, put=__set_encapsulatedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  encapsulatedContentInfo;

/// @brief Field authAttrs offset 0x40
 __declspec(property(get=__get_authAttrs, put=__set_authAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  authAttrs;

/// @brief Field mac offset 0x48
 __declspec(property(get=__get_mac, put=__set_mac)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  mac;

/// @brief Field unauthAttrs offset 0x50
 __declspec(property(get=__get_unauthAttrs, put=__set_unauthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  unauthAttrs;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

 __declspec(property(get=get_OriginatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  OriginatorInfo;

 __declspec(property(get=get_RecipientInfos)) ::Org::BouncyCastle::Asn1::Asn1Set*  RecipientInfos;

 __declspec(property(get=get_MacAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  MacAlgorithm;

 __declspec(property(get=get_DigestAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  DigestAlgorithm;

 __declspec(property(get=get_EncapsulatedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  EncapsulatedContentInfo;

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

constexpr void __set_macAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_macAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_macAlgorithm() const;

constexpr void __set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_digestAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_digestAlgorithm() const;

constexpr void __set_encapsulatedContentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* __get_encapsulatedContentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> __get_encapsulatedContentInfo() const;

constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_authAttrs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_authAttrs() const;

constexpr void __set_mac(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_mac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_mac() const;

constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_unauthAttrs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_unauthAttrs() const;

static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  macAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithm, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  encapsulatedContent, ::Org::BouncyCastle::Asn1::Asn1Set*  authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString*  mac, ::Org::BouncyCastle::Asn1::Asn1Set*  unauthAttrs) ;

/// @brief Method .ctor addr 0xe71ec0 size 0x134 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  macAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithm, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  encapsulatedContent, ::Org::BouncyCastle::Asn1::Asn1Set*  authAttrs, ::Org::BouncyCastle::Asn1::Asn1OctetString*  mac, ::Org::BouncyCastle::Asn1::Asn1Set*  unauthAttrs) ;

static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe7255c size 0x304 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe729f0 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedData* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method GetInstance addr 0xe72a08 size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedData* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Version addr 0xe72b80 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

/// @brief Method get_OriginatorInfo addr 0xe72b88 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* get_OriginatorInfo() ;

/// @brief Method get_RecipientInfos addr 0xe72b90 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_RecipientInfos() ;

/// @brief Method get_MacAlgorithm addr 0xe72b98 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MacAlgorithm() ;

/// @brief Method get_DigestAlgorithm addr 0xe72ba0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm() ;

/// @brief Method get_EncapsulatedContentInfo addr 0xe72ba8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_EncapsulatedContentInfo() ;

/// @brief Method get_AuthAttrs addr 0xe72bb0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AuthAttrs() ;

/// @brief Method get_Mac addr 0xe72bb8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Mac() ;

/// @brief Method get_UnauthAttrs addr 0xe72bc0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnauthAttrs() ;

/// @brief Method ToAsn1Object addr 0xe72bc8 size 0x1f4 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method CalculateVersion addr 0xe71ff4 size 0x568 virtual false final false
static inline int32_t CalculateVersion(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  origInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticatedData(AuthenticatedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticatedData(AuthenticatedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AuthenticatedData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AuthenticatedData, 0x58>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AuthenticatedData*, "Org.BouncyCastle.Asn1.Cms", "AuthenticatedData");
