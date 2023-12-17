#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlListConverter)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System::Collections {
class IList;
}
namespace System::Xml::Schema {
class XmlBaseConverter;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
class Type;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlListConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlListConverter);
// Type: System.Xml.Schema::XmlListConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11758))
// CS Name: ::System.Xml.Schema::XmlListConverter*
class CORDL_TYPE XmlListConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Xml::Schema::XmlBaseConverter)]{};

/// @brief Field atomicConverter offset 0x28
 __declspec(property(get=__get_atomicConverter, put=__set_atomicConverter)) ::System::Xml::Schema::XmlValueConverter*  atomicConverter;

constexpr void __set_atomicConverter(::System::Xml::Schema::XmlValueConverter*  value) ;

constexpr ::System::Xml::Schema::XmlValueConverter* __get_atomicConverter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlValueConverter*> __get_atomicConverter() const;

static inline ::System::Xml::Schema::XmlListConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter*  atomicConverter) ;

/// @brief Method .ctor addr 0x28e52f4 size 0x70 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlBaseConverter*  atomicConverter) ;

static inline ::System::Xml::Schema::XmlListConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter*  atomicConverter, ::System::Type*  clrTypeDefault) ;

/// @brief Method .ctor addr 0x28db338 size 0x78 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlBaseConverter*  atomicConverter, ::System::Type*  clrTypeDefault) ;

static inline ::System::Xml::Schema::XmlListConverter* New_ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method .ctor addr 0x28db238 size 0x68 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method Create addr 0x28e570c size 0x1ac virtual false final false
static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlValueConverter*  atomicConverter) ;

/// @brief Method ChangeType addr 0x28e58b8 size 0x108 virtual true final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeListType addr 0x28e0f44 size 0xdf8 virtual true final false
inline ::System::Object* ChangeListType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method IsListType addr 0x28e59c0 size 0x190 virtual false final false
inline bool IsListType(::System::Type*  type) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> ToArray(::System::Object*  list, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ToList addr 0x28e6218 size 0x644 virtual false final false
inline ::System::Collections::IList* ToList(::System::Object*  list, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method StringAsList addr 0x28e6168 size 0xb0 virtual false final false
inline ::System::Collections::Generic::List_1<::StringW>* StringAsList(::StringW  value) ;

/// @brief Method ListAsString addr 0x28e5dbc size 0x3ac virtual false final false
inline ::StringW ListAsString(::System::Collections::IEnumerable*  list, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method CreateInvalidClrMappingException addr 0x28e5b50 size 0x26c virtual false final false
inline ::System::Exception* CreateInvalidClrMappingException(::System::Type*  sourceType, ::System::Type*  destinationType) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlListConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlListConverter(XmlListConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlListConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlListConverter(XmlListConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlListConverter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlListConverter, 0x30>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlListConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlListConverter*, "System.Xml.Schema", "XmlListConverter");
