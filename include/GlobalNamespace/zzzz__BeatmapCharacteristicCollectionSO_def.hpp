#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicCollectionSO)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicCollectionSO);
// Type: ::BeatmapCharacteristicCollectionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4240))
// CS Name: ::BeatmapCharacteristicCollectionSO*
class CORDL_TYPE BeatmapCharacteristicCollectionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _beatmapCharacteristics offset 0x18
 __declspec(property(get=__get__beatmapCharacteristics, put=__set__beatmapCharacteristics)) ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>  _beatmapCharacteristics;

 __declspec(property(get=get_allBeatmapCharacteristics)) ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO*>*  allBeatmapCharacteristics;

constexpr void __set__beatmapCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>& __get__beatmapCharacteristics() ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get__beatmapCharacteristics() const;

/// @brief Method get_allBeatmapCharacteristics addr 0x232d138 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO*>* get_allBeatmapCharacteristics() ;

static inline ::GlobalNamespace::BeatmapCharacteristicCollectionSO* New_ctor() ;

/// @brief Method .ctor addr 0x232d140 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollectionSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapCharacteristicCollectionSO(BeatmapCharacteristicCollectionSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollectionSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapCharacteristicCollectionSO(BeatmapCharacteristicCollectionSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapCharacteristicCollectionSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicCollectionSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicCollectionSO*, "", "BeatmapCharacteristicCollectionSO");
