#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Datatype_union)
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_union;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_union);
// Type: System.Xml.Schema::Datatype_union
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11624))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11623))
// CS Name: ::System.Xml.Schema::Datatype_union*
class CORDL_TYPE Datatype_union : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Xml::Schema::Datatype_anySimpleType)]{};

/// @brief Field types offset 0x38
 __declspec(property(get=__get_types, put=__set_types)) ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*,::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>  types;

static inline void setStaticF_atomicValueType(::System::Type*  value) ;

static inline ::System::Type* getStaticF_atomicValueType() ;

static inline void setStaticF_listValueType(::System::Type*  value) ;

static inline ::System::Type* getStaticF_listValueType() ;

constexpr void __set_types(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*,::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>  value) ;

constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*,::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>& __get_types() ;

constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*,::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> const& __get_types() const;

/// @brief Method HasAtomicMembers addr 0x28b7404 size 0x80 virtual false final false
inline bool HasAtomicMembers() ;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_union", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_union(Datatype_union && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_union", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_union(Datatype_union const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Datatype_union()  = default;
public:


// Fields

// Static field atomicValueType

// Static field listValueType


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_union, 0x40>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_union);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_union*, "System.Xml.Schema", "Datatype_union");
