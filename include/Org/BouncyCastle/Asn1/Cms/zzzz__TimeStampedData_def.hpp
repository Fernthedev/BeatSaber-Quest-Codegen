#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TimeStampedData)
namespace Org::BouncyCastle::Asn1::Cms {
class Evidence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
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
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class TimeStampedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::TimeStampedData);
// Type: Org.BouncyCastle.Asn1.Cms::TimeStampedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(99))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::TimeStampedData*
class CORDL_TYPE TimeStampedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field dataUri offset 0x18
 __declspec(property(get=__get_dataUri, put=__set_dataUri)) ::Org::BouncyCastle::Asn1::DerIA5String*  dataUri;

/// @brief Field metaData offset 0x20
 __declspec(property(get=__get_metaData, put=__set_metaData)) ::Org::BouncyCastle::Asn1::Cms::MetaData*  metaData;

/// @brief Field content offset 0x28
 __declspec(property(get=__get_content, put=__set_content)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  content;

/// @brief Field temporalEvidence offset 0x30
 __declspec(property(get=__get_temporalEvidence, put=__set_temporalEvidence)) ::Org::BouncyCastle::Asn1::Cms::Evidence*  temporalEvidence;

 __declspec(property(get=get_DataUri)) ::Org::BouncyCastle::Asn1::DerIA5String*  DataUri;

 __declspec(property(get=get_MetaData)) ::Org::BouncyCastle::Asn1::Cms::MetaData*  MetaData;

 __declspec(property(get=get_Content)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  Content;

 __declspec(property(get=get_TemporalEvidence)) ::Org::BouncyCastle::Asn1::Cms::Evidence*  TemporalEvidence;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_version() const;

constexpr void __set_dataUri(::Org::BouncyCastle::Asn1::DerIA5String*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerIA5String* __get_dataUri() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerIA5String*> __get_dataUri() const;

constexpr void __set_metaData(::Org::BouncyCastle::Asn1::Cms::MetaData*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData* __get_metaData() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::MetaData*> __get_metaData() const;

constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_content() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_content() const;

constexpr void __set_temporalEvidence(::Org::BouncyCastle::Asn1::Cms::Evidence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence* __get_temporalEvidence() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::Evidence*> __get_temporalEvidence() const;

static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedData* New_ctor(::Org::BouncyCastle::Asn1::DerIA5String*  dataUri, ::Org::BouncyCastle::Asn1::Cms::MetaData*  metaData, ::Org::BouncyCastle::Asn1::Asn1OctetString*  content, ::Org::BouncyCastle::Asn1::Cms::Evidence*  temporalEvidence) ;

/// @brief Method .ctor addr 0xe822e8 size 0x94 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerIA5String*  dataUri, ::Org::BouncyCastle::Asn1::Cms::MetaData*  metaData, ::Org::BouncyCastle::Asn1::Asn1OctetString*  content, ::Org::BouncyCastle::Asn1::Cms::Evidence*  temporalEvidence) ;

static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe8237c size 0x268 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe826d4 size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedData* GetInstance(::System::Object*  obj) ;

/// @brief Method get_DataUri addr 0xe82778 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerIA5String* get_DataUri() ;

/// @brief Method get_MetaData addr 0xe82780 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::MetaData* get_MetaData() ;

/// @brief Method get_Content addr 0xe82788 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Content() ;

/// @brief Method get_TemporalEvidence addr 0xe82790 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::Evidence* get_TemporalEvidence() ;

/// @brief Method ToAsn1Object addr 0xe82798 size 0x1b0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeStampedData(TimeStampedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeStampedData(TimeStampedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeStampedData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::TimeStampedData, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::TimeStampedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::TimeStampedData*, "Org.BouncyCastle.Asn1.Cms", "TimeStampedData");
