#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelCollection)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelCollection);
// Type: ::BeatmapLevelCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4345))
// CS Name: ::BeatmapLevelCollection*
class CORDL_TYPE BeatmapLevelCollection : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _levels offset 0x10
 __declspec(property(get=__get__levels, put=__set__levels)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  _levels;

 __declspec(property(get=get_beatmapLevels)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  beatmapLevels;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
constexpr operator  ::GlobalNamespace::IBeatmapLevelCollection*() noexcept;

constexpr void __set__levels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* __get__levels() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __get__levels() const;

/// @brief Method get_beatmapLevels addr 0x2341804 size 0x8 virtual true final true
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels() ;

static inline ::GlobalNamespace::BeatmapLevelCollection* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  levels) ;

/// @brief Method .ctor addr 0x234180c size 0x28 virtual false final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  levels) ;

/// @brief Method CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering addr 0x2341834 size 0x7cc virtual false final false
static inline ::GlobalNamespace::BeatmapLevelCollection* CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(::GlobalNamespace::IBeatmapLevelCollection*  beatmapLevelCollection, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLevelCollection(BeatmapLevelCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLevelCollection(BeatmapLevelCollection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapLevelCollection()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelCollection, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelCollection*, "", "BeatmapLevelCollection");
