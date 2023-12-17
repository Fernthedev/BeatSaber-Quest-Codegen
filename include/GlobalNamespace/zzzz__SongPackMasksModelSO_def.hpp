#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SongPackMasksModelSO)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class SongPackMasksModelItem;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPackMasksModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModelSO);
// Type: ::SongPackMasksModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4522))
// CS Name: ::SongPackMasksModelSO*
class CORDL_TYPE SongPackMasksModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _defaultSongPackMaskItems offset 0x18
 __declspec(property(get=__get__defaultSongPackMaskItems, put=__set__defaultSongPackMaskItems)) ::System::Collections::Generic::List_1<::StringW>*  _defaultSongPackMaskItems;

/// @brief Field _customSongPackMaskItems offset 0x20
 __declspec(property(get=__get__customSongPackMaskItems, put=__set__customSongPackMaskItems)) ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>  _customSongPackMaskItems;

/// @brief Field _ostAndExtrasCollection offset 0x28
 __declspec(property(get=__get__ostAndExtrasCollection, put=__set__ostAndExtrasCollection)) ::GlobalNamespace::BeatmapLevelPackCollectionSO*  _ostAndExtrasCollection;

/// @brief Field _dlcCollection offset 0x30
 __declspec(property(get=__get__dlcCollection, put=__set__dlcCollection)) ::GlobalNamespace::BeatmapLevelPackCollectionSO*  _dlcCollection;

 __declspec(property(get=get_defaultSongPackMaskItems)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  defaultSongPackMaskItems;

 __declspec(property(get=get_customSongPackMaskItems)) ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>  customSongPackMaskItems;

 __declspec(property(get=get_ostAndExtrasCollection)) ::GlobalNamespace::BeatmapLevelPackCollectionSO*  ostAndExtrasCollection;

 __declspec(property(get=get_dlcCollection)) ::GlobalNamespace::BeatmapLevelPackCollectionSO*  dlcCollection;

constexpr void __set__defaultSongPackMaskItems(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get__defaultSongPackMaskItems() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get__defaultSongPackMaskItems() const;

constexpr void __set__customSongPackMaskItems(::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>& __get__customSongPackMaskItems() ;

constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*> const& __get__customSongPackMaskItems() const;

constexpr void __set__ostAndExtrasCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO* __get__ostAndExtrasCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> __get__ostAndExtrasCollection() const;

constexpr void __set__dlcCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO* __get__dlcCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> __get__dlcCollection() const;

/// @brief Method get_defaultSongPackMaskItems addr 0x236461c size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_defaultSongPackMaskItems() ;

/// @brief Method get_customSongPackMaskItems addr 0x2364624 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*> get_customSongPackMaskItems() ;

/// @brief Method get_ostAndExtrasCollection addr 0x236462c size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* get_ostAndExtrasCollection() ;

/// @brief Method get_dlcCollection addr 0x2364634 size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* get_dlcCollection() ;

static inline ::GlobalNamespace::SongPackMasksModelSO* New_ctor() ;

/// @brief Method .ctor addr 0x236463c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongPackMasksModelSO(SongPackMasksModelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongPackMasksModelSO(SongPackMasksModelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongPackMasksModelSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModelSO, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModelSO*, "", "SongPackMasksModelSO");
