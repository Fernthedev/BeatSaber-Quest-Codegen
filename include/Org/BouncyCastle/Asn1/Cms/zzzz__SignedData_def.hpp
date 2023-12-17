#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignedData)
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class SignedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::SignedData);
// Type: Org.BouncyCastle.Asn1.Cms::SignedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(93))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::SignedData*
class CORDL_TYPE SignedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field digestAlgorithms offset 0x18
 __declspec(property(get=__get_digestAlgorithms, put=__set_digestAlgorithms)) ::Org::BouncyCastle::Asn1::Asn1Set*  digestAlgorithms;

/// @brief Field contentInfo offset 0x20
 __declspec(property(get=__get_contentInfo, put=__set_contentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo;

/// @brief Field certificates offset 0x28
 __declspec(property(get=__get_certificates, put=__set_certificates)) ::Org::BouncyCastle::Asn1::Asn1Set*  certificates;

/// @brief Field crls offset 0x30
 __declspec(property(get=__get_crls, put=__set_crls)) ::Org::BouncyCastle::Asn1::Asn1Set*  crls;

/// @brief Field signerInfos offset 0x38
 __declspec(property(get=__get_signerInfos, put=__set_signerInfos)) ::Org::BouncyCastle::Asn1::Asn1Set*  signerInfos;

/// @brief Field certsBer offset 0x40
 __declspec(property(get=__get_certsBer, put=__set_certsBer)) bool  certsBer;

/// @brief Field crlsBer offset 0x41
 __declspec(property(get=__get_crlsBer, put=__set_crlsBer)) bool  crlsBer;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

 __declspec(property(get=get_DigestAlgorithms)) ::Org::BouncyCastle::Asn1::Asn1Set*  DigestAlgorithms;

 __declspec(property(get=get_EncapContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  EncapContentInfo;

 __declspec(property(get=get_Certificates)) ::Org::BouncyCastle::Asn1::Asn1Set*  Certificates;

 __declspec(property(get=get_CRLs)) ::Org::BouncyCastle::Asn1::Asn1Set*  CRLs;

 __declspec(property(get=get_SignerInfos)) ::Org::BouncyCastle::Asn1::Asn1Set*  SignerInfos;

static inline void setStaticF_Version1(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_Version1() ;

static inline void setStaticF_Version3(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_Version3() ;

static inline void setStaticF_Version4(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_Version4() ;

static inline void setStaticF_Version5(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_Version5() ;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_digestAlgorithms(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_digestAlgorithms() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_digestAlgorithms() const;

constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* __get_contentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> __get_contentInfo() const;

constexpr void __set_certificates(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_certificates() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_certificates() const;

constexpr void __set_crls(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_crls() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_crls() const;

constexpr void __set_signerInfos(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_signerInfos() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_signerInfos() const;

constexpr void __set_certsBer(bool  value) ;

constexpr bool& __get_certsBer() ;

constexpr bool const& __get_certsBer() const;

constexpr void __set_crlsBer(bool  value) ;

constexpr bool& __get_crlsBer() ;

constexpr bool const& __get_crlsBer() const;

/// @brief Method GetInstance addr 0xe7d7f4 size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::SignedData* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cms::SignedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set*  digestAlgorithms, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  certificates, ::Org::BouncyCastle::Asn1::Asn1Set*  crls, ::Org::BouncyCastle::Asn1::Asn1Set*  signerInfos) ;

/// @brief Method .ctor addr 0xe7df08 size 0x110 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set*  digestAlgorithms, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  certificates, ::Org::BouncyCastle::Asn1::Asn1Set*  crls, ::Org::BouncyCastle::Asn1::Asn1Set*  signerInfos) ;

/// @brief Method CalculateVersion addr 0xe7e018 size 0x694 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* CalculateVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  contentOid, ::Org::BouncyCastle::Asn1::Asn1Set*  certs, ::Org::BouncyCastle::Asn1::Asn1Set*  crls, ::Org::BouncyCastle::Asn1::Asn1Set*  signerInfs) ;

/// @brief Method CheckForVersion3 addr 0xe7e6ac size 0x2d4 virtual false final false
inline bool CheckForVersion3(::Org::BouncyCastle::Asn1::Asn1Set*  signerInfs) ;

static inline ::Org::BouncyCastle::Asn1::Cms::SignedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe7d898 size 0x670 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_Version addr 0xe7e980 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

/// @brief Method get_DigestAlgorithms addr 0xe7e988 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_DigestAlgorithms() ;

/// @brief Method get_EncapContentInfo addr 0xe7e990 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_EncapContentInfo() ;

/// @brief Method get_Certificates addr 0xe7e998 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Certificates() ;

/// @brief Method get_CRLs addr 0xe7e9a0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_CRLs() ;

/// @brief Method get_SignerInfos addr 0xe7e9a8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_SignerInfos() ;

/// @brief Method ToAsn1Object addr 0xe7e9b0 size 0x26c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignedData(SignedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignedData(SignedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignedData()  = default;
public:


// Fields

// Static field Version1

// Static field Version3

// Static field Version4

// Static field Version5


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::SignedData, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::SignedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::SignedData*, "Org.BouncyCastle.Asn1.Cms", "SignedData");
