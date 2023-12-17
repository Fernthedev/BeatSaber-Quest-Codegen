#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ElementWriter)
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml::Linq {
class XElement;
}
namespace System::Xml::Linq {
struct NamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Linq {
struct ElementWriter;
}
// Write type traits
MARK_VAL_T(::System::Xml::Linq::ElementWriter);
// Type: System.Xml.Linq::ElementWriter
namespace System::Xml::Linq {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15446))
// CS Name: ::System.Xml.Linq::ElementWriter
struct CORDL_TYPE ElementWriter : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _writer offset 0x0
 __declspec(property(get=__get__writer, put=__set__writer)) ::System::Xml::XmlWriter*  _writer;

/// @brief Field _resolver offset 0x8
 __declspec(property(get=__get__resolver, put=__set__resolver)) ::System::Xml::Linq::NamespaceResolver  _resolver;

constexpr void __set__writer(::System::Xml::XmlWriter*  value) ;

constexpr ::System::Xml::XmlWriter* __get__writer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWriter*> __get__writer() const;

constexpr void __set__resolver(::System::Xml::Linq::NamespaceResolver  value) ;

constexpr ::System::Xml::Linq::NamespaceResolver& __get__resolver() ;

constexpr ::System::Xml::Linq::NamespaceResolver const& __get__resolver() const;

/// @brief Method .ctor addr 0x285f02c size 0xc virtual false final false
inline void _ctor(::System::Xml::XmlWriter*  writer) ;

/// @brief Method WriteElement addr 0x285f038 size 0x1a8 virtual false final false
inline void WriteElement(::System::Xml::Linq::XElement*  e) ;

/// @brief Method GetPrefixOfNamespace addr 0x285fb70 size 0xfc virtual false final false
inline ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace*  ns, bool  allowDefaultNamespace) ;

/// @brief Method PushAncestors addr 0x285f890 size 0x128 virtual false final false
inline void PushAncestors(::System::Xml::Linq::XElement*  e) ;

/// @brief Method PushElement addr 0x285fe44 size 0xd4 virtual false final false
inline void PushElement(::System::Xml::Linq::XElement*  e) ;

/// @brief Method WriteEndElement addr 0x285fb18 size 0x2c virtual false final false
inline void WriteEndElement() ;

/// @brief Method WriteFullEndElement addr 0x285fb44 size 0x2c virtual false final false
inline void WriteFullEndElement() ;

/// @brief Method WriteStartElement addr 0x285f9b8 size 0x160 virtual false final false
inline void WriteStartElement(::System::Xml::Linq::XElement*  e) ;

// Ctor Parameters [CppParam { name: "_writer", ty: "::System::Xml::XmlWriter*", modifiers: "", def_value: None }, CppParam { name: "_resolver", ty: "::System::Xml::Linq::NamespaceResolver", modifiers: "", def_value: None }]
constexpr ElementWriter(::System::Xml::XmlWriter*  _writer, ::System::Xml::Linq::NamespaceResolver  _resolver) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ElementWriter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ElementWriter()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::ElementWriter, 0x20>, "Size mismatch!");

} // namespace end def System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::ElementWriter, "System.Xml.Linq", "ElementWriter");
