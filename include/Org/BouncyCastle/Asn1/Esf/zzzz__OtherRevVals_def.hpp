#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherRevVals)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevVals;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherRevVals);
// Type: Org.BouncyCastle.Asn1.Esf::OtherRevVals
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(152))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OtherRevVals*
class CORDL_TYPE OtherRevVals : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field otherRevValType offset 0x10
 __declspec(property(get=__get_otherRevValType, put=__set_otherRevValType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  otherRevValType;

/// @brief Field otherRevVals offset 0x18
 __declspec(property(get=__get_otherRevVals, put=__set_otherRevVals)) ::Org::BouncyCastle::Asn1::Asn1Object*  otherRevVals;

 __declspec(property(get=get_OtherRevValType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  OtherRevValType;

 __declspec(property(get=get_OtherRevValsObject)) ::Org::BouncyCastle::Asn1::Asn1Object*  OtherRevValsObject;

constexpr void __set_otherRevValType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_otherRevValType() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_otherRevValType() const;

constexpr void __set_otherRevVals(::Org::BouncyCastle::Asn1::Asn1Object*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object* __get_otherRevVals() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> __get_otherRevVals() const;

/// @brief Method GetInstance addr 0xe95784 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe9590c size 0x208 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  otherRevValType, ::Org::BouncyCastle::Asn1::Asn1Encodable*  otherRevVals) ;

/// @brief Method .ctor addr 0xe95b14 size 0xb8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  otherRevValType, ::Org::BouncyCastle::Asn1::Asn1Encodable*  otherRevVals) ;

/// @brief Method get_OtherRevValType addr 0xe95bcc size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OtherRevValType() ;

/// @brief Method get_OtherRevValsObject addr 0xe95bd4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* get_OtherRevValsObject() ;

/// @brief Method ToAsn1Object addr 0xe95bdc size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevVals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OtherRevVals(OtherRevVals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevVals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OtherRevVals(OtherRevVals const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OtherRevVals()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherRevVals, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherRevVals);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherRevVals*, "Org.BouncyCastle.Asn1.Esf", "OtherRevVals");
