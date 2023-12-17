#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TimeStampedDataParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class MetaData;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser);
// Type: Org.BouncyCastle.Asn1.Cms::TimeStampedDataParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(100))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::TimeStampedDataParser*
class CORDL_TYPE TimeStampedDataParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field dataUri offset 0x18
 __declspec(property(get=__get_dataUri, put=__set_dataUri)) ::Org::BouncyCastle::Asn1::DerIA5String*  dataUri;

/// @brief Field metaData offset 0x20
 __declspec(property(get=__get_metaData, put=__set_metaData)) ::Org::BouncyCastle::Asn1::Cms::MetaData*  metaData;

/// @brief Field content offset 0x28
 __declspec(property(get=__get_content, put=__set_content)) ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*  content;

/// @brief Field temporalEvidence offset 0x30
 __declspec(property(get=__get_temporalEvidence, put=__set_temporalEvidence)) ::Org::BouncyCastle::Asn1::Cms::Evidence*  temporalEvidence;

/// @brief Field parser offset 0x38
 __declspec(property(get=__get_parser, put=__set_parser)) ::Org::BouncyCastle::Asn1::Asn1SequenceParser*  parser;

 __declspec(property(get=get_DataUri)) ::Org::BouncyCastle::Asn1::DerIA5String*  DataUri;

 __declspec(property(get=get_MetaData)) ::Org::BouncyCastle::Asn1::Cms::MetaData*  MetaData;

 __declspec(property(get=get_Content)) ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*  Content;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_dataUri(::Org::BouncyCastle::Asn1::DerIA5String*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerIA5String* __get_dataUri() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerIA5String*> __get_dataUri() const;

constexpr void __set_metaData(::Org::BouncyCastle::Asn1::Cms::MetaData*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData* __get_metaData() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::MetaData*> __get_metaData() const;

constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1OctetStringParser*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* __get_content() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*> __get_content() const;

constexpr void __set_temporalEvidence(::Org::BouncyCastle::Asn1::Cms::Evidence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence* __get_temporalEvidence() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::Evidence*> __get_temporalEvidence() const;

constexpr void __set_parser(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* __get_parser() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1SequenceParser*> __get_parser() const;

static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  parser) ;

/// @brief Method .ctor addr 0xe82948 size 0x400 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser*  parser) ;

/// @brief Method GetInstance addr 0xe82d48 size 0x128 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* GetInstance(::System::Object*  obj) ;

/// @brief Method get_DataUri addr 0xe82e70 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerIA5String* get_DataUri() ;

/// @brief Method get_MetaData addr 0xe82e78 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cms::MetaData* get_MetaData() ;

/// @brief Method get_Content addr 0xe82e80 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* get_Content() ;

/// @brief Method GetTemporalEvidence addr 0xe82e88 size 0x12c virtual true final false
inline ::Org::BouncyCastle::Asn1::Cms::Evidence* GetTemporalEvidence() ;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampedDataParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeStampedDataParser(TimeStampedDataParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampedDataParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeStampedDataParser(TimeStampedDataParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeStampedDataParser()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*, "Org.BouncyCastle.Asn1.Cms", "TimeStampedDataParser");
