#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomBeatmapLevelPack)
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class CustomBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBeatmapLevelPack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomBeatmapLevelPack);
// Type: ::CustomBeatmapLevelPack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4376))
// CS Name: ::CustomBeatmapLevelPack*
class CORDL_TYPE CustomBeatmapLevelPack : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field <packID>k__BackingField offset 0x10
 __declspec(property(get=__get__packID_k__BackingField, put=__set__packID_k__BackingField)) ::StringW  _packID_k__BackingField;

/// @brief Field <packName>k__BackingField offset 0x18
 __declspec(property(get=__get__packName_k__BackingField, put=__set__packName_k__BackingField)) ::StringW  _packName_k__BackingField;

/// @brief Field <shortPackName>k__BackingField offset 0x20
 __declspec(property(get=__get__shortPackName_k__BackingField, put=__set__shortPackName_k__BackingField)) ::StringW  _shortPackName_k__BackingField;

/// @brief Field <coverImage>k__BackingField offset 0x28
 __declspec(property(get=__get__coverImage_k__BackingField, put=__set__coverImage_k__BackingField)) ::UnityEngine::Sprite*  _coverImage_k__BackingField;

/// @brief Field <smallCoverImage>k__BackingField offset 0x30
 __declspec(property(get=__get__smallCoverImage_k__BackingField, put=__set__smallCoverImage_k__BackingField)) ::UnityEngine::Sprite*  _smallCoverImage_k__BackingField;

/// @brief Field <beatmapLevelCollection>k__BackingField offset 0x38
 __declspec(property(get=__get__beatmapLevelCollection_k__BackingField, put=__set__beatmapLevelCollection_k__BackingField)) ::GlobalNamespace::IBeatmapLevelCollection*  _beatmapLevelCollection_k__BackingField;

/// @brief Field <contentRating>k__BackingField offset 0x40
 __declspec(property(get=__get__contentRating_k__BackingField, put=__set__contentRating_k__BackingField)) ::GlobalNamespace::PlayerSensitivityFlag  _contentRating_k__BackingField;

 __declspec(property(get=get_packID)) ::StringW  packID;

 __declspec(property(get=get_packName)) ::StringW  packName;

 __declspec(property(get=get_shortPackName)) ::StringW  shortPackName;

 __declspec(property(get=get_collectionName)) ::StringW  collectionName;

 __declspec(property(get=get_coverImage)) ::UnityEngine::Sprite*  coverImage;

 __declspec(property(get=get_smallCoverImage)) ::UnityEngine::Sprite*  smallCoverImage;

 __declspec(property(get=get_beatmapLevelCollection)) ::GlobalNamespace::IBeatmapLevelCollection*  beatmapLevelCollection;

 __declspec(property(get=get_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag  contentRating;

 __declspec(property(get=get_isPackAlwaysOwned)) bool  isPackAlwaysOwned;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelPack"
constexpr operator  ::GlobalNamespace::IBeatmapLevelPack*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IAnnotatedBeatmapLevelCollection"
constexpr operator  ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*() noexcept;

constexpr void __set__packID_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__packID_k__BackingField() ;

constexpr ::StringW const& __get__packID_k__BackingField() const;

constexpr void __set__packName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__packName_k__BackingField() ;

constexpr ::StringW const& __get__packName_k__BackingField() const;

constexpr void __set__shortPackName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__shortPackName_k__BackingField() ;

constexpr ::StringW const& __get__shortPackName_k__BackingField() const;

constexpr void __set__coverImage_k__BackingField(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__coverImage_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__coverImage_k__BackingField() const;

constexpr void __set__smallCoverImage_k__BackingField(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__smallCoverImage_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__smallCoverImage_k__BackingField() const;

constexpr void __set__beatmapLevelCollection_k__BackingField(::GlobalNamespace::IBeatmapLevelCollection*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevelCollection* __get__beatmapLevelCollection_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelCollection*> __get__beatmapLevelCollection_k__BackingField() const;

constexpr void __set__contentRating_k__BackingField(::GlobalNamespace::PlayerSensitivityFlag  value) ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__contentRating_k__BackingField() ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__contentRating_k__BackingField() const;

/// @brief Method get_packID addr 0x23469d0 size 0x8 virtual true final true
inline ::StringW get_packID() ;

/// @brief Method get_packName addr 0x23469d8 size 0x8 virtual true final true
inline ::StringW get_packName() ;

/// @brief Method get_shortPackName addr 0x23469e0 size 0x8 virtual true final true
inline ::StringW get_shortPackName() ;

/// @brief Method get_collectionName addr 0x23469e8 size 0x8 virtual true final true
inline ::StringW get_collectionName() ;

/// @brief Method get_coverImage addr 0x23469f0 size 0x8 virtual true final true
inline ::UnityEngine::Sprite* get_coverImage() ;

/// @brief Method get_smallCoverImage addr 0x23469f8 size 0x8 virtual true final true
inline ::UnityEngine::Sprite* get_smallCoverImage() ;

/// @brief Method get_beatmapLevelCollection addr 0x2346a00 size 0x8 virtual true final true
inline ::GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection() ;

/// @brief Method get_contentRating addr 0x2346a08 size 0x8 virtual true final true
inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating() ;

/// @brief Method get_isPackAlwaysOwned addr 0x2346a10 size 0x8 virtual false final false
inline bool get_isPackAlwaysOwned() ;

static inline ::GlobalNamespace::CustomBeatmapLevelPack* New_ctor(::StringW  packID, ::StringW  packName, ::StringW  shortPackName, ::UnityEngine::Sprite*  coverImage, ::UnityEngine::Sprite*  smallCoverImage, ::GlobalNamespace::CustomBeatmapLevelCollection*  beatmapLevelCollection, ::GlobalNamespace::PlayerSensitivityFlag  contentRating) ;

/// @brief Method .ctor addr 0x2346a18 size 0x64 virtual false final false
inline void _ctor(::StringW  packID, ::StringW  packName, ::StringW  shortPackName, ::UnityEngine::Sprite*  coverImage, ::UnityEngine::Sprite*  smallCoverImage, ::GlobalNamespace::CustomBeatmapLevelCollection*  beatmapLevelCollection, ::GlobalNamespace::PlayerSensitivityFlag  contentRating) ;

// Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevelPack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomBeatmapLevelPack(CustomBeatmapLevelPack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevelPack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomBeatmapLevelPack(CustomBeatmapLevelPack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomBeatmapLevelPack()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomBeatmapLevelPack, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomBeatmapLevelPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomBeatmapLevelPack*, "", "CustomBeatmapLevelPack");
