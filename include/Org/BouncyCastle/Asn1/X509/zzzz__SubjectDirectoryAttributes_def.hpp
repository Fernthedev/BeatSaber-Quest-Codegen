#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SubjectDirectoryAttributes)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectDirectoryAttributes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes);
// Type: Org.BouncyCastle.Asn1.X509::SubjectDirectoryAttributes
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(382))
// CS Name: ::Org.BouncyCastle.Asn1.X509::SubjectDirectoryAttributes*
class CORDL_TYPE SubjectDirectoryAttributes : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field attributes offset 0x10
 __declspec(property(get=__get_attributes, put=__set_attributes)) ::System::Collections::IList*  attributes;

 __declspec(property(get=get_Attributes)) ::System::Collections::IEnumerable*  Attributes;

constexpr void __set_attributes(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_attributes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_attributes() const;

/// @brief Method GetInstance addr 0x1196688 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x1196810 size 0x360 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* New_ctor(::System::Collections::ArrayList*  attributes) ;

/// @brief Method .ctor addr 0x1196b70 size 0x4 virtual false final false
inline void _ctor(::System::Collections::ArrayList*  attributes) ;

static inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* New_ctor(::System::Collections::IList*  attributes) ;

/// @brief Method .ctor addr 0x1196b74 size 0x78 virtual false final false
inline void _ctor(::System::Collections::IList*  attributes) ;

/// @brief Method ToAsn1Object addr 0x1196bec size 0x2c8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method get_Attributes addr 0x1196eb4 size 0x68 virtual false final false
inline ::System::Collections::IEnumerable* get_Attributes() ;

// Ctor Parameters [CppParam { name: "", ty: "SubjectDirectoryAttributes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubjectDirectoryAttributes(SubjectDirectoryAttributes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubjectDirectoryAttributes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubjectDirectoryAttributes(SubjectDirectoryAttributes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubjectDirectoryAttributes()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*, "Org.BouncyCastle.Asn1.X509", "SubjectDirectoryAttributes");
