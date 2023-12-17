#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/XPath/zzzz__XPathItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAtomicValue)
namespace System {
class Object;
}
namespace System::Xml::Schema {
class __XmlAtomicValue__NamespacePrefixForQName;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System {
struct TypeCode;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
struct __XmlAtomicValue__Union;
}
namespace System {
struct DateTime;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlAtomicValue;
}
namespace System::Xml::Schema {
class __XmlAtomicValue__NamespacePrefixForQName;
}
namespace System::Xml::Schema {
struct __XmlAtomicValue__Union;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlAtomicValue);
MARK_REF_PTR_T(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName);
MARK_VAL_T(::System::Xml::Schema::__XmlAtomicValue__Union);
// Type: ::Union
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11711))
// CS Name: ::XmlAtomicValue::Union
struct CORDL_TYPE __XmlAtomicValue__Union : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field boolVal offset 0x0
 __declspec(property(get=__get_boolVal, put=__set_boolVal)) bool  boolVal;

/// @brief Field dblVal offset 0x0
 __declspec(property(get=__get_dblVal, put=__set_dblVal)) double_t  dblVal;

/// @brief Field i64Val offset 0x0
 __declspec(property(get=__get_i64Val, put=__set_i64Val)) int64_t  i64Val;

/// @brief Field i32Val offset 0x0
 __declspec(property(get=__get_i32Val, put=__set_i32Val)) int32_t  i32Val;

/// @brief Field dtVal offset 0x0
 __declspec(property(get=__get_dtVal, put=__set_dtVal)) ::System::DateTime  dtVal;

constexpr void __set_boolVal(bool  value) ;

constexpr bool& __get_boolVal() ;

constexpr bool const& __get_boolVal() const;

constexpr void __set_dblVal(double_t  value) ;

constexpr double_t& __get_dblVal() ;

constexpr double_t const& __get_dblVal() const;

constexpr void __set_i64Val(int64_t  value) ;

constexpr int64_t& __get_i64Val() ;

constexpr int64_t const& __get_i64Val() const;

constexpr void __set_i32Val(int32_t  value) ;

constexpr int32_t& __get_i32Val() ;

constexpr int32_t const& __get_i32Val() const;

constexpr void __set_dtVal(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_dtVal() ;

constexpr ::System::DateTime const& __get_dtVal() const;

// Ctor Parameters [CppParam { name: "boolVal", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "dblVal", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "i64Val", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "i32Val", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dtVal", ty: "::System::DateTime", modifiers: "", def_value: None }]
constexpr __XmlAtomicValue__Union(bool  boolVal, double_t  dblVal, int64_t  i64Val, int32_t  i32Val, ::System::DateTime  dtVal) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XmlAtomicValue__Union(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XmlAtomicValue__Union()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlAtomicValue__Union, 0x8>, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Type: ::NamespacePrefixForQName
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11712))
// CS Name: ::XmlAtomicValue::NamespacePrefixForQName*
class CORDL_TYPE __XmlAtomicValue__NamespacePrefixForQName : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field prefix offset 0x10
 __declspec(property(get=__get_prefix, put=__set_prefix)) ::StringW  prefix;

/// @brief Field ns offset 0x18
 __declspec(property(get=__get_ns, put=__set_ns)) ::StringW  ns;

/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr operator  ::System::Xml::IXmlNamespaceResolver*() noexcept;

constexpr void __set_prefix(::StringW  value) ;

constexpr ::StringW& __get_prefix() ;

constexpr ::StringW const& __get_prefix() const;

constexpr void __set_ns(::StringW  value) ;

constexpr ::StringW& __get_ns() ;

constexpr ::StringW const& __get_ns() const;

static inline ::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName* New_ctor(::StringW  prefix, ::StringW  ns) ;

/// @brief Method .ctor addr 0x28c63c8 size 0x2c virtual false final false
inline void _ctor(::StringW  prefix, ::StringW  ns) ;

/// @brief Method LookupNamespace addr 0x28c7064 size 0x34 virtual true final true
inline ::StringW LookupNamespace(::StringW  prefix) ;

/// @brief Method LookupPrefix addr 0x28c7098 size 0x2c virtual true final true
inline ::StringW LookupPrefix(::StringW  namespaceName) ;

// Ctor Parameters [CppParam { name: "", ty: "__XmlAtomicValue__NamespacePrefixForQName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__XmlAtomicValue__NamespacePrefixForQName(__XmlAtomicValue__NamespacePrefixForQName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__XmlAtomicValue__NamespacePrefixForQName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__XmlAtomicValue__NamespacePrefixForQName(__XmlAtomicValue__NamespacePrefixForQName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __XmlAtomicValue__NamespacePrefixForQName()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName, 0x20>, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::XmlAtomicValue
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11713))
// CS Name: ::System.Xml.Schema::XmlAtomicValue*
class CORDL_TYPE XmlAtomicValue : public ::System::Xml::XPath::XPathItem {
public:
// Declarations
using NamespacePrefixForQName = ::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName;

using Union = ::System::Xml::Schema::__XmlAtomicValue__Union;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Xml::XPath::XPathItem)]{};

/// @brief Field xmlType offset 0x10
 __declspec(property(get=__get_xmlType, put=__set_xmlType)) ::System::Xml::Schema::XmlSchemaType*  xmlType;

/// @brief Field objVal offset 0x18
 __declspec(property(get=__get_objVal, put=__set_objVal)) ::System::Object*  objVal;

