#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlProcessingInstruction)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml {
class XmlProcessingInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlProcessingInstruction);
// Type: System.Xml::XmlProcessingInstruction
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11513))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11525))
// CS Name: ::System.Xml::XmlProcessingInstruction*
class CORDL_TYPE XmlProcessingInstruction : public ::System::Xml::XmlLinkedNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Xml::XmlLinkedNode)]{};

/// @brief Field target offset 0x20
 __declspec(property(get=__get_target, put=__set_target)) ::StringW  target;

/// @brief Field data offset 0x28
 __declspec(property(get=__get_data, put=__set_data)) ::StringW  data;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

 __declspec(property(put=set_Data)) ::StringW  Data;

 __declspec(property(get=get_InnerText, put=set_InnerText)) ::StringW  InnerText;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

constexpr void __set_target(::StringW  value) ;

constexpr ::StringW& __get_target() ;

constexpr ::StringW const& __get_target() const;

constexpr void __set_data(::StringW  value) ;

constexpr ::StringW& __get_data() ;

constexpr ::StringW const& __get_data() const;

static inline ::System::Xml::XmlProcessingInstruction* New_ctor(::StringW  target, ::StringW  data, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method .ctor addr 0x288cf64 size 0x30 virtual false final false
inline void _ctor(::StringW  target, ::StringW  data, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method get_Name addr 0x2891a60 size 0x54 virtual true final false
inline ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x2891ab4 size 0xc virtual true final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Value addr 0x2891ac0 size 0x8 virtual true final false
inline ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2891ac8 size 0x4 virtual true final false
inline void set_Value(::StringW  value) ;

/// @brief Method set_Data addr 0x2891acc size 0xa0 virtual false final false
inline void set_Data(::StringW  value) ;

/// @brief Method get_InnerText addr 0x2891b6c size 0x8 virtual true final false
inline ::StringW get_InnerText() ;

/// @brief Method set_InnerText addr 0x2891b74 size 0x4 virtual true final false
inline void set_InnerText(::StringW  value) ;

/// @brief Method get_NodeType addr 0x2891b78 size 0x8 virtual true final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method CloneNode addr 0x2891b80 size 0x38 virtual true final false
inline ::System::Xml::XmlNode* CloneNode(bool  deep) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlProcessingInstruction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlProcessingInstruction(XmlProcessingInstruction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlProcessingInstruction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlProcessingInstruction(XmlProcessingInstruction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlProcessingInstruction()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlProcessingInstruction, 0x30>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlProcessingInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlProcessingInstruction*, "System.Xml", "XmlProcessingInstruction");
