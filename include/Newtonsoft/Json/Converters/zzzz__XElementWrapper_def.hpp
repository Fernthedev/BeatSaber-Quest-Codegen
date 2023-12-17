#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XContainerWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XElementWrapper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml::Linq {
class XElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XElementWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XElementWrapper);
// Type: Newtonsoft.Json.Converters::XElementWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12064))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12067))
// CS Name: ::Newtonsoft.Json.Converters::XElementWrapper*
class CORDL_TYPE XElementWrapper : public ::Newtonsoft::Json::Converters::XContainerWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Newtonsoft::Json::Converters::XContainerWrapper)]{};

/// @brief Field _attributes offset 0x20
 __declspec(property(get=__get__attributes, put=__set__attributes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*  _attributes;

 __declspec(property(get=get_Element)) ::System::Xml::Linq::XElement*  Element;

 __declspec(property(get=get_Attributes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*  Attributes;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_NamespaceUri)) ::StringW  NamespaceUri;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlElement"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlElement*() noexcept;

/// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
constexpr operator  ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

constexpr void __set__attributes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* __get__attributes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*> __get__attributes() const;

/// @brief Method get_Element addr 0x26bcd2c size 0x78 virtual false final false
inline ::System::Xml::Linq::XElement* get_Element() ;

static inline ::Newtonsoft::Json::Converters::XElementWrapper* New_ctor(::System::Xml::Linq::XElement*  element) ;

/// @brief Method .ctor addr 0x26bbc90 size 0x4 virtual false final false
inline void _ctor(::System::Xml::Linq::XElement*  element) ;

/// @brief Method SetAttributeNode addr 0x26bcda4 size 0xa4 virtual true final true
inline void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode*  attribute) ;

/// @brief Method get_Attributes addr 0x26bce48 size 0x808 virtual true final false
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes() ;

/// @brief Method AppendChild addr 0x26bd690 size 0x18 virtual true final false
inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode*  newChild) ;

/// @brief Method get_Value addr 0x26bd6a8 size 0x1c virtual true final false
inline ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26bd6c4 size 0x24 virtual true final false
inline void set_Value(::StringW  value) ;

/// @brief Method get_LocalName addr 0x26bd6e8 size 0x24 virtual true final false
inline ::StringW get_LocalName() ;

/// @brief Method get_NamespaceUri addr 0x26bd70c size 0x24 virtual true final false
inline ::StringW get_NamespaceUri() ;

/// @brief Method GetPrefixOfNamespace addr 0x26bd650 size 0x40 virtual true final true
inline ::StringW GetPrefixOfNamespace(::StringW  namespaceUri) ;

/// @brief Method get_IsEmpty addr 0x26bd730 size 0x1c virtual true final true
inline bool get_IsEmpty() ;

// Ctor Parameters [CppParam { name: "", ty: "XElementWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XElementWrapper(XElementWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XElementWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XElementWrapper(XElementWrapper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XElementWrapper()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XElementWrapper, 0x28>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XElementWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XElementWrapper*, "Newtonsoft.Json.Converters", "XElementWrapper");
