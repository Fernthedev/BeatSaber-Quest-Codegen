#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecipientKeyIdentifier)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OtherKeyAttribute;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientKeyIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier);
// Type: Org.BouncyCastle.Asn1.Cms::RecipientKeyIdentifier
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(91))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::RecipientKeyIdentifier*
class CORDL_TYPE RecipientKeyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field subjectKeyIdentifier offset 0x10
 __declspec(property(get=__get_subjectKeyIdentifier, put=__set_subjectKeyIdentifier)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  subjectKeyIdentifier;

/// @brief Field date offset 0x18
 __declspec(property(get=__get_date, put=__set_date)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  date;

/// @brief Field other offset 0x20
 __declspec(property(get=__get_other, put=__set_other)) ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*  other;

 __declspec(property(get=get_SubjectKeyIdentifier)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  SubjectKeyIdentifier;

 __declspec(property(get=get_Date)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  Date;

 __declspec(property(get=get_OtherKeyAttribute)) ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*  OtherKeyAttribute;

constexpr void __set_subjectKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_subjectKeyIdentifier() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_subjectKeyIdentifier() const;

constexpr void __set_date(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* __get_date() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> __get_date() const;

constexpr void __set_other(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* __get_other() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*> __get_other() const;

static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  date, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*  other) ;

/// @brief Method .ctor addr 0xe7cf28 size 0x3c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  date, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*  other) ;

static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  subjectKeyIdentifier) ;

/// @brief Method .ctor addr 0xe7cf64 size 0xc virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  subjectKeyIdentifier) ;

static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  date, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*  other) ;

/// @brief Method .ctor addr 0xe7cf70 size 0x90 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  date, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*  other) ;

static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe7d000 size 0x234 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe79694 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  ato, bool  explicitly) ;

/// @brief Method GetInstance addr 0xe7d234 size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* GetInstance(::System::Object*  obj) ;

/// @brief Method get_SubjectKeyIdentifier addr 0xe7d3ac size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_SubjectKeyIdentifier() ;

/// @brief Method get_Date addr 0xe7d3b4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_Date() ;

/// @brief Method get_OtherKeyAttribute addr 0xe7d3bc size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* get_OtherKeyAttribute() ;

/// @brief Method ToAsn1Object addr 0xe7d3c4 size 0x174 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "RecipientKeyIdentifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecipientKeyIdentifier(RecipientKeyIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecipientKeyIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecipientKeyIdentifier(RecipientKeyIdentifier const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecipientKeyIdentifier()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*, "Org.BouncyCastle.Asn1.Cms", "RecipientKeyIdentifier");
