#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(CenterStageLobbyViewController)
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class BeatmapSelectionView;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class CenterStageLobbyViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CenterStageLobbyViewController);
// Type: ::CenterStageLobbyViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5709))
// CS Name: ::CenterStageLobbyViewController*
class CORDL_TYPE CenterStageLobbyViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _beatmapSelectionView offset 0x70
 __declspec(property(get=__get__beatmapSelectionView, put=__set__beatmapSelectionView)) ::GlobalNamespace::BeatmapSelectionView*  _beatmapSelectionView;

/// @brief Field _modifiersSelectionView offset 0x78
 __declspec(property(get=__get__modifiersSelectionView, put=__set__modifiersSelectionView)) ::GlobalNamespace::ModifiersSelectionView*  _modifiersSelectionView;

constexpr void __set__beatmapSelectionView(::GlobalNamespace::BeatmapSelectionView*  value) ;

constexpr ::GlobalNamespace::BeatmapSelectionView* __get__beatmapSelectionView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapSelectionView*> __get__beatmapSelectionView() const;

constexpr void __set__modifiersSelectionView(::GlobalNamespace::ModifiersSelectionView*  value) ;

constexpr ::GlobalNamespace::ModifiersSelectionView* __get__modifiersSelectionView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ModifiersSelectionView*> __get__modifiersSelectionView() const;

/// @brief Method SetLevelGameplaySetupData addr 0x22cc804 size 0x13c virtual false final false
inline void SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData*  levelGameplaySetupData) ;

static inline ::GlobalNamespace::CenterStageLobbyViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22cc940 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CenterStageLobbyViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CenterStageLobbyViewController(CenterStageLobbyViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CenterStageLobbyViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CenterStageLobbyViewController(CenterStageLobbyViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CenterStageLobbyViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CenterStageLobbyViewController, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CenterStageLobbyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CenterStageLobbyViewController*, "", "CenterStageLobbyViewController");
