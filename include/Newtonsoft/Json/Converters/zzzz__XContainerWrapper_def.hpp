#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
CORDL_MODULE_EXPORT(XContainerWrapper)
namespace System::Xml::Linq {
class XObject;
}
namespace System::Xml::Linq {
class XContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XContainerWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XContainerWrapper);
// Type: Newtonsoft.Json.Converters::XContainerWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12064))
// CS Name: ::Newtonsoft.Json.Converters::XContainerWrapper*
class CORDL_TYPE XContainerWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Newtonsoft::Json::Converters::XObjectWrapper)]{};

/// @brief Field _childNodes offset 0x18
 __declspec(property(get=__get__childNodes, put=__set__childNodes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*  _childNodes;

 __declspec(property(get=get_Container)) ::System::Xml::Linq::XContainer*  Container;

 __declspec(property(get=get_ChildNodes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*  ChildNodes;

 __declspec(property(get=get_ParentNode)) ::Newtonsoft::Json::Converters::IXmlNode*  ParentNode;

constexpr void __set__childNodes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* __get__childNodes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*> __get__childNodes() const;

/// @brief Method get_Container addr 0x26bc978 size 0x78 virtual false final false
inline ::System::Xml::Linq::XContainer* get_Container() ;

static inline ::Newtonsoft::Json::Converters::XContainerWrapper* New_ctor(::System::Xml::Linq::XContainer*  container) ;

/// @brief Method .ctor addr 0x26bb114 size 0x6c virtual false final false
inline void _ctor(::System::Xml::Linq::XContainer*  container) ;

/// @brief Method get_ChildNodes addr 0x26bb2e4 size 0x3b8 virtual true final false
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes() ;

/// @brief Method get_ParentNode addr 0x26bc9f0 size 0x44 virtual true final false
inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode() ;

/// @brief Method WrapNode addr 0x26bc2ac size 0x490 virtual false final false
static inline ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::Linq::XObject*  node) ;

/// @brief Method AppendChild addr 0x26bc074 size 0xd0 virtual true final false
inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode*  newChild) ;

// Ctor Parameters [CppParam { name: "", ty: "XContainerWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XContainerWrapper(XContainerWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XContainerWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XContainerWrapper(XContainerWrapper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XContainerWrapper()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XContainerWrapper, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XContainerWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XContainerWrapper*, "Newtonsoft.Json.Converters", "XContainerWrapper");
