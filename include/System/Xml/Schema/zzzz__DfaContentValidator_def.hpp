#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DfaContentValidator)
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Forward declare root types
namespace System::Xml::Schema {
class DfaContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DfaContentValidator);
// Type: System.Xml.Schema::DfaContentValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11612))
// CS Name: ::System.Xml.Schema::DfaContentValidator*
class CORDL_TYPE DfaContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Xml::Schema::ContentValidator)]{};

/// @brief Field transitionTable offset 0x18
 __declspec(property(get=__get_transitionTable, put=__set_transitionTable)) ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  transitionTable;

/// @brief Field symbols offset 0x20
 __declspec(property(get=__get_symbols, put=__set_symbols)) ::System::Xml::Schema::SymbolsDictionary*  symbols;

constexpr void __set_transitionTable(::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  value) ;

constexpr ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>& __get_transitionTable() ;

constexpr ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*> const& __get_transitionTable() const;

constexpr void __set_symbols(::System::Xml::Schema::SymbolsDictionary*  value) ;

constexpr ::System::Xml::Schema::SymbolsDictionary* __get_symbols() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SymbolsDictionary*> __get_symbols() const;

static inline ::System::Xml::Schema::DfaContentValidator* New_ctor(::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  transitionTable, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::XmlSchemaContentType  contentType, bool  isOpen, bool  isEmptiable) ;

/// @brief Method .ctor addr 0x28b0a10 size 0xa0 virtual false final false
inline void _ctor(::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  transitionTable, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::XmlSchemaContentType  contentType, bool  isOpen, bool  isEmptiable) ;

// Ctor Parameters [CppParam { name: "", ty: "DfaContentValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DfaContentValidator(DfaContentValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DfaContentValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DfaContentValidator(DfaContentValidator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DfaContentValidator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DfaContentValidator, 0x28>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DfaContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DfaContentValidator*, "System.Xml.Schema", "DfaContentValidator");
