#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorSceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEditorSceneSetupData);
// Type: ::BeatmapEditorSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6047))
// CS Name: ::BeatmapEditorSceneSetupData*
class CORDL_TYPE BeatmapEditorSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::SceneSetupData)]{};

/// @brief Field _levelDirPath offset 0x10
 __declspec(property(get=__get__levelDirPath, put=__set__levelDirPath)) ::StringW  _levelDirPath;

/// @brief Field _levelAssetPath offset 0x18
 __declspec(property(get=__get__levelAssetPath, put=__set__levelAssetPath)) ::StringW  _levelAssetPath;

 __declspec(property(get=get_levelDirPath)) ::StringW  levelDirPath;

 __declspec(property(get=get_levelAssetPath)) ::StringW  levelAssetPath;

constexpr void __set__levelDirPath(::StringW  value) ;

constexpr ::StringW& __get__levelDirPath() ;

constexpr ::StringW const& __get__levelDirPath() const;

constexpr void __set__levelAssetPath(::StringW  value) ;

constexpr ::StringW& __get__levelAssetPath() ;

constexpr ::StringW const& __get__levelAssetPath() const;

/// @brief Method get_levelDirPath addr 0x231c394 size 0x8 virtual false final false
inline ::StringW get_levelDirPath() ;

/// @brief Method get_levelAssetPath addr 0x231c39c size 0x8 virtual false final false
inline ::StringW get_levelAssetPath() ;

static inline ::GlobalNamespace::BeatmapEditorSceneSetupData* New_ctor(::StringW  levelDirPath, ::StringW  levelAssetPath) ;

/// @brief Method .ctor addr 0x231c3a4 size 0x2c virtual false final false
inline void _ctor(::StringW  levelDirPath, ::StringW  levelAssetPath) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorSceneSetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapEditorSceneSetupData(BeatmapEditorSceneSetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorSceneSetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapEditorSceneSetupData(BeatmapEditorSceneSetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapEditorSceneSetupData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorSceneSetupData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEditorSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorSceneSetupData*, "", "BeatmapEditorSceneSetupData");
