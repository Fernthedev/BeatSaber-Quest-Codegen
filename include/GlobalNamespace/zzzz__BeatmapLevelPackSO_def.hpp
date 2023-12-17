#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPackSO)
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPackSO);
// Type: ::BeatmapLevelPackSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4356))
// CS Name: ::BeatmapLevelPackSO*
class CORDL_TYPE BeatmapLevelPackSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _packID offset 0x18
 __declspec(property(get=__get__packID, put=__set__packID)) ::StringW  _packID;

/// @brief Field _packName offset 0x20
 __declspec(property(get=__get__packName, put=__set__packName)) ::StringW  _packName;

/// @brief Field _shortPackName offset 0x28
 __declspec(property(get=__get__shortPackName, put=__set__shortPackName)) ::StringW  _shortPackName;

/// @brief Field _coverImage offset 0x30
 __declspec(property(get=__get__coverImage, put=__set__coverImage)) ::UnityEngine::Sprite*  _coverImage;

/// @brief Field _smallCoverImage offset 0x38
 __declspec(property(get=__get__smallCoverImage, put=__set__smallCoverImage)) ::UnityEngine::Sprite*  _smallCoverImage;

/// @brief Field _contentRating offset 0x40
 __declspec(property(get=__get__contentRating, put=__set__contentRating)) ::GlobalNamespace::PlayerSensitivityFlag  _contentRating;

/// @brief Field _beatmapLevelCollection offset 0x48
 __declspec(property(get=__get__beatmapLevelCollection, put=__set__beatmapLevelCollection)) ::GlobalNamespace::BeatmapLevelCollectionSO*  _beatmapLevelCollection;

 __declspec(property(get=get_packID)) ::StringW  packID;

 __declspec(property(get=get_packName)) ::StringW  packName;

 __declspec(property(get=get_shortPackName)) ::StringW  shortPackName;

 __declspec(property(get=get_collectionName)) ::StringW  collectionName;

 __declspec(property(get=get_coverImage)) ::UnityEngine::Sprite*  coverImage;

 __declspec(property(get=get_smallCoverImage)) ::UnityEngine::Sprite*  smallCoverImage;

 __declspec(property(get=get_beatmapLevelCollection)) ::GlobalNamespace::IBeatmapLevelCollection*  beatmapLevelCollection;

 __declspec(property(get=get_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag  contentRating;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelPack"
constexpr operator  ::GlobalNamespace::IBeatmapLevelPack*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IAnnotatedBeatmapLevelCollection"
constexpr operator  ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*() noexcept;

constexpr void __set__packID(::StringW  value) ;

constexpr ::StringW& __get__packID() ;

constexpr ::StringW const& __get__packID() const;

constexpr void __set__packName(::StringW  value) ;

constexpr ::StringW& __get__packName() ;

constexpr ::StringW const& __get__packName() const;

constexpr void __set__shortPackName(::StringW  value) ;

constexpr ::StringW& __get__shortPackName() ;

constexpr ::StringW const& __get__shortPackName() const;

constexpr void __set__coverImage(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__coverImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__coverImage() const;

constexpr void __set__smallCoverImage(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__smallCoverImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__smallCoverImage() const;

constexpr void __set__contentRating(::GlobalNamespace::PlayerSensitivityFlag  value) ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__contentRating() ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__contentRating() const;

constexpr void __set__beatmapLevelCollection(::GlobalNamespace::BeatmapLevelCollectionSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelCollectionSO* __get__beatmapLevelCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelCollectionSO*> __get__beatmapLevelCollection() const;

/// @brief Method get_packID addr 0x234270c size 0x8 virtual true final true
inline ::StringW get_packID() ;

/// @brief Method get_packName addr 0x2342714 size 0x8 virtual true final true
inline ::StringW get_packName() ;

/// @brief Method get_shortPackName addr 0x234271c size 0x8 virtual true final true
inline ::StringW get_shortPackName() ;

/// @brief Method get_collectionName addr 0x2342724 size 0x8 virtual true final true
inline ::StringW get_collectionName() ;

/// @brief Method get_coverImage addr 0x234272c size 0x8 virtual true final true
inline ::UnityEngine::Sprite* get_coverImage() ;

/// @brief Method get_smallCoverImage addr 0x2342734 size 0x8 virtual true final true
inline ::UnityEngine::Sprite* get_smallCoverImage() ;

/// @brief Method get_beatmapLevelCollection addr 0x234273c size 0x8 virtual true final true
inline ::GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection() ;

/// @brief Method get_contentRating addr 0x2342744 size 0x8 virtual true final true
inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating() ;

static inline ::GlobalNamespace::BeatmapLevelPackSO* New_ctor() ;

/// @brief Method .ctor addr 0x234274c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLevelPackSO(BeatmapLevelPackSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLevelPackSO(BeatmapLevelPackSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapLevelPackSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPackSO, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackSO*, "", "BeatmapLevelPackSO");
