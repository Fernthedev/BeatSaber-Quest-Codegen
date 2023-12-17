#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSet)
namespace System::Xml {
class XmlNameTable;
}
namespace System::Collections {
class SortedList;
}
namespace System::Xml::Schema {
class ValidationEventArgs;
}
namespace System::Xml::Schema {
class XmlSchemaCompilationSettings;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System {
class Object;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSet);
// Type: System.Xml.Schema::XmlSchemaSet
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11736))
// CS Name: ::System.Xml.Schema::XmlSchemaSet*
class CORDL_TYPE XmlSchemaSet : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field nameTable offset 0x10
 __declspec(property(get=__get_nameTable, put=__set_nameTable)) ::System::Xml::XmlNameTable*  nameTable;

/// @brief Field schemas offset 0x18
 __declspec(property(get=__get_schemas, put=__set_schemas)) ::System::Collections::SortedList*  schemas;

/// @brief Field internalEventHandler offset 0x20
 __declspec(property(get=__get_internalEventHandler, put=__set_internalEventHandler)) ::System::Xml::Schema::ValidationEventHandler*  internalEventHandler;

/// @brief Field eventHandler offset 0x28
 __declspec(property(get=__get_eventHandler, put=__set_eventHandler)) ::System::Xml::Schema::ValidationEventHandler*  eventHandler;

/// @brief Field schemaLocations offset 0x30
 __declspec(property(get=__get_schemaLocations, put=__set_schemaLocations)) ::System::Collections::Hashtable*  schemaLocations;

/// @brief Field chameleonSchemas offset 0x38
 __declspec(property(get=__get_chameleonSchemas, put=__set_chameleonSchemas)) ::System::Collections::Hashtable*  chameleonSchemas;

/// @brief Field targetNamespaces offset 0x40
 __declspec(property(get=__get_targetNamespaces, put=__set_targetNamespaces)) ::System::Collections::Hashtable*  targetNamespaces;

/// @brief Field compileAll offset 0x48
 __declspec(property(get=__get_compileAll, put=__set_compileAll)) bool  compileAll;

/// @brief Field cachedCompiledInfo offset 0x50
 __declspec(property(get=__get_cachedCompiledInfo, put=__set_cachedCompiledInfo)) ::System::Xml::Schema::SchemaInfo*  cachedCompiledInfo;

/// @brief Field readerSettings offset 0x58
 __declspec(property(get=__get_readerSettings, put=__set_readerSettings)) ::System::Xml::XmlReaderSettings*  readerSettings;

/// @brief Field compilationSettings offset 0x60
 __declspec(property(get=__get_compilationSettings, put=__set_compilationSettings)) ::System::Xml::Schema::XmlSchemaCompilationSettings*  compilationSettings;

constexpr void __set_nameTable(::System::Xml::XmlNameTable*  value) ;

constexpr ::System::Xml::XmlNameTable* __get_nameTable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> __get_nameTable() const;

constexpr void __set_schemas(::System::Collections::SortedList*  value) ;

constexpr ::System::Collections::SortedList* __get_schemas() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> __get_schemas() const;

constexpr void __set_internalEventHandler(::System::Xml::Schema::ValidationEventHandler*  value) ;

constexpr ::System::Xml::Schema::ValidationEventHandler* __get_internalEventHandler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> __get_internalEventHandler() const;

constexpr void __set_eventHandler(::System::Xml::Schema::ValidationEventHandler*  value) ;

constexpr ::System::Xml::Schema::ValidationEventHandler* __get_eventHandler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> __get_eventHandler() const;

constexpr void __set_schemaLocations(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_schemaLocations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_schemaLocations() const;

constexpr void __set_chameleonSchemas(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_chameleonSchemas() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_chameleonSchemas() const;

constexpr void __set_targetNamespaces(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_targetNamespaces() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_targetNamespaces() const;

constexpr void __set_compileAll(bool  value) ;

constexpr bool& __get_compileAll() ;

constexpr bool const& __get_compileAll() const;

constexpr void __set_cachedCompiledInfo(::System::Xml::Schema::SchemaInfo*  value) ;

constexpr ::System::Xml::Schema::SchemaInfo* __get_cachedCompiledInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> __get_cachedCompiledInfo() const;

constexpr void __set_readerSettings(::System::Xml::XmlReaderSettings*  value) ;

constexpr ::System::Xml::XmlReaderSettings* __get_readerSettings() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReaderSettings*> __get_readerSettings() const;

constexpr void __set_compilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings* __get_compilationSettings() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaCompilationSettings*> __get_compilationSettings() const;

static inline ::System::Xml::Schema::XmlSchemaSet* New_ctor() ;

/// @brief Method .ctor addr 0x28c8db0 size 0x64 virtual false final false
inline void _ctor() ;

static inline ::System::Xml::Schema::XmlSchemaSet* New_ctor(::System::Xml::XmlNameTable*  nameTable) ;

/// @brief Method .ctor addr 0x28c8e14 size 0x288 virtual false final false
inline void _ctor(::System::Xml::XmlNameTable*  nameTable) ;

/// @brief Method InternalValidationCallback addr 0x28c909c size 0x44 virtual false final false
inline void InternalValidationCallback(::System::Object*  sender, ::System::Xml::Schema::ValidationEventArgs*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaSet(XmlSchemaSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaSet(XmlSchemaSet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaSet()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSet, 0x68>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSet*, "System.Xml.Schema", "XmlSchemaSet");
