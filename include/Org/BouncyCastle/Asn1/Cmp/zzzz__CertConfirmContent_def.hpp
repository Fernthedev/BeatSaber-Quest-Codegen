#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CertConfirmContent)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertConfirmContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent);
// Type: Org.BouncyCastle.Asn1.Cmp::CertConfirmContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertConfirmContent*
class CORDL_TYPE CertConfirmContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field content offset 0x10
 __declspec(property(get=__get_content, put=__set_content)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  content;

constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_content() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_content() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe64398 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe643c0 size 0x18c virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* GetInstance(::System::Object*  obj) ;

/// @brief Method ToCertStatusArray addr 0xe6454c size 0xf4 virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertStatus*,::Array<::Org::BouncyCastle::Asn1::Cmp::CertStatus*>*> ToCertStatusArray() ;

/// @brief Method ToAsn1Object addr 0xe647c8 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CertConfirmContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertConfirmContent(CertConfirmContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertConfirmContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertConfirmContent(CertConfirmContent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertConfirmContent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*, "Org.BouncyCastle.Asn1.Cmp", "CertConfirmContent");
