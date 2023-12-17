#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapDifficultySerializedMethods)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultySerializedMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDifficultySerializedMethods);
// Type: ::BeatmapDifficultySerializedMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14718))
// CS Name: ::BeatmapDifficultySerializedMethods*
class CORDL_TYPE BeatmapDifficultySerializedMethods : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kDifficultyEasySerializedName offset 0x0
static constexpr ::ConstString  kDifficultyEasySerializedName{u"Easy"};

/// @brief Field kDifficultyNormalSerializedName offset 0x0
static constexpr ::ConstString  kDifficultyNormalSerializedName{u"Normal"};

/// @brief Field kDifficultyHardSerializedName offset 0x0
static constexpr ::ConstString  kDifficultyHardSerializedName{u"Hard"};

/// @brief Field kDifficultyExpertSerializedName offset 0x0
static constexpr ::ConstString  kDifficultyExpertSerializedName{u"Expert"};

/// @brief Field kDifficultyExpertPlusNameSerializedLegacy offset 0x0
static constexpr ::ConstString  kDifficultyExpertPlusNameSerializedLegacy{u"Expert+"};

/// @brief Field kDifficultyExpertPlusSerializedName offset 0x0
static constexpr ::ConstString  kDifficultyExpertPlusSerializedName{u"ExpertPlus"};

/// @brief Field kDifficultyUnknownSerializedName offset 0x0
static constexpr ::ConstString  kDifficultyUnknownSerializedName{u"Unknown"};

/// @brief Method SerializedName addr 0xdfd5e8 size 0xa4 virtual false final false
static inline ::StringW SerializedName(::GlobalNamespace::BeatmapDifficulty  difficulty) ;

/// @brief Method BeatmapDifficultyFromSerializedName addr 0xdfd68c size 0x164 virtual false final false
static inline bool BeatmapDifficultyFromSerializedName(::StringW  name, ByRef<::GlobalNamespace::BeatmapDifficulty>  difficulty) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySerializedMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDifficultySerializedMethods(BeatmapDifficultySerializedMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySerializedMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDifficultySerializedMethods(BeatmapDifficultySerializedMethods const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDifficultySerializedMethods()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultySerializedMethods, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultySerializedMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultySerializedMethods*, "", "BeatmapDifficultySerializedMethods");
