#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HtmlTernaryTree)
// Forward declare root types
namespace System::Xml {
class HtmlTernaryTree;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::HtmlTernaryTree);
// Type: System.Xml::HtmlTernaryTree
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11418))
// CS Name: ::System.Xml::HtmlTernaryTree*
class CORDL_TYPE HtmlTernaryTree : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_htmlElements(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_htmlElements() ;

static inline void setStaticF_htmlAttributes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_htmlAttributes() ;

// Ctor Parameters [CppParam { name: "", ty: "HtmlTernaryTree", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HtmlTernaryTree(HtmlTernaryTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HtmlTernaryTree", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HtmlTernaryTree(HtmlTernaryTree const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HtmlTernaryTree()  = default;
public:


// Fields

// Static field htmlElements

// Static field htmlAttributes


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlTernaryTree, 0x10>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::HtmlTernaryTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlTernaryTree*, "System.Xml", "HtmlTernaryTree");
