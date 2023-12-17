#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DomNameTable)
namespace System::Xml {
class XmlName;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
// Forward declare root types
namespace System::Xml {
class DomNameTable;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::DomNameTable);
// Type: System.Xml::DomNameTable
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11496))
// CS Name: ::System.Xml::DomNameTable*
class CORDL_TYPE DomNameTable : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field entries offset 0x10
 __declspec(property(get=__get_entries, put=__set_entries)) ::ArrayW<::System::Xml::XmlName*,::Array<::System::Xml::XmlName*>*>  entries;

/// @brief Field count offset 0x18
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field mask offset 0x1c
 __declspec(property(get=__get_mask, put=__set_mask)) int32_t  mask;

/// @brief Field ownerDocument offset 0x20
 __declspec(property(get=__get_ownerDocument, put=__set_ownerDocument)) ::System::Xml::XmlDocument*  ownerDocument;

/// @brief Field nameTable offset 0x28
 __declspec(property(get=__get_nameTable, put=__set_nameTable)) ::System::Xml::XmlNameTable*  nameTable;

constexpr void __set_entries(::ArrayW<::System::Xml::XmlName*,::Array<::System::Xml::XmlName*>*>  value) ;

constexpr ::ArrayW<::System::Xml::XmlName*,::Array<::System::Xml::XmlName*>*>& __get_entries() ;

constexpr ::ArrayW<::System::Xml::XmlName*,::Array<::System::Xml::XmlName*>*> const& __get_entries() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_mask(int32_t  value) ;

constexpr int32_t& __get_mask() ;

constexpr int32_t const& __get_mask() const;

constexpr void __set_ownerDocument(::System::Xml::XmlDocument*  value) ;

constexpr ::System::Xml::XmlDocument* __get_ownerDocument() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> __get_ownerDocument() const;

constexpr void __set_nameTable(::System::Xml::XmlNameTable*  value) ;

constexpr ::System::Xml::XmlNameTable* __get_nameTable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> __get_nameTable() const;

static inline ::System::Xml::DomNameTable* New_ctor(::System::Xml::XmlDocument*  document) ;

/// @brief Method .ctor addr 0x2881420 size 0x84 virtual false final false
inline void _ctor(::System::Xml::XmlDocument*  document) ;

/// @brief Method GetName addr 0x28814c0 size 0x15c virtual false final false
inline ::System::Xml::XmlName* GetName(::StringW  prefix, ::StringW  localName, ::StringW  ns, ::System::Xml::Schema::IXmlSchemaInfo*  schemaInfo) ;

/// @brief Method AddName addr 0x288161c size 0x264 virtual false final false
inline ::System::Xml::XmlName* AddName(::StringW  prefix, ::StringW  localName, ::StringW  ns, ::System::Xml::Schema::IXmlSchemaInfo*  schemaInfo) ;

/// @brief Method Grow addr 0x2881880 size 0x124 virtual false final false
inline void Grow() ;

// Ctor Parameters [CppParam { name: "", ty: "DomNameTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DomNameTable(DomNameTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DomNameTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DomNameTable(DomNameTable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DomNameTable()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::DomNameTable, 0x30>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::DomNameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DomNameTable*, "System.Xml", "DomNameTable");