/// @brief Field clrType offset 0x20
 __declspec(property(get=__get_clrType, put=__set_clrType)) ::System::TypeCode  clrType;

/// @brief Field unionVal offset 0x28
 __declspec(property(get=__get_unionVal, put=__set_unionVal)) ::System::Xml::Schema::__XmlAtomicValue__Union  unionVal;

/// @brief Field nsPrefix offset 0x30
 __declspec(property(get=__get_nsPrefix, put=__set_nsPrefix)) ::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName*  nsPrefix;

 __declspec(property(get=get_XmlType)) ::System::Xml::Schema::XmlSchemaType*  XmlType;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

 __declspec(property(get=get_TypedValue)) ::System::Object*  TypedValue;

 __declspec(property(get=get_ValueAsBoolean)) bool  ValueAsBoolean;

 __declspec(property(get=get_ValueAsDateTime)) ::System::DateTime  ValueAsDateTime;

 __declspec(property(get=get_ValueAsDouble)) double_t  ValueAsDouble;

 __declspec(property(get=get_ValueAsInt)) int32_t  ValueAsInt;

 __declspec(property(get=get_ValueAsLong)) int64_t  ValueAsLong;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

constexpr void __set_xmlType(::System::Xml::Schema::XmlSchemaType*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaType* __get_xmlType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> __get_xmlType() const;

constexpr void __set_objVal(::System::Object*  value) ;

constexpr ::System::Object* __get_objVal() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_objVal() const;

constexpr void __set_clrType(::System::TypeCode  value) ;

constexpr ::System::TypeCode& __get_clrType() ;

constexpr ::System::TypeCode const& __get_clrType() const;

constexpr void __set_unionVal(::System::Xml::Schema::__XmlAtomicValue__Union  value) ;

constexpr ::System::Xml::Schema::__XmlAtomicValue__Union& __get_unionVal() ;

constexpr ::System::Xml::Schema::__XmlAtomicValue__Union const& __get_unionVal() const;

constexpr void __set_nsPrefix(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName*  value) ;

constexpr ::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName* __get_nsPrefix() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName*> __get_nsPrefix() const;

static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, bool  value) ;

/// @brief Method .ctor addr 0x28c5d44 size 0x8c virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, bool  value) ;

static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::System::DateTime  value) ;

/// @brief Method .ctor addr 0x28c5dd0 size 0x88 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::System::DateTime  value) ;

static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, double_t  value) ;

/// @brief Method .ctor addr 0x28c5e58 size 0x90 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, double_t  value) ;

static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, int32_t  value) ;

/// @brief Method .ctor addr 0x28c5ee8 size 0x88 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, int32_t  value) ;

static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, int64_t  value) ;

/// @brief Method .ctor addr 0x28c5f70 size 0x88 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, int64_t  value) ;

static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::StringW  value) ;

/// @brief Method .ctor addr 0x28c5ff8 size 0xa4 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::StringW  value) ;

static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::StringW  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method .ctor addr 0x28c609c size 0x1ac virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::StringW  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::System::Object*  value) ;

/// @brief Method .ctor addr 0x28c63f4 size 0xa4 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::System::Object*  value) ;

static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method .ctor addr 0x28c6498 size 0x1f0 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  xmlType, ::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method System.ICloneable.Clone addr 0x28c6688 size 0x4 virtual true final true
inline ::System::Object* System_ICloneable_Clone() ;

/// @brief Method get_XmlType addr 0x28c668c size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlSchemaType* get_XmlType() ;

/// @brief Method get_ValueType addr 0x28c6694 size 0x28 virtual true final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_TypedValue addr 0x28c66bc size 0x1c4 virtual true final false
inline ::System::Object* get_TypedValue() ;

/// @brief Method get_ValueAsBoolean addr 0x28c68f8 size 0xcc virtual true final false
inline bool get_ValueAsBoolean() ;

/// @brief Method get_ValueAsDateTime addr 0x28c69c4 size 0xe0 virtual true final false
inline ::System::DateTime get_ValueAsDateTime() ;

/// @brief Method get_ValueAsDouble addr 0x28c6aa4 size 0xdc virtual true final false
inline double_t get_ValueAsDouble() ;

/// @brief Method get_ValueAsInt addr 0x28c6b80 size 0xd4 virtual true final false
inline int32_t get_ValueAsInt() ;

/// @brief Method get_ValueAsLong addr 0x28c6c54 size 0xe0 virtual true final false
inline int64_t get_ValueAsLong() ;

/// @brief Method ValueAs addr 0x28c6d34 size 0x230 virtual true final false
inline ::System::Object* ValueAs(::System::Type*  type, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method get_Value addr 0x28c6f64 size 0xf4 virtual true final false
inline ::StringW get_Value() ;

/// @brief Method ToString addr 0x28c7058 size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetPrefixFromQName addr 0x28c62fc size 0xcc virtual false final false
inline ::StringW GetPrefixFromQName(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlAtomicValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlAtomicValue(XmlAtomicValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlAtomicValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlAtomicValue(XmlAtomicValue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlAtomicValue()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlAtomicValue, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlAtomicValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlAtomicValue*, "System.Xml.Schema", "XmlAtomicValue");
NEED_NO_BOX(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName*, "System.Xml.Schema", "XmlAtomicValue/NamespacePrefixForQName");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlAtomicValue__Union, "System.Xml.Schema", "XmlAtomicValue/Union");
