#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAuthEnvelopedData)
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace Org::BouncyCastle::Cms {
class __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthEnvelopedData;
}
namespace Org::BouncyCastle::Cms {
class __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable);
// Type: ::AuthEnvelopedSecureReadable
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(624))
// CS Name: ::CmsAuthEnvelopedData::AuthEnvelopedSecureReadable*
class CORDL_TYPE __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field parent offset 0x10
 __declspec(property(get=__get_parent, put=__set_parent)) ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*  parent;

 __declspec(property(get=get_Algorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  Algorithm;

 __declspec(property(get=get_CryptoObject)) ::System::Object*  CryptoObject;

/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr operator  ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept;

constexpr void __set_parent(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*  value) ;

constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*> __get_parent() const;

static inline ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable* New_ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*  parent) ;

/// @brief Method .ctor addr 0x11dc4b0 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*  parent) ;

/// @brief Method get_Algorithm addr 0x11dc4d8 size 0x1c virtual true final true
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm() ;

/// @brief Method get_CryptoObject addr 0x11dc4f4 size 0x8 virtual true final true
inline ::System::Object* get_CryptoObject() ;

/// @brief Method GetReadable addr 0x11dc4fc size 0x4c virtual true final true
inline ::Org::BouncyCastle::Cms::CmsReadable* GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key) ;

// Ctor Parameters [CppParam { name: "", ty: "__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable(__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable(__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsAuthEnvelopedData
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(625))
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthEnvelopedData*
class CORDL_TYPE CmsAuthEnvelopedData : public ::System::Object {
public:
// Declarations
using AuthEnvelopedSecureReadable = ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field recipientInfoStore offset 0x10
 __declspec(property(get=__get_recipientInfoStore, put=__set_recipientInfoStore)) ::Org::BouncyCastle::Cms::RecipientInformationStore*  recipientInfoStore;

/// @brief Field contentInfo offset 0x18
 __declspec(property(get=__get_contentInfo, put=__set_contentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo;

/// @brief Field originator offset 0x20
 __declspec(property(get=__get_originator, put=__set_originator)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originator;

/// @brief Field authEncAlg offset 0x28
 __declspec(property(get=__get_authEncAlg, put=__set_authEncAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  authEncAlg;

/// @brief Field authAttrs offset 0x30
 __declspec(property(get=__get_authAttrs, put=__set_authAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  authAttrs;

/// @brief Field mac offset 0x38
 __declspec(property(get=__get_mac, put=__set_mac)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mac;

/// @brief Field unauthAttrs offset 0x40
 __declspec(property(get=__get_unauthAttrs, put=__set_unauthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  unauthAttrs;

constexpr void __set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore*  value) ;

constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* __get_recipientInfoStore() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> __get_recipientInfoStore() const;

constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* __get_contentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> __get_contentInfo() const;

constexpr void __set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* __get_originator() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> __get_originator() const;

constexpr void __set_authEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_authEncAlg() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_authEncAlg() const;

constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_authAttrs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_authAttrs() const;

constexpr void __set_mac(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mac() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mac() const;

constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_unauthAttrs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_unauthAttrs() const;

static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  authEnvData) ;

/// @brief Method .ctor addr 0x11dc358 size 0x24 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  authEnvData) ;

static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* New_ctor(::System::IO::Stream*  authEnvData) ;

/// @brief Method .ctor addr 0x11dc48c size 0x24 virtual false final false
inline void _ctor(::System::IO::Stream*  authEnvData) ;

static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo) ;

/// @brief Method .ctor addr 0x11dc37c size 0x110 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo*  contentInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsAuthEnvelopedData(CmsAuthEnvelopedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsAuthEnvelopedData(CmsAuthEnvelopedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsAuthEnvelopedData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedData");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedData/AuthEnvelopedSecureReadable");
