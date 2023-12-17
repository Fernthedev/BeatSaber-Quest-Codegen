#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAuthenticatedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class AuthenticatedDataParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser);
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedDataParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(621))
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthenticatedDataParser*
class CORDL_TYPE CmsAuthenticatedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::Org::BouncyCastle::Cms::CmsContentInfoParser)]{};

/// @brief Field _recipientInfoStore offset 0x20
 __declspec(property(get=__get__recipientInfoStore, put=__set__recipientInfoStore)) ::Org::BouncyCastle::Cms::RecipientInformationStore*  _recipientInfoStore;

/// @brief Field authData offset 0x28
 __declspec(property(get=__get_authData, put=__set_authData)) ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*  authData;

/// @brief Field macAlg offset 0x30
 __declspec(property(get=__get_macAlg, put=__set_macAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  macAlg;

/// @brief Field mac offset 0x38
 __declspec(property(get=__get_mac, put=__set_mac)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mac;

/// @brief Field authAttrs offset 0x40
 __declspec(property(get=__get_authAttrs, put=__set_authAttrs)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  authAttrs;

/// @brief Field unauthAttrs offset 0x48
 __declspec(property(get=__get_unauthAttrs, put=__set_unauthAttrs)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  unauthAttrs;

/// @brief Field authAttrNotRead offset 0x50
 __declspec(property(get=__get_authAttrNotRead, put=__set_authAttrNotRead)) bool  authAttrNotRead;

/// @brief Field unauthAttrNotRead offset 0x51
 __declspec(property(get=__get_unauthAttrNotRead, put=__set_unauthAttrNotRead)) bool  unauthAttrNotRead;

 __declspec(property(get=get_MacAlgorithmID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  MacAlgorithmID;

 __declspec(property(get=get_MacAlgOid)) ::StringW  MacAlgOid;

 __declspec(property(get=get_MacAlgParams)) ::Org::BouncyCastle::Asn1::Asn1Object*  MacAlgParams;

constexpr void __set__recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore*  value) ;

constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* __get__recipientInfoStore() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> __get__recipientInfoStore() const;

constexpr void __set_authData(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* __get_authData() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*> __get_authData() const;

constexpr void __set_macAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_macAlg() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_macAlg() const;

constexpr void __set_mac(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mac() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mac() const;

constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* __get_authAttrs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> __get_authAttrs() const;

constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* __get_unauthAttrs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> __get_unauthAttrs() const;

constexpr void __set_authAttrNotRead(bool  value) ;

constexpr bool& __get_authAttrNotRead() ;

constexpr bool const& __get_authAttrNotRead() const;

constexpr void __set_unauthAttrNotRead(bool  value) ;

constexpr bool& __get_unauthAttrNotRead() ;

constexpr bool const& __get_unauthAttrNotRead() const;

static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  envelopedData) ;

/// @brief Method .ctor addr 0x11da7ec size 0x78 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  envelopedData) ;

static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser* New_ctor(::System::IO::Stream*  envelopedData) ;

/// @brief Method .ctor addr 0x11da864 size 0x308 virtual false final false
inline void _ctor(::System::IO::Stream*  envelopedData) ;

/// @brief Method get_MacAlgorithmID addr 0x11dab6c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MacAlgorithmID() ;

/// @brief Method get_MacAlgOid addr 0x11dab74 size 0x2c virtual false final false
inline ::StringW get_MacAlgOid() ;

/// @brief Method get_MacAlgParams addr 0x11daba0 size 0x38 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* get_MacAlgParams() ;

/// @brief Method GetRecipientInfos addr 0x11dabd8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos() ;

/// @brief Method GetMac addr 0x11dabe0 size 0x94 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetMac() ;

/// @brief Method GetAuthAttrs addr 0x11dac74 size 0x24c virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAuthAttrs() ;

/// @brief Method GetUnauthAttrs addr 0x11daec0 size 0x24c virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnauthAttrs() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsAuthenticatedDataParser(CmsAuthenticatedDataParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsAuthenticatedDataParser(CmsAuthenticatedDataParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsAuthenticatedDataParser()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, 0x58>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataParser");
