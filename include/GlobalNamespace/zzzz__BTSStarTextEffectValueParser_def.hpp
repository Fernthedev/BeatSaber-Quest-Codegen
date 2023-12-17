#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BTSStarTextEffectValueParser)
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEffectValueParser;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSStarTextEffectValueParser);
// Type: ::BTSStarTextEffectValueParser
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3982))
// CS Name: ::BTSStarTextEffectValueParser*
class CORDL_TYPE BTSStarTextEffectValueParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kTextMask offset 0x0
static constexpr int32_t  kTextMask{static_cast<int32_t>(0xff)};

/// @brief Field kTextBitOffset offset 0x0
static constexpr int32_t  kTextBitOffset{static_cast<int32_t>(0x0)};

/// @brief Field kPositionMask offset 0x0
static constexpr int32_t  kPositionMask{static_cast<int32_t>(0xff00)};

/// @brief Field kPositionBitOffset offset 0x0
static constexpr int32_t  kPositionBitOffset{static_cast<int32_t>(0x8)};

/// @brief Method GetTextId addr 0x221d7ac size 0x8 virtual false final false
static inline int32_t GetTextId(int32_t  value) ;

/// @brief Method GetPositionId addr 0x221d7b4 size 0x8 virtual false final false
static inline int32_t GetPositionId(int32_t  value) ;

/// @brief Method MergeValuesIntoOneInt addr 0x221d7bc size 0x8 virtual false final false
static inline int32_t MergeValuesIntoOneInt(int32_t  textId, int32_t  positionId) ;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectValueParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BTSStarTextEffectValueParser(BTSStarTextEffectValueParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectValueParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BTSStarTextEffectValueParser(BTSStarTextEffectValueParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BTSStarTextEffectValueParser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEffectValueParser, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEffectValueParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEffectValueParser*, "", "BTSStarTextEffectValueParser");
