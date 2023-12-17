#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNodeList_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlChildNodes)
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlChildNodes;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlChildNodes);
// Type: System.Xml::XmlChildNodes
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11523))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11502))
// CS Name: ::System.Xml::XmlChildNodes*
class CORDL_TYPE XmlChildNodes : public ::System::Xml::XmlNodeList {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Xml::XmlNodeList)]{};

/// @brief Field container offset 0x10
 __declspec(property(get=__get_container, put=__set_container)) ::System::Xml::XmlNode*  container;

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set_container(::System::Xml::XmlNode*  value) ;

constexpr ::System::Xml::XmlNode* __get_container() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> __get_container() const;

static inline ::System::Xml::XmlChildNodes* New_ctor(::System::Xml::XmlNode*  container) ;

/// @brief Method .ctor addr 0x2883ee0 size 0x28 virtual false final false
inline void _ctor(::System::Xml::XmlNode*  container) ;

/// @brief Method get_Count addr 0x2883f08 size 0x4c virtual true final false
inline int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x2883f54 size 0xb4 virtual true final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlChildNodes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlChildNodes(XmlChildNodes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlChildNodes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlChildNodes(XmlChildNodes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlChildNodes()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlChildNodes, 0x18>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlChildNodes);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlChildNodes*, "System.Xml", "XmlChildNodes");
