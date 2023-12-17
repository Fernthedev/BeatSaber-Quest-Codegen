#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapDataAssetsModel)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataAssetsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataAssetsModel);
// Type: ::BeatmapDataAssetsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4327))
// CS Name: ::BeatmapDataAssetsModel*
class CORDL_TYPE BeatmapDataAssetsModel : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method BeatmapLevelDataAssetNameForBeatmapLevel addr 0x233de8c size 0x4c virtual false final false
static inline ::StringW BeatmapLevelDataAssetNameForBeatmapLevel(::StringW  levelID) ;

/// @brief Method AssetBundleNameForBeatmapLevel addr 0x233ded8 size 0x14 virtual false final false
static inline ::StringW AssetBundleNameForBeatmapLevel(::StringW  levelID) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAssetsModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataAssetsModel(BeatmapDataAssetsModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAssetsModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataAssetsModel(BeatmapDataAssetsModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataAssetsModel()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataAssetsModel, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataAssetsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataAssetsModel*, "", "BeatmapDataAssetsModel");
