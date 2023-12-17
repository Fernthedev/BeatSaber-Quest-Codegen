#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpUserAttributeSubpacketVectorGenerator)
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg::Attr {
struct __ImageAttrib__Format;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVectorGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpUserAttributeSubpacketVectorGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1672))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpUserAttributeSubpacketVectorGenerator*
class CORDL_TYPE PgpUserAttributeSubpacketVectorGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field list offset 0x10
 __declspec(property(get=__get_list, put=__set_list)) ::System::Collections::IList*  list;

constexpr void __set_list(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_list() const;

/// @brief Method SetImageAttribute addr 0x10cd76c size 0x150 virtual true final false
inline void SetImageAttribute(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format  imageType, ::ArrayW<uint8_t,::Array<uint8_t>*>  imageData) ;

/// @brief Method Generate addr 0x10cd8bc size 0x2c8 virtual true final false
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* Generate() ;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x10cdb84 size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVectorGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpUserAttributeSubpacketVectorGenerator(PgpUserAttributeSubpacketVectorGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVectorGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpUserAttributeSubpacketVectorGenerator(PgpUserAttributeSubpacketVectorGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PgpUserAttributeSubpacketVectorGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUserAttributeSubpacketVectorGenerator");
