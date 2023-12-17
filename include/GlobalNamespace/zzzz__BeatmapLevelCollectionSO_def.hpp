#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelCollectionSO)
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelCollectionSO);
// Type: ::BeatmapLevelCollectionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4346))
// CS Name: ::BeatmapLevelCollectionSO*
class CORDL_TYPE BeatmapLevelCollectionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _beatmapLevels offset 0x18
 __declspec(property(get=__get__beatmapLevels, put=__set__beatmapLevels)) ::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*>  _beatmapLevels;

 __declspec(property(get=get_beatmapLevels)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  beatmapLevels;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
constexpr operator  ::GlobalNamespace::IBeatmapLevelCollection*() noexcept;

constexpr void __set__beatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*>& __get__beatmapLevels() ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*> const& __get__beatmapLevels() const;

/// @brief Method get_beatmapLevels addr 0x2342000 size 0x8 virtual true final true
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels() ;

static inline ::GlobalNamespace::BeatmapLevelCollectionSO* New_ctor() ;

/// @brief Method .ctor addr 0x2342008 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollectionSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLevelCollectionSO(BeatmapLevelCollectionSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollectionSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLevelCollectionSO(BeatmapLevelCollectionSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapLevelCollectionSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelCollectionSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelCollectionSO*, "", "BeatmapLevelCollectionSO");
