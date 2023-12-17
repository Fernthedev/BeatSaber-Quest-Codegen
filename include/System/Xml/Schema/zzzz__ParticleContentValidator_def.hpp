#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleContentValidator)
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Collections {
class Stack;
}
namespace System {
class Object;
}
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Forward declare root types
namespace System::Xml::Schema {
class ParticleContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ParticleContentValidator);
// Type: System.Xml.Schema::ParticleContentValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11611))
// CS Name: ::System.Xml.Schema::ParticleContentValidator*
class CORDL_TYPE ParticleContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Xml::Schema::ContentValidator)]{};

/// @brief Field symbols offset 0x18
 __declspec(property(get=__get_symbols, put=__set_symbols)) ::System::Xml::Schema::SymbolsDictionary*  symbols;

/// @brief Field positions offset 0x20
 __declspec(property(get=__get_positions, put=__set_positions)) ::System::Xml::Schema::Positions*  positions;

/// @brief Field stack offset 0x28
 __declspec(property(get=__get_stack, put=__set_stack)) ::System::Collections::Stack*  stack;

/// @brief Field contentNode offset 0x30
 __declspec(property(get=__get_contentNode, put=__set_contentNode)) ::System::Xml::Schema::SyntaxTreeNode*  contentNode;

/// @brief Field isPartial offset 0x38
 __declspec(property(get=__get_isPartial, put=__set_isPartial)) bool  isPartial;

/// @brief Field minMaxNodesCount offset 0x3c
 __declspec(property(get=__get_minMaxNodesCount, put=__set_minMaxNodesCount)) int32_t  minMaxNodesCount;

/// @brief Field enableUpaCheck offset 0x40
 __declspec(property(get=__get_enableUpaCheck, put=__set_enableUpaCheck)) bool  enableUpaCheck;

constexpr void __set_symbols(::System::Xml::Schema::SymbolsDictionary*  value) ;

constexpr ::System::Xml::Schema::SymbolsDictionary* __get_symbols() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SymbolsDictionary*> __get_symbols() const;

constexpr void __set_positions(::System::Xml::Schema::Positions*  value) ;

constexpr ::System::Xml::Schema::Positions* __get_positions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Positions*> __get_positions() const;

constexpr void __set_stack(::System::Collections::Stack*  value) ;

constexpr ::System::Collections::Stack* __get_stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> __get_stack() const;

constexpr void __set_contentNode(::System::Xml::Schema::SyntaxTreeNode*  value) ;

constexpr ::System::Xml::Schema::SyntaxTreeNode* __get_contentNode() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SyntaxTreeNode*> __get_contentNode() const;

constexpr void __set_isPartial(bool  value) ;

constexpr bool& __get_isPartial() ;

constexpr bool const& __get_isPartial() const;

constexpr void __set_minMaxNodesCount(int32_t  value) ;

constexpr int32_t& __get_minMaxNodesCount() ;

constexpr int32_t const& __get_minMaxNodesCount() const;

constexpr void __set_enableUpaCheck(bool  value) ;

constexpr bool& __get_enableUpaCheck() ;

constexpr bool const& __get_enableUpaCheck() const;

static inline ::System::Xml::Schema::ParticleContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType  contentType) ;

/// @brief Method .ctor addr 0x28aeebc size 0x8 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaContentType  contentType) ;

static inline ::System::Xml::Schema::ParticleContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType  contentType, bool  enableUpaCheck) ;

/// @brief Method .ctor addr 0x28aeec4 size 0x7c virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaContentType  contentType, bool  enableUpaCheck) ;

/// @brief Method Start addr 0x28aef40 size 0xb8 virtual false final false
inline void Start() ;

/// @brief Method OpenGroup addr 0x28aeff8 size 0x28 virtual false final false
inline void OpenGroup() ;

/// @brief Method CloseGroup addr 0x28af020 size 0x150 virtual false final false
inline void CloseGroup() ;

/// @brief Method Exists addr 0x28af170 size 0x38 virtual false final false
inline bool Exists(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method AddName addr 0x28af1a8 size 0xac virtual false final false
inline void AddName(::System::Xml::XmlQualifiedName*  name, ::System::Object*  particle) ;

/// @brief Method AddNamespaceList addr 0x28af330 size 0x90 virtual false final false
inline void AddNamespaceList(::System::Xml::Schema::NamespaceList*  namespaceList, ::System::Object*  particle) ;

/// @brief Method AddLeafNode addr 0x28af254 size 0xdc virtual false final false
inline void AddLeafNode(::System::Xml::Schema::SyntaxTreeNode*  node) ;

/// @brief Method AddChoice addr 0x28af3c0 size 0xe0 virtual false final false
inline void AddChoice() ;

/// @brief Method AddSequence addr 0x28af4a0 size 0xe0 virtual false final false
inline void AddSequence() ;

/// @brief Method AddStar addr 0x28af580 size 0x64 virtual false final false
inline void AddStar() ;

/// @brief Method AddPlus addr 0x28af734 size 0x64 virtual false final false
inline void AddPlus() ;

/// @brief Method AddQMark addr 0x28af798 size 0x64 virtual false final false
inline void AddQMark() ;

/// @brief Method Closure addr 0x28af5e4 size 0x150 virtual false final false
inline void Closure(::System::Xml::Schema::InteriorNode*  node) ;

/// @brief Method Finish addr 0x28af7fc size 0x568 virtual false final false
inline ::System::Xml::Schema::ContentValidator* Finish(bool  useDFA) ;

/// @brief Method CalculateTotalFollowposForRangeNodes addr 0x28afd64 size 0x2e4 virtual false final false
inline ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*> CalculateTotalFollowposForRangeNodes(::System::Xml::Schema::BitSet*  firstpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos, ByRef<::System::Xml::Schema::BitSet*>  posWithRangeTerminals) ;

/// @brief Method CheckCMUPAWithLeafRangeNodes addr 0x28b01b8 size 0x178 virtual false final false
inline void CheckCMUPAWithLeafRangeNodes(::System::Xml::Schema::BitSet*  curpos) ;

/// @brief Method GetApplicableMinMaxFollowPos addr 0x28b0048 size 0x170 virtual false final false
inline ::System::Xml::Schema::BitSet* GetApplicableMinMaxFollowPos(::System::Xml::Schema::BitSet*  curpos, ::System::Xml::Schema::BitSet*  posWithRangeTerminals, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  minmaxFollowPos) ;

/// @brief Method CheckUniqueParticleAttribution addr 0x28b03f0 size 0x88 virtual false final false
inline void CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet*  firstpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos) ;

/// @brief Method CheckUniqueParticleAttribution addr 0x28b0b6c size 0x1bc virtual false final false
inline void CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet*  curpos) ;

/// @brief Method BuildTransitionTable addr 0x28b0478 size 0x598 virtual false final false
inline ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*> BuildTransitionTable(::System::Xml::Schema::BitSet*  firstpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos, int32_t  endMarkerPos) ;

// Ctor Parameters [CppParam { name: "", ty: "ParticleContentValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleContentValidator(ParticleContentValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleContentValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleContentValidator(ParticleContentValidator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParticleContentValidator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ParticleContentValidator, 0x48>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ParticleContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ParticleContentValidator*, "System.Xml.Schema", "ParticleContentValidator");
