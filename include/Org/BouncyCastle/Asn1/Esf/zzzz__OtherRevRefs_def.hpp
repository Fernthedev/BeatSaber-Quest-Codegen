#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherRevRefs)
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
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevRefs;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs);
// Type: Org.BouncyCastle.Asn1.Esf::OtherRevRefs
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(151))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OtherRevRefs*
class CORDL_TYPE OtherRevRefs : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field otherRevRefType offset 0x10
 __declspec(property(get=__get_otherRevRefType, put=__set_otherRevRefType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  otherRevRefType;

/// @brief Field otherRevRefs offset 0x18
 __declspec(property(get=__get_otherRevRefs, put=__set_otherRevRefs)) ::Org::BouncyCastle::Asn1::Asn1Object*  otherRevRefs;

 __declspec(property(get=get_OtherRevRefType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  OtherRevRefType;

 __declspec(property(get=get_OtherRevRefsObject)) ::Org::BouncyCastle::Asn1::Asn1Object*  OtherRevRefsObject;

constexpr void __set_otherRevRefType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_otherRevRefType() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_otherRevRefType() const;

constexpr void __set_otherRevRefs(::Org::BouncyCastle::Asn1::Asn1Object*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object* __get_otherRevRefs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> __get_otherRevRefs() const;

/// @brief Method GetInstance addr 0xe92aec size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe953c4 size 0x208 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  otherRevRefType, ::Org::BouncyCastle::Asn1::Asn1Encodable*  otherRevRefs) ;

/// @brief Method .ctor addr 0xe955cc size 0xb8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  otherRevRefType, ::Org::BouncyCastle::Asn1::Asn1Encodable*  otherRevRefs) ;

/// @brief Method get_OtherRevRefType addr 0xe95684 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OtherRevRefType() ;

/// @brief Method get_OtherRevRefsObject addr 0xe9568c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* get_OtherRevRefsObject() ;

/// @brief Method ToAsn1Object addr 0xe95694 size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevRefs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OtherRevRefs(OtherRevRefs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevRefs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OtherRevRefs(OtherRevRefs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OtherRevRefs()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherRevRefs, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs*, "Org.BouncyCastle.Asn1.Esf", "OtherRevRefs");
