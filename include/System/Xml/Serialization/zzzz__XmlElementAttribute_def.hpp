#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlElementAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlElementAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlElementAttribute);
// Type: System.Xml.Serialization::XmlElementAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11587))
// CS Name: ::System.Xml.Serialization::XmlElementAttribute*
class CORDL_TYPE XmlElementAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Attribute)]{};

/// @brief Field elementName offset 0x10
 __declspec(property(get=__get_elementName, put=__set_elementName)) ::StringW  elementName;

/// @brief Field type offset 0x18
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

/// @brief Field order offset 0x20
 __declspec(property(get=__get_order, put=__set_order)) int32_t  order;

constexpr void __set_elementName(::StringW  value) ;

constexpr ::StringW& __get_elementName() ;

constexpr ::StringW const& __get_elementName() const;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

constexpr void __set_order(int32_t  value) ;

constexpr int32_t& __get_order() ;

constexpr int32_t const& __get_order() const;

static inline ::System::Xml::Serialization::XmlElementAttribute* New_ctor(::StringW  elementName, ::System::Type*  type) ;

/// @brief Method .ctor addr 0x28abef8 size 0x34 virtual false final false
inline void _ctor(::StringW  elementName, ::System::Type*  type) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlElementAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlElementAttribute(XmlElementAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlElementAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlElementAttribute(XmlElementAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlElementAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlElementAttribute, 0x28>, "Size mismatch!");

} // namespace end def System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlElementAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlElementAttribute*, "System.Xml.Serialization", "XmlElementAttribute");
