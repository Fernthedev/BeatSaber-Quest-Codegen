#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvelopedData)
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::EnvelopedData);
// Type: Org.BouncyCastle.Asn1.Cms::EnvelopedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(71))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::EnvelopedData*
class CORDL_TYPE EnvelopedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field originatorInfo offset 0x18
 __declspec(property(get=__get_originatorInfo, put=__set_originatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo;

/// @brief Field recipientInfos offset 0x20
 __declspec(property(get=__get_recipientInfos, put=__set_recipientInfos)) ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos;

/// @brief Field encryptedContentInfo offset 0x28
 __declspec(property(get=__get_encryptedContentInfo, put=__set_encryptedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  encryptedContentInfo;

/// @brief Field unprotectedAttrs offset 0x30
 __declspec(property(get=__get_unprotectedAttrs, put=__set_unprotectedAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  unprotectedAttrs;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

 __declspec(property(get=get_OriginatorInfo)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  OriginatorInfo;

 __declspec(property(get=get_RecipientInfos)) ::Org::BouncyCastle::Asn1::Asn1Set*  RecipientInfos;

 __declspec(property(get=get_EncryptedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  EncryptedContentInfo;

 __declspec(property(get=get_UnprotectedAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set*  UnprotectedAttrs;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* __get_originatorInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> __get_originatorInfo() const;

constexpr void __set_recipientInfos(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_recipientInfos() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_recipientInfos() const;

constexpr void __set_encryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* __get_encryptedContentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*> __get_encryptedContentInfo() const;

constexpr void __set_unprotectedAttrs(::Org::BouncyCastle::Asn1::Asn1Set*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set* __get_unprotectedAttrs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> __get_unprotectedAttrs() const;

static inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  encryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  unprotectedAttrs) ;

/// @brief Method .ctor addr 0xe76d44 size 0xb0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  encryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  unprotectedAttrs) ;

static inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  encryptedContentInfo, ::Org::BouncyCastle::Asn1::Cms::Attributes*  unprotectedAttrs) ;

/// @brief Method .ctor addr 0xe770d4 size 0xc8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*  encryptedContentInfo, ::Org::BouncyCastle::Asn1::Cms::Attributes*  unprotectedAttrs) ;

static inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe7719c size 0x1fc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe77398 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0xe773b0 size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Version addr 0xe77454 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

/// @brief Method get_OriginatorInfo addr 0xe7745c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* get_OriginatorInfo() ;

/// @brief Method get_RecipientInfos addr 0xe77464 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_RecipientInfos() ;

/// @brief Method get_EncryptedContentInfo addr 0xe7746c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* get_EncryptedContentInfo() ;

/// @brief Method get_UnprotectedAttrs addr 0xe77474 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnprotectedAttrs() ;

/// @brief Method ToAsn1Object addr 0xe7747c size 0x1a4 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method CalculateVersion addr 0xe76df4 size 0x2e0 virtual false final false
static inline int32_t CalculateVersion(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*  originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set*  recipientInfos, ::Org::BouncyCastle::Asn1::Asn1Set*  unprotectedAttrs) ;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvelopedData(EnvelopedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvelopedData(EnvelopedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvelopedData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EnvelopedData, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EnvelopedData*, "Org.BouncyCastle.Asn1.Cms", "EnvelopedData");
