#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedDataParser;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser);
// Type: Org.BouncyCastle.Cms::CmsEnvelopedDataParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(635))
// CS Name: ::Org.BouncyCastle.Cms::CmsEnvelopedDataParser*
class CORDL_TYPE CmsEnvelopedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Org::BouncyCastle::Cms::CmsContentInfoParser)]{};

/// @brief Field recipientInfoStore offset 0x20
 __declspec(property(get=__get_recipientInfoStore, put=__set_recipientInfoStore)) ::Org::BouncyCastle::Cms::RecipientInformationStore*  recipientInfoStore;

/// @brief Field envelopedData offset 0x28
 __declspec(property(get=__get_envelopedData, put=__set_envelopedData)) ::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser*  envelopedData;

/// @brief Field _encAlg offset 0x30
 __declspec(property(get=__get__encAlg, put=__set__encAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  _encAlg;

/// @brief Field _unprotectedAttributes offset 0x38
 __declspec(property(get=__get__unprotectedAttributes, put=__set__unprotectedAttributes)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  _unprotectedAttributes;

/// @brief Field _attrNotRead offset 0x40
 __declspec(property(get=__get__attrNotRead, put=__set__attrNotRead)) bool  _attrNotRead;

 __declspec(property(get=get_EncryptionAlgorithmID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  EncryptionAlgorithmID;

 __declspec(property(get=get_EncryptionAlgOid)) ::StringW  EncryptionAlgOid;

 __declspec(property(get=get_EncryptionAlgParams)) ::Org::BouncyCastle::Asn1::Asn1Object*  EncryptionAlgParams;

constexpr void __set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore*  value) ;

constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* __get_recipientInfoStore() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> __get_recipientInfoStore() const;

constexpr void __set_envelopedData(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* __get_envelopedData() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser*> __get_envelopedData() const;

constexpr void __set__encAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get__encAlg() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get__encAlg() const;

constexpr void __set__unprotectedAttributes(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* __get__unprotectedAttributes() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> __get__unprotectedAttributes() const;

constexpr void __set__attrNotRead(bool  value) ;

constexpr bool& __get__attrNotRead() ;

constexpr bool const& __get__attrNotRead() const;

static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  envelopedData) ;

/// @brief Method .ctor addr 0x11df62c size 0x78 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  envelopedData) ;

static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser* New_ctor(::System::IO::Stream*  envelopedData) ;

/// @brief Method .ctor addr 0x11df6a4 size 0x2f8 virtual false final false
inline void _ctor(::System::IO::Stream*  envelopedData) ;

/// @brief Method get_EncryptionAlgorithmID addr 0x11df99c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithmID() ;

/// @brief Method get_EncryptionAlgOid addr 0x11df9a4 size 0x2c virtual false final false
inline ::StringW get_EncryptionAlgOid() ;

/// @brief Method get_EncryptionAlgParams addr 0x11df9d0 size 0x38 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* get_EncryptionAlgParams() ;

/// @brief Method GetRecipientInfos addr 0x11dfa08 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos() ;

/// @brief Method GetUnprotectedAttributes addr 0x11dfa10 size 0x24c virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnprotectedAttributes() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsEnvelopedDataParser(CmsEnvelopedDataParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsEnvelopedDataParser(CmsEnvelopedDataParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsEnvelopedDataParser()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*, "Org.BouncyCastle.Cms", "CmsEnvelopedDataParser");
