#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ExtensionsGenerator)
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator);
// Type: Org.BouncyCastle.Asn1.X509::X509ExtensionsGenerator
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(407))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509ExtensionsGenerator*
class CORDL_TYPE X509ExtensionsGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field extensions offset 0x10
 __declspec(property(get=__get_extensions, put=__set_extensions)) ::System::Collections::IDictionary*  extensions;

/// @brief Field extOrdering offset 0x18
 __declspec(property(get=__get_extOrdering, put=__set_extOrdering)) ::System::Collections::IList*  extOrdering;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

constexpr void __set_extensions(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_extensions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_extensions() const;

constexpr void __set_extOrdering(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_extOrdering() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_extOrdering() const;

/// @brief Method Reset addr 0x11a10a8 size 0x68 virtual false final false
inline void Reset() ;

/// @brief Method AddExtension addr 0x11a1110 size 0x114 virtual false final false
inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, bool  critical, ::Org::BouncyCastle::Asn1::Asn1Encodable*  extValue) ;

/// @brief Method AddExtension addr 0x11a1224 size 0x28c virtual false final false
inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, bool  critical, ::ArrayW<uint8_t,::Array<uint8_t>*>  extValue) ;

/// @brief Method get_IsEmpty addr 0x11a14b0 size 0xb0 virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method Generate addr 0x11a1560 size 0x68 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Generate() ;

static inline ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x11a15c8 size 0x70 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionsGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509ExtensionsGenerator(X509ExtensionsGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionsGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509ExtensionsGenerator(X509ExtensionsGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509ExtensionsGenerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*, "Org.BouncyCastle.Asn1.X509", "X509ExtensionsGenerator");
