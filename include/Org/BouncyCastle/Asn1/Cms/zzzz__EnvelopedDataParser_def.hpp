#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvelopedDataParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfoParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser);
// Type: Org.BouncyCastle.Asn1.Cms::EnvelopedDataParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(72))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::EnvelopedDataParser*
class CORDL_TYPE EnvelopedDataParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _seq offset 0x10
 __declspec(property(get=__get__seq, put=__set__seq)) ::Org::BouncyCastle::Asn1::Asn1SequenceParser*  _seq;

/// @brief Field _version offset 0x18
 __declspec(property(get=__get__version, put=__set__version)) ::Org::BouncyCastle::Asn1::DerInteger*  _version;

/// @brief Field _nextObject offset 0x20
 __declspec(property(get=__get__nextObject, put=__set__nextObject)) ::Org::BouncyCastle::Asn1::IAsn1Convertible*  _nextObject;

/// @brief Field _originatorInfoCalled offset 0x28
 __declspec(property(get=__get__originatorInfoCalled, put=__set__originatorInfoCalled)) bool  _originatorInfoCalled;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

constexpr void __set__seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* __get__seq() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1SequenceParser*> __get__seq() const;

constexpr void __set__version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get__version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get__version() const;

constexpr void __set__nextObject(::Org::BouncyCastle::Asn1::IAsn1Convertible*  value) ;

constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* __get__nextObject() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IAsn1Convertible*> __get__nextObject() const;

constexpr void __set__originatorInfoCalled(bool  value) ;

constexpr bool& __get__originatorInfoCalled() ;

constexpr bool const& __get__originatorInfoCalled() const;

static inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  seq) ;

/// @brief Method .ctor addr 0xe77940 size 0x124 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  seq) ;

/// @brief Method get_Version addr 0xe77a64 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

/// @brief Method GetOriginatorInfo addr 0xe77a6c size 0x2e0 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetOriginatorInfo() ;

/// @brief Method GetRecipientInfos addr 0xe77d4c size 0x100 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetRecipientInfos() ;

/// @brief Method GetEncryptedContentInfo addr 0xe77e4c size 0x120 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser* GetEncryptedContentInfo() ;

/// @brief Method GetUnprotectedAttrs addr 0xe77f6c size 0x1ac virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetUnprotectedAttrs() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvelopedDataParser(EnvelopedDataParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvelopedDataParser(EnvelopedDataParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvelopedDataParser()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser*, "Org.BouncyCastle.Asn1.Cms", "EnvelopedDataParser");
