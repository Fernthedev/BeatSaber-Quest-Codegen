#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherKeyAttribute)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OtherKeyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute);
// Type: Org.BouncyCastle.Asn1.Cms::OtherKeyAttribute
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(84))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::OtherKeyAttribute*
class CORDL_TYPE OtherKeyAttribute : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field keyAttrId offset 0x10
 __declspec(property(get=__get_keyAttrId, put=__set_keyAttrId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  keyAttrId;

/// @brief Field keyAttr offset 0x18
 __declspec(property(get=__get_keyAttr, put=__set_keyAttr)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  keyAttr;

 __declspec(property(get=get_KeyAttrId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  KeyAttrId;

 __declspec(property(get=get_KeyAttr)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  KeyAttr;

constexpr void __set_keyAttrId(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_keyAttrId() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_keyAttrId() const;

constexpr void __set_keyAttr(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_keyAttr() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_keyAttr() const;

/// @brief Method GetInstance addr 0xe78abc size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe7b758 size 0xe0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  keyAttrId, ::Org::BouncyCastle::Asn1::Asn1Encodable*  keyAttr) ;

/// @brief Method .ctor addr 0xe7b838 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  keyAttrId, ::Org::BouncyCastle::Asn1::Asn1Encodable*  keyAttr) ;

/// @brief Method get_KeyAttrId addr 0xe7b864 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_KeyAttrId() ;

/// @brief Method get_KeyAttr addr 0xe7b86c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_KeyAttr() ;

/// @brief Method ToAsn1Object addr 0xe7b874 size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "OtherKeyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OtherKeyAttribute(OtherKeyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OtherKeyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OtherKeyAttribute(OtherKeyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OtherKeyAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*, "Org.BouncyCastle.Asn1.Cms", "OtherKeyAttribute");
