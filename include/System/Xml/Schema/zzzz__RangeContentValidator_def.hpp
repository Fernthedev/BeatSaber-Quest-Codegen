#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RangeContentValidator)
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Forward declare root types
namespace System::Xml::Schema {
class RangeContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::RangeContentValidator);
// Type: System.Xml.Schema::RangeContentValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11614))
// CS Name: ::System.Xml.Schema::RangeContentValidator*
class CORDL_TYPE RangeContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Xml::Schema::ContentValidator)]{};

/// @brief Field firstpos offset 0x18
 __declspec(property(get=__get_firstpos, put=__set_firstpos)) ::System::Xml::Schema::BitSet*  firstpos;

/// @brief Field followpos offset 0x20
 __declspec(property(get=__get_followpos, put=__set_followpos)) ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos;

/// @brief Field positionsWithRangeTerminals offset 0x28
 __declspec(property(get=__get_positionsWithRangeTerminals, put=__set_positionsWithRangeTerminals)) ::System::Xml::Schema::BitSet*  positionsWithRangeTerminals;

/// @brief Field symbols offset 0x30
 __declspec(property(get=__get_symbols, put=__set_symbols)) ::System::Xml::Schema::SymbolsDictionary*  symbols;

/// @brief Field positions offset 0x38
 __declspec(property(get=__get_positions, put=__set_positions)) ::System::Xml::Schema::Positions*  positions;

/// @brief Field minMaxNodesCount offset 0x40
 __declspec(property(get=__get_minMaxNodesCount, put=__set_minMaxNodesCount)) int32_t  minMaxNodesCount;

/// @brief Field endMarkerPos offset 0x44
 __declspec(property(get=__get_endMarkerPos, put=__set_endMarkerPos)) int32_t  endMarkerPos;

constexpr void __set_firstpos(::System::Xml::Schema::BitSet*  value) ;

constexpr ::System::Xml::Schema::BitSet* __get_firstpos() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> __get_firstpos() const;

constexpr void __set_followpos(::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  value) ;

constexpr ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>& __get_followpos() ;

constexpr ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*> const& __get_followpos() const;

constexpr void __set_positionsWithRangeTerminals(::System::Xml::Schema::BitSet*  value) ;

constexpr ::System::Xml::Schema::BitSet* __get_positionsWithRangeTerminals() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> __get_positionsWithRangeTerminals() const;

constexpr void __set_symbols(::System::Xml::Schema::SymbolsDictionary*  value) ;

constexpr ::System::Xml::Schema::SymbolsDictionary* __get_symbols() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SymbolsDictionary*> __get_symbols() const;

constexpr void __set_positions(::System::Xml::Schema::Positions*  value) ;

constexpr ::System::Xml::Schema::Positions* __get_positions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Positions*> __get_positions() const;

constexpr void __set_minMaxNodesCount(int32_t  value) ;

constexpr int32_t& __get_minMaxNodesCount() ;

constexpr int32_t const& __get_minMaxNodesCount() const;

constexpr void __set_endMarkerPos(int32_t  value) ;

constexpr int32_t& __get_endMarkerPos() ;

constexpr int32_t const& __get_endMarkerPos() const;

static inline ::System::Xml::Schema::RangeContentValidator* New_ctor(::System::Xml::Schema::BitSet*  firstpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions, int32_t  endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType  contentType, bool  isEmptiable, ::System::Xml::Schema::BitSet*  positionsWithRangeTerminals, int32_t  minmaxNodesCount) ;

/// @brief Method .ctor addr 0x28b0330 size 0xc0 virtual false final false
inline void _ctor(::System::Xml::Schema::BitSet*  firstpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions, int32_t  endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType  contentType, bool  isEmptiable, ::System::Xml::Schema::BitSet*  positionsWithRangeTerminals, int32_t  minmaxNodesCount) ;

// Ctor Parameters [CppParam { name: "", ty: "RangeContentValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RangeContentValidator(RangeContentValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RangeContentValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RangeContentValidator(RangeContentValidator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RangeContentValidator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::RangeContentValidator, 0x48>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::RangeContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RangeContentValidator*, "System.Xml.Schema", "RangeContentValidator");
