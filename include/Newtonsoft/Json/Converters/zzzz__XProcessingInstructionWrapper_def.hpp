#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XProcessingInstructionWrapper)
namespace System::Xml::Linq {
class XProcessingInstruction;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XProcessingInstructionWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper);
// Type: Newtonsoft.Json.Converters::XProcessingInstructionWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12063))
// CS Name: ::Newtonsoft.Json.Converters::XProcessingInstructionWrapper*
class CORDL_TYPE XProcessingInstructionWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Newtonsoft::Json::Converters::XObjectWrapper)]{};

 __declspec(property(get=get_ProcessingInstruction)) ::System::Xml::Linq::XProcessingInstruction*  ProcessingInstruction;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Method get_ProcessingInstruction addr 0x26bc8a4 size 0x78 virtual false final false
inline ::System::Xml::Linq::XProcessingInstruction* get_ProcessingInstruction() ;

static inline ::Newtonsoft::Json::Converters::XProcessingInstructionWrapper* New_ctor(::System::Xml::Linq::XProcessingInstruction*  processingInstruction) ;

/// @brief Method .ctor addr 0x26bbb80 size 0x6c virtual false final false
inline void _ctor(::System::Xml::Linq::XProcessingInstruction*  processingInstruction) ;

/// @brief Method get_LocalName addr 0x26bc91c size 0x1c virtual true final false
inline ::StringW get_LocalName() ;

/// @brief Method get_Value addr 0x26bc938 size 0x1c virtual true final false
inline ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26bc954 size 0x24 virtual true final false
inline void set_Value(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "XProcessingInstructionWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XProcessingInstructionWrapper(XProcessingInstructionWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XProcessingInstructionWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XProcessingInstructionWrapper(XProcessingInstructionWrapper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XProcessingInstructionWrapper()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*, "Newtonsoft.Json.Converters", "XProcessingInstructionWrapper");
