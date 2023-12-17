#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLevelAnalytics)
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelAnalytics);
// Type: ::MultiplayerLevelAnalytics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4019))
// CS Name: ::MultiplayerLevelAnalytics*
class CORDL_TYPE MultiplayerLevelAnalytics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _multiplayerLevelScenesTransitionSetupData offset 0x18
 __declspec(property(get=__get__multiplayerLevelScenesTransitionSetupData, put=__set__multiplayerLevelScenesTransitionSetupData)) ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  _multiplayerLevelScenesTransitionSetupData;

/// @brief Field _analyticsModel offset 0x20
 __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

constexpr void __set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* __get__multiplayerLevelScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> __get__multiplayerLevelScenesTransitionSetupData() const;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr ::GlobalNamespace::IAnalyticsModel* __get__analyticsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> __get__analyticsModel() const;

/// @brief Method Start addr 0x2224498 size 0x8c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x2224524 size 0x8c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleMultiplayerLevelDidFinish addr 0x22245b0 size 0x6a4 virtual false final false
inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData*  multiplayerResultsData) ;

static inline ::GlobalNamespace::MultiplayerLevelAnalytics* New_ctor() ;

/// @brief Method .ctor addr 0x2224c54 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelAnalytics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLevelAnalytics(MultiplayerLevelAnalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelAnalytics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLevelAnalytics(MultiplayerLevelAnalytics const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLevelAnalytics()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelAnalytics, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelAnalytics*, "", "MultiplayerLevelAnalytics");
