#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PkiMessages)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessage;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessages;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiMessages);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiMessages
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(40))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiMessages*
class CORDL_TYPE PkiMessages : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
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

static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessages* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe6d07c size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe69d18 size 0x18c virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessages* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessages* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>*>  msgs) ;

/// @brief Method .ctor addr 0xe6d0a4 size 0x7c virtual false final false
inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>*>  msgs) ;

/// @brief Method ToPkiMessageArray addr 0xe6d120 size 0xf4 virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>*> ToPkiMessageArray() ;

/// @brief Method ToAsn1Object addr 0xe6d214 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PkiMessages", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkiMessages(PkiMessages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkiMessages", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkiMessages(PkiMessages const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkiMessages()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiMessages, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiMessages);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiMessages*, "Org.BouncyCastle.Asn1.Cmp", "PkiMessages");
